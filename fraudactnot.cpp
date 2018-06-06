#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

double median(int*, int, int, int);
double findMedian(int*, int);

int main() {
	int i,n,d,tmp=0;
	cin>>n>>d;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	for(i=d;i<n;i++) {
		if(arr[i] >= 2*median(arr,n,d,i)) {
			tmp++;
		}
		//cout<<arr[i-int(ceil((double)d/(double)2))]<<" "<<((double)d/(double)2)<<endl;
	}
	cout<<tmp<<endl;
	return 0;
}

double median(int *arr, int n, int d, int i) {
	int j,arrt[d],x=i-d;
	for(j=0;j<d;j++) {
		arrt[j] = arr[x];
		x++;
	}
	sort(arrt,arrt+d);
/*	for(int k=0 ;k<d;k++) {
		cout<<arrt[k]<<" ";
	}
	cout<<endl;*/
	double re =  findMedian(arrt,d);
//	cout<<re<<endl;
	return re;
}

double findMedian(int *arrt, int d) {
	if(d%2 != 0) {
		return arrt[int(floor((double)d/(double)2))];
	} else {
		return (double)(arrt[d/2]+arrt[d/2-1])/(double)2;
	}
}
