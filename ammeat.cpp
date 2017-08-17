#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int meatball(long long int n, long long int m);

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

int meatball(long long int n, long long int m) {
	vector<long long int> plate;
	long long int meatBalls,i,ans=0,sum=0;
	for(i=0;i<n;i++) {
		cin>>meatBalls;
		plate.push_back(meatBalls);
	}
	sort(plate.rbegin(),plate.rend());
	for(vector<long long int>::iterator it=plate.begin();it!=plate.end();++it){
		sum=sum+*it;
		ans++;
		if(sum>=m){
			break;
		}	 
	}
	if(sum>=m)
		return ans;
	else 
		return -1;
}