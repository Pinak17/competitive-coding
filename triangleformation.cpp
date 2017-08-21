#include <iostream>

using namespace std;

int righttri(long long int a,long long int b,long long int c);

int main() {
	int test=0;;
	cin>>test;
	while(test--){
		long long int a,b,c,x;
		cin>>a>>b>>c>>x;
		if((righttri(a+x,b+x,c)) == 1){
			cout<<"YES"<<endl;
		} else if((righttri(a,b+x,c+x)) == 1){
			cout<<"YES"<<endl;
		} else if((righttri(a+x,b,c+x)) == 1){
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}		
	}
	return 0;
}

int righttri(long long int a,long long int b,long long int c){
	if((a*a+b*b) == c*c) {
		return 1;
	} else if((a*a+c*c) == b*b) {
		return 1;
	} else if((c*c+b*b) == a*a) {
		return 1;
	} else {
		return 0;
	}
}