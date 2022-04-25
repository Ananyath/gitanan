#include<stdio.h>
#include<conio.h>
int main(){
	int arr1[100],arr2[100],n,i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	//input
	for(i=0;i<n;i++){
		printf("Enter the value of arr1[%d]",i);
		scanf("%d",&arr1[i]);
	}
	//output
	printf("The array elements are:\n");
	for(i=0;i<n;i++){
		printf("%d\t",arr1[i]);
		
	}
	////copy
	for(i=0;i<n;i++){
		arr2[i]=arr1[i];
	}
	
	////display coppied array
	printf("\nThe copied array is \n");
	for(i=0;i<n;i++){
		printf("%d\t",arr2[i]);
}
}
