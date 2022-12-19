#include<stdio.h>
int main(void)
{
int limit,i,j,temp=0;
printf("Enter the limit :\n");
scanf("%d",&limit);
int a[limit];
printf("Enter the elements :\n");
for(i=0;i<limit;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<limit;i++)
{
	for(j=i+1;j<limit;j++)
	{
	if(a[i]>a[j])
		{
		temp=a[j];
		a[j]=a[i];
		a[i]=temp;
		}
	}
}
printf("Sorted array :");
for(i=0;i<limit;i++)
{
printf("%d",a[i]);
}
return 0;
}
		