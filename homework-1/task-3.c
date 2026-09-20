#include <stdio.h>
 
int main()
{int n;
	scanf("%i",&n);
	if ((0<=n && n<=20 || 100<n && n<200) && n%2 == 0)
	  printf("yes");
	else 
	  printf("no");
}
