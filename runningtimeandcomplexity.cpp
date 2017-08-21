#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test;
    cin>>test;
    while(test--){
        int n,flag=0;
        cin>>n;
        int sq = sqrt(n);
        for(int i = 2; i <= sq; i++) {
            if(n%i == 0) {
                flag=1;
                break;
            }
        }
        if(flag == 1 || n == 1){
            cout<<"Not prime"<<endl;
        } else {
            cout<<"Prime"<<endl;
        }
    }
    return 0;
}