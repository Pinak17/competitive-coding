#include <iostream>
#include <string>

using namespace std;

int main() {
	int test=0,i,j;
	string s1,s2;
	cin>>test;
	while(test--) {
		int count=0;
		cin>>s1>>s2;
		for(i=0;i<s1.length();i++){
			for(j=0;j<s2.length();j++) {
				if((s1[i] == s2[j]) && ((s1[i] != NULL) || (s2[j] != NULL))) {
					s1[i]=NULL;
					s2[j]=NULL;
					count++;
					break;
				}
			}
		}
	cout<<count<<endl;	
	}
	return 0;
}