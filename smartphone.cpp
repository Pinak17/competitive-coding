#include <iostream>
#include <algorithm>

using namespace std;

void fillArray(long long int*, long long int);
long long int maxRev(long long int*, long long int);

int main(){
	long long int n;
	cin>>n;
	long long int arr[n],rev;
	fillArray(arr,n);
	sort(arr,arr+n);
	rev = maxRev(arr,n);
	cout<<rev<<endl;
	return 0;
}

void fillArray(long long int arr[], long long int n){
	for(long long int i=0;i<n;i++){
		cin>>arr[i];
	}
	return;
}

long long int maxRev(long long int arr[],long long int n){
	long long int rev=arr[0]*n;
	for(long long int i=0;i<n;i++){
		if(arr[i]*(n-i) > rev){
			rev=arr[i]*(n-i);
		}
	}
	return rev;
}
