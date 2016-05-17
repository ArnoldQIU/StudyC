/*
#include<stdio.h>
#include<stdlib.h>
void pie(int mum[], int timea);
void swap(int &mum1, int &mum2);
int counter;
void perm(int mum[], int start, int end, int timec);
void printsome(int mum[], int timeb);
void main(void) {
	int times;
	printf("你要組合幾個數字：");
	scanf("%d", &times);
	int mum[20] = { 0 };
	for (int i = 1; i <= times; i++) {
		printf("輸入第%d個數:",i);
		scanf("%d", &mum[i-1]);
	}
	pie(mum, times);
	printsome(mum, times);
	for (int i = 1; i < times; i++) {
		if (i == 1) {
			perm(mum, i, times, times);
		}
		else {
			while (mum[i - 1] == mum[0]) {
				i++;
			}
			perm(mum, i, times, times);
		}
	}
	system("pause");
}
void pie(int mum[], int timea) {
	for (int i = 1; i <= timea; i++) {
		for (int j = i + 1; j <= timea; j++) {
			if (mum[i - 1] > mum[j - 1]) {
				swap(mum[i - 1], mum[j - 1]);
			}
		}
	}
}
void swap(int &mum1, int &mum2) {
	int temp;
	temp = mum1;
	mum1 = mum2;
	mum2 = temp;
}
void printsome(int mum[], int timeb) {
	for (int i = 1; i <= timeb; i++) {
		printf("%3d", mum[i - 1]);
	}
	puts("");
}
void perm(int mum[], int start, int end, int timec) {
	if (end == start) {
		return;
	}
	else {
		perm(mum, start, end - 1, timec);
		counter++;
		if (mum[start - 1] != mum[end - 1]) {
			swap(mum[start - 1], mum[end - 1]);
			printsome(mum, timec);
			if (counter == 1) {
				perm(mum, 1, end - 1, timec);
			}
		}
		swap(mum[start - 1], mum[end - 1]);
		counter--;
	}
}*/