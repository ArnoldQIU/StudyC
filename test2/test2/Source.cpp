#include<stdio.h>
#include<stdlib.h>
void main(void) {
	int win[7];
	int guess[7];
	for (int i = 1; i <= 7; i++) {
		printf("��J��%d�Ӷ}�����X(0~49)",i);
		if (i == 7) { printf("(�S�O��)");}
		else {printf(":");}
		scanf("%d", &win[i - 1]);
		for (int j = i-1; j >=0; j--) {
			while ((win[i - 1] == win[j - 1] )|| win[i - 1] > 49) {
				printf("�A��J���o");
				printf("��J��%d�Ӷ}�����X(0~49)", i);
				scanf("%d", &win[i - 1]);}
		}
	}
	printf("-----------------------------------------------\n");
	for (int a = 1; a <= 7; a++) {
		printf("��J��%d�ӧA�����X(0~49)", a);
		if (a == 7) { printf("(�S�O��)"); }
		else { printf(":"); }
		scanf("%d", &guess[a - 1]);
		for (int b = a - 1; b >= 0; b--) {
			while ((guess[a - 1] == guess[b - 1]) || guess[a - 1] > 49) {
				printf("�A��J���o");
				printf("��J��%d�ӧA�����X(0~49)", a);
				scanf("%d", &guess[a - 1]);
			}
		}
	}
	printf("�}�����X:");
	for (int i = 1; i <= 7;i++){
		if (i == 7) { printf("�S�O��"); }
		printf("%3d",win[i-1]);
	}
	system("pause");
}