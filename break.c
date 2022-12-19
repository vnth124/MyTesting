#include<stdio.h>
int main(void)
{
int i;
for(i=1;i<7;i++)
{
printf("hi");
if(i==3)
{
break;
}
printf("hello");
}
printf("finished");
return 0;
}