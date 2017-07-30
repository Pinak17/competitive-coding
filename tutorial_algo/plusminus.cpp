#include <iostream>
#include <iomanip>

using namespace std;
void plusminus(int);
int main() {
	int n;
    cin>>n;
	plusminus(n);
	return 0;
}

void plusminus(int n) {
	int a[n];
    float pl,mi,ze,p=0,m=0,z=0;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		if(a[i]>0) {
			p++;
		} else if (a[i]<0) {
			m++;
		} else {
			z++;
		}
	}
    pl=p/n;
    mi=m/n;
    ze=z/n;
	cout<<setprecision(6)<<pl<<endl;
	cout<<setprecision(6)<<mi<<endl;
	cout<<setprecision(6)<<ze<<endl;
}