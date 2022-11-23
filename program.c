1)print hello world
 #include<stdio.h>
 int main()
    {
      printf("Hello World");
      return 0;
    }

2) #include<stdio.h>
   int main()
   {
     char name[20] ;
     printf("Enter your name");
     scanf("%s",name);
     printf("Welcome %s",name);
     return 0;
  }
3) #include<stdio.h>
   int main()
   {
     char name1 [20];
     char name2 [20];
     printf("Enter your name 1");
     printf("Enter your name 2");
     scanf("%s %s",name1,name2);
     printf("Welcome %s and %s",name1,name2);
     return 0;
}

4)#include<stdio.h>
  int main()
  {
      int i,n,sum=0;
      printf("Enter a number");
      scanf("%d",&n);
      for(i=0;i<=n;i++)
       {
          sum += i;
        }
   printf("sum is: %d",sum);
     return 0;
}

5)#include<stdio.h>
  int main()
  {
      int i,n,sum=1;
      printf("Enter a number");
      scanf("%d",&n);
      for(i=1;i<=17;i++)
     {
         if(i%3==0 || i%5==0)
            printf("%d\n",i);
      }
       return 0;
}

7)#include<stdio.h>
int main()
{
   int i,n,sum=1;
   printf("Enter a number");
   scanf("%d",&n);
   for(i=1;i<=12;i++)
   {
      sum = i * n;
      printf("%d * %d = %d\n",n,i,sum);
   }
 return 0;
}   
   
8)
#include <stdio.h>

int main()
{
    int i,n,c=1;
    printf("entera number");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if((i==2) || (i%2!=0))
           printf("%d\n",i);
    }
    return 0;
}

9)#include<stdio.h>
int main()
{
   int a=8,b=3,count=1;
   if(a>b)
   {
   printf("a is too large\n");
   }
   else
   {
   printf("a is too small");
    }
   printf("%d",count);
   return 0;
}

10)
#include<stdio.h>
   int main()
   {
     int i,year;
     printf("Enter a year");
     scanf("%d",&year);
     for(i=1;i<=20;)
     {
         if(year%4==0 || year%100==0 && year%400==0)
         {
         printf("%d\n",year);
         i++;
         }
       year=year+1;
     }
     return 0;
}