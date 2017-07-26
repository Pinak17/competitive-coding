#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int noe,i,num[1000000];
	cin>>noe;
	for(i=0;i<noe;i++) {
		cin>>num[i];
	}
	sort(num,num+noe);
	for(i=0;i<noe;i++) {
		cout<<num[i]<<endl;
	}
	return 0;
}