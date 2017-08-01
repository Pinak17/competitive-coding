#include <iostream>

using namespace std;
void sylvesters(long long int n);
int main() {
	long long int test,n;
	cin>>test;
	while(test--){
		cin>>n;
		sylvesters(n);
	}
	return 0;
}

void sylvesters(long long int n) {
	unsigned long long int seq[n],i,j,mul=1;
	seq[0]=2;
	cout<<seq[0]<<" ";
	for(i=1;i<n;i++) {
		mul=1;
		for(j=0;j<i;j++) {
			mul=mul*seq[j];
			mul=mul%(1000000007);
		}
		seq[i]=mul+1;
		cout<<seq[i]<<" ";
	}
	cout<<endl;
}