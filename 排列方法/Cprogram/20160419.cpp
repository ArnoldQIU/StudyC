//°}¦C
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void swap(int &a, int &b) {
	a ^= b;
	b ^= a;
	a ^= b;
}
void insertionSort(int a[], int position) {
	int n = position;
	for (int i = n - 1; i >= 0; i--) {
		if (a[n] < a[i]) {
			swap(a[n], a[i]);
			n--;
		}
		else { break; }
	}
	}
void show(const int a[]) {
	for (int i = 0; i < SIZE; i++) {
		printf("%d  ", a[i]);
	}
}

void main(void) {
	int a[SIZE];
	
	for (int i = 0; i < SIZE; i++) {
		printf("input a number:");

		if (scanf("%d", &a[i])) {
			insertionSort(a, i);

		}
		else {
			puts("ERROR");
			i--;
		}
		
	}
	show(a);
	system("pause");
}