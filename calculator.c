#include<stdio.h>
int main()
{
int a,b;
char c;
printf("enter the first no=");
scanf("%d",&a);
printf( "enter the second no=");
scanf("%d",&b);
printf("enter the operator");
scanf(" %c",&c);
switch(c)
{
case '+':
printf("%d+%d=%d",a,b,a+b);
break;
case '-':
printf("%d-%d=%d",a,b,a-b);
break;
case '*':
printf("%d*%d=%d",a,b,a*b);
break;
case '/':
printf("%d/%d=%d",a,b,a/b);
break;
default:
printf("invalid");
}
return 0;
}


