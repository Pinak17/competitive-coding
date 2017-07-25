#include <iostream>
#include <algorithm>

using namespace std;

int goaldiff(int);
void print(int);

int main() {
	long long int test,n,maxdiff;
	cin>>test;
	while(test--) {
		cin>>n;
		maxdiff = goaldiff(n);
		//cout<<maxdiff<<endl;
		print(maxdiff);
	}
	return 0;
}

int goaldiff(int n) {
	int goal[n],maxdiff=-1,i,j;
	for(i=0;i<n;i++) {
		cin>>goal[i];
	}
	for(i=0;i<n;i++) {
		for(j=i;j<n;j++) {
			if ((goal[j] > goal[i]) && ((goal[j]-goal[i]) > maxdiff)) {
				maxdiff = goal[j]-goal[i];
			}				
		}
	}
	return maxdiff;
}

void print(int maxdiff) {
	if(maxdiff < 0) {
		cout<<"UNFIT"<<endl;
	}else{
		cout<<maxdiff<<endl;
	}
}