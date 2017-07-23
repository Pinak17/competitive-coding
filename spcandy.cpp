#include <iostream>
using namespace std;

int main() {
	long long int n,k,test;
	cin>>test;
	while(test--) {
		cin >> n >> k;
		if(k==0)
		  cout << k << " " << n << endl;
		else if(n==0)
		   cout << n << " " << "0" << endl;
		   else
		cout << n/k << " "<<n%k << endl;
	}
	return 0;
}