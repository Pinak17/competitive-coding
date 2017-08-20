#include <iostream>
#include <cmath>

using namespace std;

float elevator(int N, int v2);
float stair(int N, int v1);

int main(){
	int test=0;
	cin>>test;
	while(test--){
		int N,v1,v2;
		cin>>N>>v1>>v2;
		float tl= elevator(N,v2);
		float ts= stair(N,v1);
		if(tl<ts) {
			cout<<"Elevator"<<endl;
		} else {
			cout<<"Stairs"<<endl;
		}
	}
	return 0;
}

float elevator(int N, int v2){
	float tl = (float)((N*2))/(float)v2;
	return tl;
}

float stair(int N, int v1){
	float ts= float((1.414*N))/(float)v1;
	return ts;
}