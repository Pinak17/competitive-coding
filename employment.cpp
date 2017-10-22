#include <iostream>
#include <algorithm>

using namespace std;

void employ(int,int);

int main(){
	int test=0;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		employ(n,k);
	}
	return 0;
}

void employ(int n,int k){
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<arr[(n+k)/2]<<endl;
	return;
}
