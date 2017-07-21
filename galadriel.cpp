//SPOJ CLASSICAL ID 13043
//THE MIRROR OF GALADRIEL

#include <iostream>
#include <string.h>
using namespace std;

int checkmirror(char*);
void OutputResult(int);

int main() {
	char string1[100];
	int test,result;
	cin>>test;
	while(test--) {
		cin>>string1;
		result = checkmirror(string1);
		OutputResult(result);
	}
	return 0;
}

int checkmirror(char string1[]) {
	int len,i,flag;
	len = strlen(string1);
	for(i=0;i<len;i++) {
		if(string1[i] != string1[len-i-1]) {
			flag =0;
			break;
		} else {
			flag =1;
		}
	}
	return flag;
}

void OutputResult(int result) {
	if (result == 1) 
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}