#include<stdio.h>
#include<stdlib.h>

#define ARRAY_SIZE 10 //define array size

#define swap1(a,b) \
	do{\
		a ^= b;\
		b ^= a;\
		a ^= b;\
	} while (0)

#define swap2(a,b) {\
	a ^= b; \
	b ^= a; \
	a ^= b; \
}

void swap(int &a, int &b){
	a ^= b;
	b ^= a;
	a ^= b;
}

/*
 int a: array
 int n: 排到第幾個
*/
void insertionSort(int a[], int n){
	int position = n;
	for (int i = n-1; i >=0; i--){
		if (a[position] < a[i]){
			swap2(a[position], a[i]);
			position--;
		}else{
			break;
		}
	}
}

void showArray(int a[], int size){
	for (int i = 0; i < size; i++){
		printf("%d ",a[i]);
	}
}

void main(void){
	int iArray[ARRAY_SIZE] = { 0 };

	showArray(iArray, ARRAY_SIZE);

	for (int i = 0; i < ARRAY_SIZE; i++){
		printf("Input an integer:");
		if (scanf(" %d", &iArray[i])){
			//sorting: small->large
			insertionSort(iArray,i);
		}else{
			//error message
			puts("Please input correct number");
		}
	}

	showArray(iArray, ARRAY_SIZE);
	system("pause");
}