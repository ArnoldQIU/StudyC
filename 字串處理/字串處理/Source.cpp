#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define STRING_MAX_LENGTH 100
/*
int getLength(wchar_t str[]) {
	int counter = 0;
	for (int len = 0; str[len] != '\0'; len++) {
		counter++;
	}
	return counter;}
	*/

int getLength(char str[]){
	int counter=0;
	for (int len=0;str[len]!='\0';len++){
		counter++;}
	return counter;
}

char str[STRING_MAX_LENGTH];

void test1() {//scanf vs gets_s
	
	printf("input string");
	scanf(" %s", str);
	rewind(stdin);
	printf("use scanf(). the legth of string is %d\n", getLength(str));
	printf("input string:");
	gets_s(str);
	printf("use gets(). the length of string is %d\n", getLength(str));
}
/*
void test2() {//wscanf
	wchar_t str2 [100];
	printf("input a string:");
	wscanf(L"%s", str2);
	rewind(stdin);
	wprintf(L"you put %s\n", str2);
	printf("use wscanf(). the length of string is %d\n", getLength(str2));


	}
	*/

void test3() {
	sprintf(str, "%02d %02d", 1, 2); //把數字1,2轉成字串到str陣列
	printf("%s\n", str);//印出str陣列
}




void main(void) {

	test1();
	//test2();
	test3();


	system("pause");
}