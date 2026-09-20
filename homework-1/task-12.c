#include <stdio.h>
int main(void) {
	int n;
	scanf("%i", &n);
	int a[n];
	int s[n];
	for(int i=0;i<n;i++){
	  scanf("%i", &a[i]);
	  int temp =a[i];
	  int sum =0;
	  while (temp>0){
	    sum +=temp%10;
	    temp /=10;
	  }
	  s[i]=sum;
	}
	for(int i=0; i<n-1; i++){
	  for(int j=0; j<n-1-i; j++){
	    if (s[j]>s[j+1]){
	      int temp = s[j];
	      s[j] =s[j+1];
	      s[j+1] =temp;
	      temp =a[j];
	      a[j] = a[j+1];
	      a[j+1]=temp;
	    }}}
	for(int i=0;i<n;i++){
	  printf("%i ", a[i]);
	}
}
