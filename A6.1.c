//sum of first N natural numbers
#include<stdio.h>
int main()
    {
      int i,n,s=0;
      printf("Enter a number\n");
      scanf("%d",&n);
      printf("sum of first %d natural numbers is :\n",n);
      for(i=1;i<=n;i++)
      {
          s=s+i;
      }
        printf("%d",s);
        return 0;
    }
