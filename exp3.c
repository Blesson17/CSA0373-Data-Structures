#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10],i,n,low=0,high,mid,s,temp,j,f=0;
	printf("\nenter the no of elements : ");
	scanf("%d",&n);
	high=n-1;
	for(i=0;i<n;i++)
	{
		printf("\nenter the num %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nenter the search element : ");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{   
		mid=(low+high)/2;
		if(a[mid]==s)
		{
			printf("\nthe element is present ");
			f=1;
			exit(0);
		}
		else if(a[mid]<s)
		{
			low=mid+1;	
		}
		else if(a[mid]>s)
		{
			high=mid;
		}
	}
	if(f==0)
	{
	printf("\nelement is not present");
    }
	return 0;
}
