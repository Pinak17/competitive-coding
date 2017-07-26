#include <iostream>

using namespace std;

int main() {
	int n,m,a,b,k,list[10000000],i,max=0;
	cin>>n>>m;
	for(i=0;i<n;i++) {
		list[i]=0;
	}	
	for(i=0;i<m;i++){
		cin>>a>>b>>k;
		for(int j=a-1;j<b;j++) {
			list[j]=list[j]+k;
		}		
	}
	for(i=0;i<n;i++){
		if(max<list[i]) {
			max = list[i];
		}
	}
	cout<<max<<endl;
	return 0;
}