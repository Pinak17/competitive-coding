#include <iostream>
#include <string>

using namespace std;
void changearray(int n);
void bin_to_dec(int bin);
int main(){
	int n;
	cin>>n;
	changearray(n);
	return 0;
}

void changearray(int n){
	string a;
	int q;
	cin>>a;
	cin>>q;
	/*for(int i=0;i<a.length();i++){
		cout<<a[i];
	}*/
	while(q--){
		int x;
		cin>>x;
		for(int i=0;i<x;i++){
			if(a[i] == '1')
				a[i] = '0';
			else if (a[i] == '0')
				a[i] = '1';
		}
		/*for(int i=0;i<a.length();i++){
			cout<<a[i];
		}*/
	}
	/*for(int i=0;i<a.length();i++){
		cout<<a[i];
	}*/
	int bin = stoi(a);
	bin_to_dec(bin);
	return;
}

void bin_to_dec(int bin){
	int rem,dec=0,base=1;
	int num = bin;
	while (num > 0) {
        rem = num % 10;
        dec = dec + rem * base;
        base = base * 2;
        num = num / 10;
    }
	cout<<dec<<endl;
}