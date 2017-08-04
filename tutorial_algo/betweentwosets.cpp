#include <bits/stdc++.h>

using namespace std;

int getTotalX(int n, int m) {
    // Complete this function
    int total=0,a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    for(int i=a[n-1];i<=b[0];i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(i%a[j] != 0){
                flag=1;
                break;
            }
        }
        if(flag == 0){
            for(int k=0;k<m;k++){
                if(b[k]%i != 0){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0){
            total++;
        }
    }
    return total;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    int total = getTotalX(n, m);
    cout << total << endl;
    return 0;
}
