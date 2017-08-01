#include <iostream>

using namespace std;

int main(){
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    int ca=0,co=0;
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
    }
    for(int i=0;i<m;i++){
        int d=a+apple[i];
        if(d>=s && d<=t){
            ca++;
        }
    }
    for(int i=0;i<n;i++){
        int d=b+orange[i];
        if(d>=s && d<=t){
            co++;
        }
    }
    cout<<ca<<endl;
    cout<<co<<endl;
    return 0;
}
