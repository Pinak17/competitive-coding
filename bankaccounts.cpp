#include <bits/stdc++.h>

using namespace std;

string feeOrUpfront(int n, int k, int x, int d) {
    // Complete this function
    int p[n];
    double sum=0.00;
    for(int p_i = 0; p_i < n; p_i++){
        cin >> p[p_i];
        double ans = p[p_i]*x*0.01;
        if(ans>k){
            sum = sum + ans;
        } else {
            sum = sum + k;
        }
        
    }
    //cout<<sum<<endl;
    if(sum>d){
        return "upfront";
    } else {
        return "fee";
    }
    
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        int k;
        int x;
        int d;
        cin >> n >> k >> x >> d;        
        string result = feeOrUpfront(n, k, x, d);
        cout << result << endl;
    }
    return 0;
}