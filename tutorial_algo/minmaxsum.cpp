#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	long long int a[5],min,max;
	for(int i=0;i<5;i++) {
		cin>>a[i];
	}
	sort(a,a+5);
	max=a[4]+a[3]+a[2]+a[1];
	min=a[0]+a[3]+a[2]+a[1];
	cout<<min<<" "<<max<<endl;
	return 0;
}