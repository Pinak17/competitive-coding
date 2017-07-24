#include <iostream>
#include <algorithm>
using namespace std;
 
int maxdiff(int, int);
 
int main() {
	int test,n,k,diff;
  	cin>>test;
	while(test--) {
		cin>>n>>k;
		diff = maxdiff(n, k); 
		cout<<diff<<endl;
	}
	return 0;
}
 
int maxdiff(int n, int k) {
	int num[n],i,diff;
	int sum1=0;
	int sum=0;
	for(i=0;i<n;i++) {
		cin>>num[i];
		sum = sum + num[i];
	}
	sort(num, num+n);
	k=k<(n-k)?k:(n-k);
	for(i=0;i<k;i++) {
		sum=sum-num[i];
		sum1=sum1+num[i];
	}
	diff = abs(sum-sum1);
	return diff;
}
