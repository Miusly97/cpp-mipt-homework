#include <stdio.h>
int main(void) {
	int n;
	int m;
	scanf("%i%i", &n,&m);
	int sum[m];
	for(int j=0;j<m; j++){
	  sum[j]=0;
	}
	int val;
	for(int i=0; i<n;i++){
	  for(int j=0; j<m; j++){
	    scanf("%i", &val);
	    sum[j]+=val;
	  }
	}
	for(int j=0; j<m;j++){
	  printf("%i ", sum[j]);
	}
