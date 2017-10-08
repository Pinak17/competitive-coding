#include <iostream>
#include <cmath>

using namespace std;

void fillArray(int*, int);
int totalRevenue(int*, int);

int main(){
	int n,rev;
	cin>>n;
	int arr[n];
	fillArray(arr,n);
	rev = totalRevenue(arr,n);
	cout<<rev<<endl;
	return 0;
}

void fillArray(int arr[], int n){
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	return;
}

int totalRevenue(int arr[], int n){
	int rev=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			rev =rev + abs(arr[i]-arr[j]);
		}
	}
	return rev;
}
	
