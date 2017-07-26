#include <iostream>
 
using namespace std;

int main() {
	int n,d,i,a[1000000],temp[100000];
	cin>>n>>d;
	for(i=0;i<n;i++) {
		cin>>a[i];
	}
	for(i=0;i<d;i++){
		temp[i]=a[i];
	}
	for(i=d;i<n;i++) {
		cout<<a[i]<<" ";
	}
	for(i=0;i<d;i++) {
		cout<<temp[i]<<" ";
	}
	return 0;
}