//codechef runtime error

#include <stdio.h>
#include <string.h>

int palin();
int main() {
	int test=0,npalin;
	scanf("%d",&test);
	while(test--) {
		npalin = palin();
		printf("%d\n",npalin);
	}
}

int palin() {
	char recipe[100];
	int len,i;
	int num=0;
	int flag=0;
	scanf("%s",recipe);
	len = strlen(recipe);
	for(i=0;i<len/2;i++) {
		if((recipe[i] == '?') && (recipe[len-1-i] == '?')) {
			if(flag<1) {
				num=num+26;
				flag++;
			} else {
				num=num*26;
			}
		} else if ((recipe[i] == '?') || (recipe[len-1-i] == '?')) {
			num = num +1;
		}else if(recipe[i] != recipe[len-1-i]) {
			num=0;
			break;
		} else if(num == 0){
			num=1;
		}
	}
	if((len==1) && (recipe[0] == '?')) {
		num=26;
	} else if ((len==1) && (recipe[0] != '?')){
		num=1;
	}
	return num;
}