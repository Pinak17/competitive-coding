#include <iostream>
#include <algorithm>
using namespace std;

int minDiffSkill(int);
void fillarray(int*, int);
int main() {
	int test, result, n;
	cin>>test;
	while(test--) {
		cin>>n;
		result = minDiffSkill(n);
		cout<<result<<endl;
	}
	return 0;
}

int minDiffSkill(int n) {
	long long s[n];
	int i,j,min;
	int result=0;
	for(i=0;i<n;i++) {
		cin>>s[i];
	}
	sort(s,s+n);
	min = s[1]-s[0];
	for(j=1;j<n;j++) {
		if((s[j+1]-s[j]) < min) {
			min = s[j+1]-s[j];
		}
	}	
	return min;
}