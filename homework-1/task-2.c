#include <stdio.h>
int main()
{
int n;
scanf("%i", &n);
if (n<1000)
   printf("%i",++n);
else
   printf("Введите число от 0 до 1000");
}
 
