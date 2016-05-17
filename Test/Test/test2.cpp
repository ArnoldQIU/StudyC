/*
#include<stdio.h>
#include<stdlib.h>
void main(void) {
	int win[7];
	int guess[7];
	for (int i = 1; i <= 7; i++) {
		printf("輸入第%d個開獎號碼(0~49)", i);
		if (i == 7) { printf("(特別獎)"); }
		else { printf(":"); }
		scanf("%d", &win[i - 1]);
		for (int j = i - 1; j >= 0; j--) {
			while ((win[i - 1] == win[j - 1]) || win[i - 1] > 49) {
				printf("你輸入錯囉");
				printf("輸入第%d個開獎號碼(0~49)", i);
				scanf("%d", &win[i - 1]);
			}
		}
	}
	printf("-----------------------------------------------\n");
	for (int a = 1; a <= 7; a++) {
		printf("輸入第%d個你的號碼(0~49)", a);
		if (a == 7) { printf("(特別獎)"); }
		else { printf(":"); }
		scanf("%d", &guess[a - 1]);
		for (int b = a - 1; b >= 0; b--) {
			while ((guess[a - 1] == guess[b - 1]) || guess[a - 1] > 49) {
				printf("你輸入錯囉");
				printf("輸入第%d個你的號碼(0~49)", a);
				scanf("%d", &guess[a - 1]);
			}
		}
	}
	printf("開獎號碼:");
	for (int i = 1; i <= 7; i++) {
		if (i == 7) { printf("特別號"); }
		printf("%3d", win[i - 1]);
	}
	puts("");
	printf("你選的號碼:");
	for (int i = 1; i <= 7; i++) {
		if (i == 7) { printf("特別號"); }
		printf("%3d", guess[i - 1]);
	}
	puts("");
	int counter=0, counter_s=0;
	
	if (win[6] == guess[6]) { counter_s++; }
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			
			if (win[i - 1]== guess[j - 1]) {counter++;}
		}
	}
	if (counter == 6) { printf("妳中了頭獎\n");}
	else if (counter == 5 && counter_s == 1) { printf("你中了二獎\n"); }
	else if (counter == 5) { printf("你中了三獎\n"); }
	else if (counter == 4 && counter_s == 1) { printf("你中了四獎\n"); }
	else if (counter == 4) { printf("你中了五獎\n"); }
	else if (counter == 3 && counter_s == 1) { printf("你中了六獎\n"); }
	else if (counter == 2 && counter_s == 1) { printf("你中了七獎\n"); }
	else if (counter == 3) { printf("你中了普獎\n"); }
	else { printf("你沒中獎"); }

	system("pause");
}*/