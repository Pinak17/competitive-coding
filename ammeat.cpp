#include <iostream>
#include <algorithm>

using namespace std;

long long int meatball(long long int n, long long int m);

int main() {
	long long int test,n,m,ans;
	cin>>test;
	while(test--){
		cin>>n>>m;
		ans=meatball(n,m);
		cout<<ans<<endl;
	}
	return 0;
}

long long int meatball(int n, int m) {
	long long int plate[n],i,ans=0,sum=0;
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