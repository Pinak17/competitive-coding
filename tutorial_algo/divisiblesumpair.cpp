#include <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k) {
    // Complete this function
    int ar[n],count=0;
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((ar[i]+ar[j])%k == 0){
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    
    int result = divisibleSumPairs(n, k);
    cout << result << endl;
    return 0;
}
