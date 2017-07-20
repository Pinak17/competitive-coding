#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int prime(int);
void prime2(int, int);
int main(){
	int n1,n2,i,test;
	cin>>test;
	while(test--) {
		cin>>n1>>n2;
/*		for(i=n1;i<=n2;i++) {
			if((prime(i) == 0) && (i != 1)){
				cout<<i<<endl;
			}
		}
		cout<<endl;*/
		prime2(n1, n2);
		cout<<endl;
	}
	return 0;
}

int prime(int num) {
	int i,flag=0;
	for(i=2;i<num;i++) {
		if (num%i != 0) {
			flag = 0;
		} else {
			flag = 1;
			break;
		}
	}
	return flag;
}

void prime2(int n1, int n2) {
	bool prime[n2+1];
    	memset(prime, true, sizeof(prime));
 
    	for (int p=2; p*p<=n2; p++)
    	{
        // If prime[p] is not changed, then it is a prime
        	if (prime[p] == true)
        	{
            	// Update all multiples of p
            		for (int i=p*2; i<=n2; i += p)
                	prime[i] = false;
       	 	}
    	}
 
    	// Print all prime numbers
    	for (int p=n1; p<=n2; p++)
       		if (prime[p] && p>1)
          		cout << p <<endl;
}
