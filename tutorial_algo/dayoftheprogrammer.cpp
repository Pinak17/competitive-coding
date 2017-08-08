#include <bits/stdc++.h>

using namespace std;

void solve(int year){
    // Complete this function
    int flag=0;
        if(year%400==0){
            //flag=1;
            cout<<"12.09."<<year<<endl;
        } else if ((year%100 != 0) && (year%4 ==0)){
            //flag=1;
            cout<<"12.09."<<year<<endl;
        } else {
            cout<<"13.09."<<year<<endl;
        }
    }

int main() {
    int year;
    cin >> year;
    solve(year);
    //cout << result << endl;
    return 0;
}
