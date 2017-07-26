#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	int n,i,j,q,count;
	string name[1000],query[1000];
	cin>>n;
	for(i=0;i<n;i++) {
		cin>>name[i];
	}
	cin>>q;
	for(i=0;i<q;i++) {
		cin>>query[i];
	}
	for(i=0;i<q;i++) {
		count = 0;
		for(j=0;j<n;j++) {
			if(query[i] == name[j]) {
				count++;
			}		
		}
		cout<<count<<endl;
	}
	return 0;
}