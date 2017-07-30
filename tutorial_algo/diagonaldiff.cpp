#include <iostream>

using namespace std;
int diagonalDifference(int);
int main(){
	int n,diff;
	cin>>n;
	diff = diagonalDifference(n);
	cout<<diff<<endl;
}

int diagonalDifference(int n){
	int a[n][n],sum1=0,sum2=0;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++) {
		sum1 = sum1 + a[i][i];
		sum2 = sum2 + a[i][n-1-i];
	}
	return abs(sum1-sum2);
}
