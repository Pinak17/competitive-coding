#include <iostream>

using namespace std;

void ground(int n, int m);

int main() {
	int test;
	cin>>test;
	while(test--) {
		int n,m;
		cin>>n>>m;
		ground(n,m);
	}
	return 0;
}

void ground(int n, int m) {
	int a[n],sum=m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max=a[0];
	for(int i=0;i<n;i++) {
		if(a[i]>max) {
			max=a[i];
		}
	}
	for(int i=0;i<n;i++) {
		sum = sum +a[i];
	}
	//cout<<sum<<endl;
	if ((sum%n == 0) && (sum/n >= max)){
		cout<<"Yes"<<endl;
	} else if (m==0){
		cout<<"Yes"<<endl;
	} else {
		cout<<"No"<<endl;
	}
}	