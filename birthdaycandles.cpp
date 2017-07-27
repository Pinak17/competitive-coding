#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int candle[100000],n,h,i,j=1,count=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>candle[i];
	}
	sort(candle,candle+n);
	while(candle[n-j] == candle[n-1]) {
		count++;
		j++;
	}
	cout<<count<<endl;
	return 0;
}