#include<stdio.h>
int main(){
	int arr[50],i,n,j,key,c=0;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEnter the key to be checked:");
	scanf("%d",&key);
	for(i=0;i<=n-1;i++){
		for(j=i+1;j<=n-1;j++)
		{
			if((arr[i]-arr[j])==key || (arr[j]-arr[i])==key)
			{
				c++;
			}
		}
	}
	printf("The number of counts are:%d",c);
	return 0;
}
