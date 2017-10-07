#include <iostream>
#include <cmath>

using namespace std;

void magicArrays(int);
void fillArray(int*, int);
void findMinMax(int*, int);
void update();
int opt1();
int opt2();

int mi1,ma1,mi2,ma2,id=1,a1=0,a2=0;

int main(){
	int test;
	cin>>test;
	while(test--){
		id=1;a1=0;a2=0;
		int n;
		cin>>n;
		magicArrays(n);
	}
	return 0;
}

void magicArrays(int n){
	int m;
	cin>>m;
	int arr[m];
	fillArray(arr,m);
	findMinMax(arr,m);
	update();
	for(int k=2;k<=n;k++){
		cin>>m;
		fillArray(arr,m);
		findMinMax(arr,m);
		a1=a1+opt1();
		a2=a2+opt2();
		id++;
		update();
	}
	if(a1>=a2){
		cout<<a1<<endl;
	}else{
		cout<<a2<<endl;
	}
}

void fillArray(int arr[], int m){
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	return;
}

void findMinMax(int arr[],int m){
	mi2=arr[0];
	ma2=arr[0];
	for(int i=1;i<m;i++){
		if(arr[i]<mi2){
			mi2=arr[i];
		}
		if(arr[i]>ma2){
			ma2=arr[i];
		}
	}
	return;
}

void update(){
	mi1=mi2;
	ma1=ma2;
	return;
}

int opt1(){
	return (abs(ma2-mi1)*id);
}

int opt2(){
	return (abs(mi2-ma1)*id);
}	
