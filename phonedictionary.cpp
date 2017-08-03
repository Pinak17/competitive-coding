#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main(){
	long long int num,i,n;
	string name;
	map<string, long long int> phone_dict;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>name;
		cin>>num;
		phone_dict.insert(pair<string, long long int>(name, num));
	}
	while(cin >> name) {
    if (phone_dict.find(name) != phone_dict.end()) {
        cout << name << "=" << phone_dict.find(name)->second << endl;
    } else {
        cout << "Not found" << endl;
    }
}
	return 0;
}
