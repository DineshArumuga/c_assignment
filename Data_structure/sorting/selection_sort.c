
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the No.of element\n");
	scanf("%d",&n);
	int arr[n],i,temp,j;
	printf("Enter the array element\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Printing the Array element\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{ 
			if(arr[i]>=arr[j])
			{
				temp = arr[i];
				arr[i]= arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("After the sorting the array elements\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");


}
