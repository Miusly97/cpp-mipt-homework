#include <stdio.h>
 
int main(void) {
	int m;
	int n;
	int sum=0;
	scanf("%i%i", &m,&n);
	for(int j=1; j<(n+1); j++){
	  for(int i=1; i<(m+1); i++){
	 int k= i+j;
	 if (k%2==0)
	 sum+=i*j;
	 else
	 sum-=i*j;
	}}
	printf("%i", sum);
}
