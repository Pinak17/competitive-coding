#include <iostream>
#include <vector>
#include <cstring>
#include <regex>

using namespace std;

int main(){
	int test;
	cin>>test;
	vector<string> db;
	regex e(".+@gmail\\.com$");
	while(test--){
		string name,email;
		cin>>name>>email;
		if(regex_match(email, e)){
			db.push_back(name);
		}
	}
	sort(db.begin(), db.end());
	for(int i=0;i<db.size();i++){
		cout<<db[i]<<endl;
	}
	return 0;
}