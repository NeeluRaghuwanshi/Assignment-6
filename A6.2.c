// Sum of first N even natural numbers
#include<stdio.h>
int main()
     {

    int i,n,s=0;
    printf("Enter a number\n");
    scanf("%d",&n);
     printf(" sum of first %d even natural numbers is :\n",n);
     for(i=1; i<=n; i++)
        {
          s = s + 2 * i;

        }
        printf("%d",s);
        return 0;

 }
