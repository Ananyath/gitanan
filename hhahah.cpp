#include<stdio.h>
#include<stdlib.h>

int main(){
	int *ptr, n , i , sum = 0, factor, j;

	printf("Enter the size of array :");
	scanf("%d",&n);

	ptr = (int*)calloc(n, sizeof(int));
    if(ptr == NULL){
        printf("Error");
        exit(0);
    }

	for(i = 0; i < n; i++){
		printf("Enter a[%d] element: ",i);
		scanf("%d", (ptr+i));
	}

	printf("\nThe array elements are:\n");
	for(i = 0; i < n; i++){
		printf("%d\t", *(ptr+i));
	}
            
    for(i = 0; i < n; i++){
        
        factor = 0;
        for(j = 1; j <= (*(ptr+i)); j++){
            if(*(ptr+i) % j == 0){
                factor++;
            }
        }
        if(factor == 2){
            sum = sum + (*(ptr+i));
        }
    }
    printf("\nThe sum of prime numbers is: %d",sum);
    return 0;
}
