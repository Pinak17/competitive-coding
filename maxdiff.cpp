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
	int sum2=0;
	for(i=0;i<n;i++) {
		cin>>num[i];
	}
	sort(num, num+n);
	for(i=0;i<k;i++) {
		sum1=sum1+num[i];
	}
	for(i=k;i<n;i++) {
		sum2=sum2+num[i];
	}
	diff =abs(sum1-sum2);
	return diff;
}