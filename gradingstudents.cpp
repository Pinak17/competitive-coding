#include <bits/stdc++.h>

using namespace std;

void grades(int n){
    // Complete this function
    int num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    for(int i=0;i<n;i++){
        if(num[i]<38){
            cout<<num[i]<<endl;;
        } else {
            int rem,quo;
            rem=num[i]%5;
            quo=num[i]/5;
            if(rem<3){
                cout<<num[i]<<endl;
            } else {
                cout<<5*(quo+1)<<endl;
            }
        }
        
    }
}

int main() {
    int n;
    cin >> n;
    grades(n);
    

    return 0;
}
