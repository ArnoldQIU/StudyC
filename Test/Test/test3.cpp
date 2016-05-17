/*
#include<stdio.h>
#include<stdlib.h>
void changehead();
void printsome(int timea);
void headtail(int timeb);
int *mem;

void main(void) {
	int times;
	printf("要有幾個數字?");
	scanf("%d", &times);
	mem = new int[times];
	for (int i = 1; i <= times; i++) {
		printf("輸入第%d個數：", i);
		scanf("%d", &mem[i - 1]);
	}
	for (int j = 1; j <= times-1; j++) {
		printsome(times);
		changehead();
		printsome(times);
		headtail(times);
	}
	system("pause");
	
}
void changehead() {
	int temp;
	if (mem[0] != mem[1]) {
		temp = mem[0];
		mem[0] = mem[1];
		mem[1] = temp;
	}
}
void printsome(int timea) {
	for (int i = 1; i <= timea; i++) {
		printf("%3d", mem[i - 1]);
	}
	puts("");
}
void headtail(int timeb) {
	int temp;
	temp = mem[timeb-1];
	mem[timeb-1] = mem[0];
	mem[0] = temp;
}*/