#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int ex[3],re[3];
    for(int i=0;i<3;i++){
        cin>>re[i];
    }
    for(int i=0;i<3;i++){
        cin>>ex[i];
    }
    if(re[2]>ex[2]){
        cout<<10000<<endl;
    } else if(re[2]<ex[2]){
        cout<<0<<endl;
    } else {
        if(re[1]>ex[1]){
            cout<<(re[1]-ex[1])*500<<endl;
        } else if((re[2]<ex[2]) || (re[1]<ex[1])){
            cout<<0<<endl;
        } else {
            if(re[0]>ex[0]){
                cout<<(re[0]-ex[0])*15<<endl;
            } else if((re[0]<ex[0]) || (re[2]<ex[2]) || (re[1]<ex[1])){
                cout<<0<<endl;
            } else {
                cout<<0<<endl;
            }
        }
    }
    return 0;
}