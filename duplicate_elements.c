#include<stdio.h>
int main(){
	int arr[50],n,i,j,temp;
	printf("Enter the range:");
	scanf("%d",&n);
	printf("Enter the items:");
	for(i=0;i<=n-1;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n-i-2;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("The sorted array is :\n");
	for(i=0;i<=n-1;i++){
		printf("%d ",arr[i]);
	}
	int c=0;
	int key;
	printf("\nEnter the key whose occurrences are needed to be checked :");
	scanf("%d",&key);
	for(i=0;i<=n-1;i++)
	{
	   if(key==arr[i]){
			 c++;
		}
	}
	printf("The element %d occurs %d times\n",key,c);
	return 0;
}
