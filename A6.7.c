//count digits in a number
#include<stdio.h>
int main()
  {
    int n,c=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n!=0)
    {
      n=n/10;
      c++;
    }
    printf("number of digits are: %d\n",c);
    return 0;

  }
