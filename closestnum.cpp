#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int i,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int arrd[n-1];
	for(i=0;i<n-1;i++) {
		arrd[i] = abs(arr[i+1] - arr[i]);
	}
	int sn = *min_element(arrd,arrd+(n-1));
//	cout<<sn<<endl;
	for(i=0;i<n-1;i++) {
		if(arrd[i] == sn) {
			cout<<arr[i]<<" "<<arr[i+1]<<" ";
		}
	}
	cout<<endl;
	return 0;
}
