#pragma once

#include<stdio.h>

int getLength(char str[]){
	int counter = 0;
	for (int len = 0; str[len] != '\0'; len++){
		counter++;
	}
	return counter;
}

void copy(int argc, char *arr1[], char *arr2[]){// 將arr1的內容複製到arr2中
	int i, j;
	for (i = 0; i<argc; i++)
	{
		for (j = 0; arr1[i][j] != '\0'; j++){
			arr2[i][j] = arr1[i][j];
		}
		arr2[i][j] = '\0';         // 在i的最後一個字元後面加'\0' 
	}
}

void counterVowel(char str[]){
	int a = 0, e = 0, i = 0, o = 0, u = 0;
	for (int j = 0; str[j] != '\0'; j++){
		if (str[j] == 'a' || str[j] == 'A')
			a++;
		else if (str[j] == 'e' || str[j] == 'E')
			e++;
		else if (str[j] == 'i' || str[j] == 'I')
			i++;
		else if (str[j] == 'o' || str[j] == 'O')
			o++;
		else if (str[j] == 'u' || str[j] == 'U')
			u++;
	}
	
	printf(" a=%d\n e=%d\n i=%d\n o=%d\n u=%d\n", a, e, i, o, u);
}

int palindromes(char str[]){
	int length = getLength(str) - 1;
	int flag = 1;
	for (int i = 0; i != length; i++, length--){
		if (str[i] != str[length]){
			flag = 0;
			break;
		}
	}
	return flag;
}