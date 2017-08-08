#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n) {
    // Complete this function
    int ar[n],maxfreq=0,temp=0;
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int count[5]={0,0,0,0,0};
    for(int i=0;i<n;i++){
        if(ar[i]==1){
            count[0]++;
        } else if(ar[i]==2){
            count[1]++;
        } else if(ar[i]==3){
            count[2]++;
        } else if(ar[i]==4){
            count[3]++;
        } else if(ar[i]==5){
            count[4]++;
        }
    }
    for(int i=0;i<5;i++){
        if(count[i]>maxfreq){
            maxfreq=count[i];
            temp=i;
        } else if(count[i]==maxfreq && i<temp){
            maxfreq=count[i];
            temp=i;
        }
    }
    return temp+1;
}

int main() {
    int n;
    cin >> n;
    
    int result = migratoryBirds(n);
    cout << result << endl;
    return 0;
}