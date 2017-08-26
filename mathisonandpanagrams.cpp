#include <iostream>
#include <string>

using namespace std;

int main() {
	int test=0;
	cin>>test;
	while(test--){
		int p[26],price=0;
		string s;
		for(int i=0;i<26;i++){
			cin>>p[i];
		}
		cin>>s;
		/*for(int i=0;i<26;i++){
			cout<<p[i]<<" ";
		}
		for(int i=0;i<s.size();i++){
			cout<<s[i]<<" ";
		}*/
		//cout<<char(97)<<endl;
		for(int i=0;i<26;i++){
			for(int j=0;j<s.size();j++){
				//cout<<s[j]<<endl;
				if(char(97+i) == s[j]){
					break;
				} else if(j==(s.size()-1)){
					//cout<<p[i]<<" ";
					price = price + p[i];
				}
			}
		}
		cout<<price<<endl;
	}
	return 0;
}