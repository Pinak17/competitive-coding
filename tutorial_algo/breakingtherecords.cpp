#include <iostream>

using namespace std;

void records(int n);
int main(){
	int n;
	cin>>n;
	records(n);
	return 0;
}

void records(int n) {
	int score[n],max,min,countmax=0,countmin=0;
	cin>>score[0];
	max=score[0];
	min=score[0];
	for(int i=1;i<n;i++) {
		cin>>score[i];
		if(score[i]>max){
			max=score[i];
			countmax++;
		}
		if(score[i]<min){
			min=score[i];
			countmin++;
		}
	}
	cout<<countmax<<" "<<countmin<<endl;
}