#include <iostream>

using namespace std;

void minCondition(int);
int findMin(int*, int);

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		minCondition(n);
	}
	return 0;
}

void minCondition(int n){
	int ele[n],min;
	for(int i=0;i<n;i++){
		cin>>ele[i];
	}
	min = findMin(ele,n);
	for(int i=0;i<n;i++){
		if(ele[i] == min){
			cout<<i+1<<endl;
			break;
		}
	}
	return;
}

int findMin(int ele[],int n){
	int min=ele[0];
	for(int i=1;i<n;i++){
		if(ele[i]<min){
			min=ele[i];
		}
	}
	return min;
}
