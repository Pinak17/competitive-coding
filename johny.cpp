//Codechef easy problem(JOHNY)
#include <iostream>
#include <algorithm>
using namespace std;

int getPosition(int);
int getIndex(int*, int, int);

int main() {
	int test,n,result;
	cin>>test;
	while(test--){
		cin>>n;
		result = getPosition(n);
		cout<<result<<endl;
	}
	return 0;
}

int getPosition(int n) {
	int num[n],k,i,t,index;;
	for(i=0;i<n;i++) {
		cin>>num[i];
	}
	cin>>k;
	t=num[k-1];
	sort(num,num+n);
	index=getIndex(num, n, t);
	return index;
}

int getIndex(int num[], int n, int t) {
	int i;
	for(i=0;i<n;i++) {
		if(num[i] == t) {
			i++;
			return i;
			break;
		}
	}
}
