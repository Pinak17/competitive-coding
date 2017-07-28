#include <iostream>
#include <algorithm>

using namespace std;

unsigned long long int meatball(unsigned long long int n, unsigned long long int m);

int main() {
	unsigned long long int test,n,m,ans;
	cin>>test;
	while(test--){
		cin>>n>>m;
		ans=meatball(n,m);
		cout<<ans<<endl;
	}
	return 0;
}

unsigned long long int meatball(unsigned long long int n,unsigned long long int m) {
	unsigned long long int plate[n],i,ans=0,sum=0;
	for(i=0;i<n;i++) {
		cin>>plate[i];
	}
	sort(plate,plate+n,greater<int>());
	for(i=0;i<n;i++) {
		if(m==0) {
			break;
		}
		sum=sum+plate[i];
		ans++;
		if(sum>=m) {
			break;
		}
		if(i==(n-1)) {
			sum<m;
			ans=-1;
			break;
		}
	}
	return ans;
}