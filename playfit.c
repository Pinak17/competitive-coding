#include <stdio.h>

int goaldiff(int);
void print(int);

int main() {
	long long int test=0,n,maxdiff;
	scanf("%lld",&test);
	while(test--) {
		scanf("%lld",&n);
		maxdiff = goaldiff(n);
		//cout<<maxdiff<<endl;
		print(maxdiff);
	}
	return 0;
}

int goaldiff(int n) {
	int lowest,i,num,diff=0;
	scanf("%d",&lowest);
	for(i=1;i<n;i++) {
		scanf("%d",&num);
		if(num <lowest) {
			lowest=num;
		} else if(num-lowest > diff) {
			diff = num-lowest;
		}
	}
	return diff;
	
}

void print(int maxdiff) {
	if(maxdiff <= 0) {
		printf("UNFIT\n");
	}else{
		printf("%lld\n",maxdiff);
	}
}