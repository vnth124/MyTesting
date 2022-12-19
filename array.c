#include <stdio.h>
int main(void)
{
int a[5],i;
printf("Enter the values ");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("Entered values are :");
for(i=0;i<5;i++)
{
printf("%d\t",a[i]);
}
return 0;
}
