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
	long long int goal[n],i,j;
	int maxdiff=-1;
	for(i=0;i<n;i++) {
		scanf("%lld",&goal[i]);
	}
	for(i=0;i<n;i++) {
		for(j=i;j<n;j++) {
			if ((goal[j] > goal[i]) && ((goal[j]-goal[i]) > maxdiff)) {
				maxdiff = goal[j]-goal[i];
			}				
		}
	}
	return maxdiff;
}

void print(int maxdiff) {
	if(maxdiff < 0) {
		printf("UNFIT\n");
	}else{
		printf("%lld\n",maxdiff);
	}
}