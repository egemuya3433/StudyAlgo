#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int fibonacci(int n);

int main(){
    vector<int> temp;
    int w = 0;

    cin >> w;
    
    for(int i = 0; i < w; i++){
        int t = 0;
        cin >> t;
        temp.push_back(t);
    }
    for(int i = 0; i < w; i++){
        int n = temp[i];
        if(n == 0){
            cout << "1" << " " << "0"<<endl;
        }
        else if(n == 1){
            cout << "0" << " " << "1"<<endl;
        }
        else{
            cout << fibonacci(n - 1) << " " <<fibonacci(n) << endl;
        }
    }

    return 0;
}   

int fibonacci(int n) {
    float sqrt_5 = pow(5, 0.5);
    float ans = 1 / sqrt_5 * ( pow(((1 + sqrt_5) / 2), n)  - pow(((1 - sqrt_5) / 2), n) );
    return int(ans);
}