#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;
	int n, i;
	printf("Enter the no of elements:- ");
	scanf("%d", &n);
	
	ptr = (int *)calloc(n,  sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Meory not allocated \n");
		exit(0);
	}
	else{
		printf("Memory sucessfully allocated using calloc. \n");
		for(i=0;i<n;i++)
			ptr[i] = i*i;
			
	printf("The elements inside array is :-\n");
	for(i=0;i<n;i++)
		printf("%d ", ptr[i]);
	}	
	return 0;
}
