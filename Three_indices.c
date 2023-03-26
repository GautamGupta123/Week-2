#include<stdio.h>
int main()
{
	int arr[50],n,i,j,k,flag=0;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n-1;i++){
		for(j=i+1;j<=n-1;j++){
			for(k=i+2;k<=n-1;k++)
			{
				if(arr[i]+arr[j]==arr[k])
				{
					printf("%d %d %d\n",i,j,k);
					flag++;
				}
			}
		}
	}
	if(flag==0){
		printf("No sequence found\n");
	}
	return 0;
}
