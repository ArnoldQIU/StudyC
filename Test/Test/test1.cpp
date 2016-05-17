/*
#include<stdio.h>
#include<stdlib.h>
int yymmdd[20][4];
int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
int day(int yy, int mm, int dd);
int isleap(int year);
int main(void) {
	char *week[] = { "日","一","二","三","四","五","六" };
	int times;
	printf("你要有幾個日期?");
	scanf("%d", &times);
	
		for (int i = 1; i <= times; i++) {
			printf("輸入年份");
			scanf("%d", &yymmdd[i - 1][0]);
			printf("輸入月份");
			scanf("%d", &yymmdd[i - 1][1]);
			printf("輸入日期");
			scanf("%d", &yymmdd[i - 1][2]);
			puts("");
			yymmdd[i - 1][3] = day(yymmdd[i - 1][0], yymmdd[i - 1][1], yymmdd[i - 1][2]);

		}
	for (int j = 1; j <= 7; j++) {
		for (int i = 1; i <= times; i++) {
			if (yymmdd[i - 1][3] == j-1) {
				printf("% 4d年 % 2d月 % 2d日星期%s\n", yymmdd[i - 1][0], yymmdd[i - 1][1], yymmdd[i - 1][2], week[j - 1]);
			}
		}

	}

	system("pause");
	return 0;
	
	
}
int isleap(int year) {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int day(int yy, int mm, int dd) {
	int total = 0;
	for (int i = 1; i < yy; i++) {
		if (isleap(i) == 1) {
			total += 366;
		}
		else {
			total += 365;
		}
	}
	if (isleap(yy) == 1) {
		month[1] = 29;
	}
	else(isleap(yy) == 0) {
		month[1] = 28;
	}
	for (int j = 1; j < mm; j++) {
		total += month[j-1];
	}

	total += dd;
	return total % 7;
}
*/
