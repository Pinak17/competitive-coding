#include <iostream>
#include <algorithm>

using namespace std;
long long int lostmax();
int main() {
	long long int test=0,result;
	cin>>test;
	while(test--) {
		result = lostmax();
		cout<<result<<endl;
	}
	return 0;
}

long long int lostmax() {
	long long int n,i=0,c;
	long long int a[1000];
	while (i < 50){
		cin>>n;
  		if(n == '\n' || n == EOF) 
  			break;
  		a[i] = n;
  		cout<<i<<endl;
  		i++;
	}
	sort(a,a+i);
	if(a[i-1] != (i-1))
		return a[i-1];
	else
		return a[i-2];
}