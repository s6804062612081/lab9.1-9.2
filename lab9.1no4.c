#include <stdio.h>
//function prototype
void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size); 
//or void swapArray(int *a, int *b, int size); 


int main() {
	int a = 1, b = 2, c = 3;
	int i;
	int A[3] = {a,b,c};
	printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
	swapValue(&a,&b,&c);
	
	int B[3] = {a,b,c};
	
	printf("After swap function: a= %d, b=%d, c=%d\n", a, b, c);
	//calling swapArray()
	printf("Before swapArray function:");
	printf("\n Array A: ");
	for(i=0;i<3;i++){
		printf("%d ",A[i]);
	}
	printf("\n Array B: ");
	for(i=0;i<3;i++){
		printf("%d ",B[i]);
	}
	
	swapArray(A,B,3);
	
	printf("\nAfter swapArray function:");
	printf("\n Array A: ");
	for(i=0;i<3;i++){
		printf("%d ",A[i]);
	}
	printf("\n Array B: ");
	for(i=0;i<3;i++){
		printf("%d ",B[i]);
	}
	return 0;
}

void swapValue(int *a, int *b, int *c){
	int d=*a;
	*a=*b;
	*b=*c;
	*c=d;
}

void swapArray(int a[], int b[], int size){
	int i,c;
	for(i=0;i<size;i++){
		c=a[i];
		a[i]=b[i];
		b[i]=c;
	}
}

