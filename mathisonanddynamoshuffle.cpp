#include <iostream>
#include <cmath>

using namespace std;

unsigned long long int shuffle(int n);

int main(){
	int test=0;
	cin>>test;
	while(test--){
		int n;
		unsigned long long int ans = shuffle(n);
		cout<<ans<<endl;
	}
	return 0;
}

unsigned long long int shuffle(int n) {
	unsigned long long int size = pow(2.0, n);
	unsigned long long int k,a[size],mid;
	cin>>k;
	mid = pow(2.0, n-1);
	for(unsigned long long int i = 0; i<mid; i+=2){
		a[i] = i;
		a[i+1] = i+mid;
	}
	for(unsigned long long int i = mid; i<size; i+=2){
		a[i] = i-mid+1;
		a[i+1] = i+1;
	}	
	for(unsigned long long int i = 0; i<size; i++){
		if(a[i] == k) {
			return i;
		}
	}
	return 0;
}
	
	

	