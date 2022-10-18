#include<stdio.h>
int main()
{
	int n;
	printf("Enter the No.of array\n");
	scanf("%d",&n);

	int arr[n],i,j,temp;
	printf("Enter the array element\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("Printing array element\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);

	for(i=1;i<n;++i)
	{
		temp = arr[i];
		for(j=i;j>0&&arr[j-1]>temp;j--)
			arr[j]=arr[j-1];
		arr[j] = temp;
	}
	printf("\nAfter the sorting elements are\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
