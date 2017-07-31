#include <iostream>
#include <algorithm>

using namespace std;

void beverage(int n, int k);

int main(){
    int n;
    int k;
    cin >> n >> k;
    beverage(n,k);
    // your code goes here
    return 0;
}

void beverage(int n, int k){
    int h[n];
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    sort(h,h+n);
    if(h[n-1]-k>0){
        cout<<h[n-1]-k<<endl;
    } else {
        cout<<0<<endl;
    }
}
