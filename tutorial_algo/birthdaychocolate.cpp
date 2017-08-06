#include <iostream>

using namespace std;
int birth(int n);
int main() {
	int n;
	cin>>n;
	int ans= birth(n);
	cout<<ans<<endl;
	return 0;
}

int birth(int n){
	int cake[n],m,d,count=0;
	for(int i=0;i<n;i++){
		cin>>cake[i];
	}
	cin>>d>>m;
	for(int i=0;i<=n-m;i++){
		int sum=0;
		for(int j=i;j<i+m;j++) {
			sum=sum+cake[j];
        }
        if(sum == d){
            count++;
            //cout<<cake[i]<<"+"<<cake[j]<<"="<<sum<<endl;
            //break;
        } else if (sum > d){
            //cout<<sum<<endl;
            //break;
        }
	}
	return count;				
}