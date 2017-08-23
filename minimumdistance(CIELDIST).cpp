#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
		double ds,dt,d,ans; 
		cin>>ds>>dt>>d;
		if((ds+dt > d) && (d+ds > dt) && (d+dt >ds)){
			cout<<"0.0"<<endl;
		} else if(ds+dt <= d){
			ans = (d-ds-dt);
			cout<<setprecision(6)<<ans<<endl;
		} else if(ds >= d+dt) {
			ans = (ds-d-dt);
			cout<<setprecision(6)<<ans<<endl;
		} else if(dt >= d+ds) {
			ans = (dt-d-ds);
			cout<<setprecision(6)<<ans<<endl;
		}
			
	}
	return 0;
}