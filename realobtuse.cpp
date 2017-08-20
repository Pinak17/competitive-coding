#include <iostream>

using namespace std;

int even(int k, int a, int b);
int odd(int k,int a, int b);

int main() {
	int test=0;
	cin>>test;
	while(test--) {
		int k,a,b,ans;
		cin>>k>>a>>b;
		if(k%2 == 0) {
			ans = even(k,a,b);
		} else {
			ans = odd(k,a,b);
		}
		cout<<ans<<endl;
	}
	return 0;
}

int even(int k, int a, int b) {
	int mid=k/2;
	if(a+mid == b) {
		return 0;
	} else if ((a+mid) > b) {
		return (abs(a-b)-1);
	} else {
		return (k-b+a-1);
	}
}

int odd(int k,int a, int b) {
	float mid = float(k)/float(2);
	if((a+mid) > b) {
		return (abs(a-b)-1);
	} else {
		return (k-b+a-1);
	}
}