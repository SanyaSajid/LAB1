#include <stdio.h>
#include <stdlib.h>
/*
//QUESTION NO.1:
int main()
{
   int id;
   int hours;
   int amount;
   printf("enter employee's id:\n");
   scanf("%d",&id);
   printf("enter total worked hours:\n");
   scanf("%d",&hours);
   printf("enter amount received per hour:\n");
   scanf("%d",&amount);
   printf("employee's id:%d\n",id);
   printf("salary:%d\n",amount*hours);
   return 0;
}*/

/*
//QUESTION NO.2:
int main()
{
   float height;
   float width;
   printf("enter height of rectangle:\n");
   scanf("%f",&height);
   printf("enter width of rectangle:\n");
   scanf("%f",&width);
   printf("the perimeter of rectangle:%.2f cm\n",2*(height+width));
   printf("the area of rectangle:%.2f cm^2\n",height*width);
   return 0;

}*/

/*
//QUESTION NO.3:
int main()
{
   float height;
   printf("enter height of a person in centimeters:\n");
   scanf("%f",&height);
   if (height<150)
    {
       printf("Dwarf");
    }else if (height==150)
    {
       printf("Average");
    }else if (height>=165)
    {
       printf("Tall");
    }
   return 0;

}*/

/*
//QUESTION NO.4:
void convert(int x)
{
    if (x>=1)
    {
        convert(x/2);
        printf("%d",x%2);
    }
}

int main()
{
   int n;
   printf("enter a number to be converted into binary:\n");
   scanf("%d",&n);
   convert(n);
   return 0;
}*/


/*
//QUESTION NO.5:
int fib(int n)
{
    int x=1;
    int y=1;
    int z=0;
    printf("%d\n",x);
    printf("%d\n",y);
    for (int i=0;i<n;i++){
          z=x+y;
          printf("%d\n",z);
          x=y;
          y=z;
    }

}
int main()
{
   int n;
   printf("enter how many terms of fibonacci series do u want:\n");
   scanf("%d",&n);
   fib(n);
   return 0;
}*/






