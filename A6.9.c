//LCM of two numbers
#include<stdio.h>
int main()
  {
     int x,y,lcm;
     printf("Enter two numbers\n");
     scanf("%d %d",&x,&y);
     for(lcm=1;lcm<=x*y;lcm++)
          {
            if(lcm%x==0&&lcm%y==0)
            break;
          }
         printf("LCM is %d",lcm);
         return 0;
  }
