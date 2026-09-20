#include <stdio.h>
int main(void) {
	int n;
	scanf("%i", &n);
	int a[1000];
	for(int i=0; i<n; i++){
	  scanf("%i",&a[i]);
	}
	int k=0;
	for(int i=0; i<n; i++){
	  if (a[i]>=0){
	    a[k]=a[i];
	    k+=1;
	  }
	}
	for(int i=0; i<k; i++){
	  printf("%i ",a[i]);
	}
}
