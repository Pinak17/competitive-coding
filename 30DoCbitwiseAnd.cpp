#include <iostream>

using namespace std;

int maximumBitwise(int, int);

int main(){
	int test=0;
	cin>>test;
	while(test--){
		int n,k,max;
		cin>>n>>k;
		max = maximumBitwise(n,k);
		cout<<max<<endl;
	}
	return 0;
}

int maximumBitwise(int n, int k){
	int max=0,temp;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			temp = i&j;
			if(temp>max && temp<k){
				max=temp;
			}
		}
	}
	return max;
}
	
