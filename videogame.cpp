#include <iostream>

using namespace std;

void fillArray(int*, int);
void followCommand(int*, int, int);
void printArray(int*, int);

int main(){
	int n,max;
	cin>>n>>max;
	int arr[n];
	fillArray(arr,n);
	followCommand(arr,n,max);
	printArray(arr,n);
	cout<<""<<endl;
	return 0;
}

void fillArray(int arr[], int n){
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	return;
}

void followCommand(int arr[], int n, int max){
	int i=0,ip,c=0;
	while(1){
		cin>>ip;
		if(ip == 1 && i != 0){
			i--;
		} else if (ip == 2 && i != (n-1)){
			i++;
		} else if (ip == 3 && arr[i] != 0 && c == 0){
			arr[i]--;
			c=1;
		} else if (ip == 4 && arr[i] != max && c== 1){
			arr[i]++;
			c=0;
		} else if (ip == 0){	
			break;
		}
	}
	return;
}

void printArray(int arr[], int n){
	for(int i=0;i<n;i++){	
		cout<<arr[i]<<" ";
	}
	return;
}
