//Reverse of a number
#include<stdio.h>
int main()
  {
     int n,r,x;
     printf("Enter a number\n");
     scanf("%d",&n);
     while(n!=0)
       {
         x=n%10;
         r=10*r+x;
         n=n/10;
       }
       printf("Reverse is %d",r);
       return 0;
  }
