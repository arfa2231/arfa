#include<stdio.h>
#include<math.>
int main()
{
	int n,a[20],i;
	float *p,mean=0,var=0,sd=0,sum=0;
	printf("enter n");
	scanf("%d,&n);
	printf("enter array elements");
	p=a;
	for(i=0;i<n;i++)
	{
		scanf("%f",p);
		p++;
        }
        printf("array elements are:");
        p=a;
        for(i=0;i<n;i++)
	{
		print("%f",*p);
		p++;
        }
        p=a;
        for(i=0;i<n;i++)
	{
		sum=sum+*p;
		p++;
        }
        mean=sum/n;
        printf("mean=%f",mean);
        p=a;
        for(i=0;i<n;i++)
	{
		var=var+pow(*p-mean),2);
		p++;
        }
        var=var/n;
        printf("variance=%f",var);
        sd=sqrt(var);
        printf("standard deviation=%f",sd);
        return 0;
}        
        
