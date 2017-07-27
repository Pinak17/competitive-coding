#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>

using namespace std;

int main() {
	long long int price[200000],p[200000],n,loss;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>price[i];
	}
	for(int i=0;i<n;i++) {
		p[i]=price[i];
	}
	sort(p,p+n);
	loss=2147483647;
	for(int i=1;i<n;i++) {
		if((p[i]-p[i-1]<loss) && (distance(price, find(price, price + n, p[i]))<distance(price, find(price, price + n, p[i-1]))) ) {
			loss=p[i]-p[i-1];
		}
	}
	cout<<loss<<endl;
	return 0;
}	