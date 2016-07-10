#include <stdio.h>
int main(void)
{
int n,i,j=0,a[100],k[100];
scanf("%d",&n);
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
	int count=0;
	while(a[i])
	{
		int rem=a[i]%2;
		a[i]=a[i]/2;
		count++;
    }
    k[j++]=count;
}
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(k[i]>k[j])
		{
			int t=k[i];
			k[i]=k[j];
			k[j]=t;
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		else if(k[i]==k[j])
		{
			if(a[i]>a[j])
		{
			int t=k[i];
			k[i]=k[j];
			k[j]=t;
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}	
		}
	}
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}
