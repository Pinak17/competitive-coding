#include <iostream>

using namespace std;

int main(){
	long long unsigned int n;
	winner(n);
	return 0;
}

void winner(long long unsigned int n) {
	long long unsigned int a[n],q,l,r,i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>q;
	while(q--){
		cin>>l>>r;
		long long unsigned int sum=0;
		for(i=l;i<=r;i++) {
			sum=sum+a[i];
		}
		if(sum%2 != 0) {
			cout<<"Freb"<<endl;
		} else {
			cout<<"Phineas"<endl;
		}
	}
		
}