#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <vector>

using namespace std;
bool comp(const string &left, const string &right);
void sorted (int);
int main(){
    int n;
    cin >> n;
    sorted(n);
    return 0;
}

void sorted(int n){
    vector<string> num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    string SortArr(num,num+n);
    sort(SortArr.begin(),SortArr.end(),comp);
    for(int i=0;i<n;i++){
        cout<<SortArr[i]<<endl;
    }
}

bool comp(const string &left, const string &right){
    int n=left.size();
    int m=right.size();
    if(n==m){
        return left<right;
    }
    return n<m;
}
