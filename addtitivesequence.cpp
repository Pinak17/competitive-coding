//NPAT 2017
#include <iostream>

using namespace std;

int checkAddSeq(int *x, int *y, int n) {
  for(int i = 0; i < n; i++) {
    int sum=0;
    for(int j=0;j<=i;j++) {
      sum=sum+x[j];
    }
    if(y[i] != sum) {
	    return 0;
    }
  }
  return 1;
}

