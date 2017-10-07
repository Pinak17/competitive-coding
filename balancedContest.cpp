#include <iostream>
#include <cmath>

using namespace std;

void balance(int, int);

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,p;
		cin>>n>>p;
		balance(n,p);
	}
	return 0;
}

void balance(int n,int p){
	int s[n],cw=0,hp=0;
	for(int i=0;i<n;i++){
		cin>>s[i];
		if(s[i]>=(p/2)){
			cw++;
		} else if(s[i]<=(p/10)){
			hp++;
		}
	}
//	cout<<"cakewalk :"<<cw<<endl;
//	cout<<"hard :"<<hp<<endl;
	if(cw == 1 && hp == 2){
		cout<<"yes"<<endl;
	} else {
		cout<<"no"<<endl;
	}
	return;
}
	
