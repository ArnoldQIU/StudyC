#include<stdio.h>
#include<stdlib.h>
void pie(int math[], int times);
void swap(int &N1, int &N2);
void printsome(int math[], int times);
int counter;
void perm(int math[], int start, int end, int times);

void main(void) {
	int times;
	printf("要排列幾個數：");
	scanf("%d", &times);
	int math[20] = { 0 };
	for (int i = 1; i <= times; i++) {
		printf("輸入第%d個數", i);
		scanf("%d",& math[i - 1]);
	}
	pie(math, times);
	printsome(math, times);
	for (int i = 1; i < times; i++) {
		if (i == 1) {
			perm(math, i, times, times);
		}
		else {
			while (math[i - 1] == math[0]) {
				i++;
			}
			perm(math, i, times, times);
		}
	}
	system("pause");
}
void pie(int math[], int times) {
	for (int i = 1; i <= times; i++) {
		for (int j = 1; j <= times; j++) {
			if (math[i - 1] == math[j - 1]) {
				swap(math[i - 1], math[j - 1]);
			}
		}
	}
}
void swap(int &N1, int &N2) {
	int temp;
	temp = N1;
	N1 = N2;
	N2 = temp;
}
void printsome(int math[], int times) {
	for (int i = 1; i <= times; i++) {
		printf("%3d", math[i - 1]);
	}
	puts("");
}
void perm(int math[],int start,int end,int times) {
	if (end == start) {
		return;
	}
	else {
		perm(math, start, end-1, times);
		counter++;
		if (math[start - 1] != math[end - 1]) {
			swap(math[start - 1], math[end - 1]);
			printsome(math, times);
			if (counter == 1) {
				perm(math, 1, end - 1, times);
			}
		}
		swap(math[start - 1], math[end - 1]);
		counter--;
	}
}