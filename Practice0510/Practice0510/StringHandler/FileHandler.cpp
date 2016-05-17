#pragma once

#include<stdio.h>
#include<stdlib.h>


FILE* openFile(char fileName[], char type[]){
	FILE *filePtr;
	if ((filePtr = fopen(fileName, type)) == NULL){
		printf("FILE OPEN ERROR.\n");
		filePtr = NULL;
	}
	return filePtr;
}

void readDoc(FILE *fPtr, char str[], int length){
	int data;
	int i = 0;
	while ((data = fgetc(fPtr)) != EOF){
		if (i < length){
			str[i] = data;
			i++;
		}
		else{
			printf("ERROR! ARRAY SIZE IS TOO SMALL TO SAVE THE CONTENT OF DOCUMENT\n");
			exit(1);
		}
	}
	str[i] = '\0';
}

void readDoc(FILE *fPtr, char str[100][100], int length){
	int data;
	int i = 0, j = 0;
	while ((data = fgetc(fPtr)) != EOF){
		if (data == 32){
			str[i][j] = '\0';
			i++;
			j = 0;
		}
		else{
			if (i<length && j < length){
				str[i][j] = data;
				j++;
			}
			else{
				printf("ERROR! ARRAY SIZE IS TOO SMALL TO SAVE THE CONTENT OF DOCUMENT\n");
				exit(1);
			}
		}
		
	}
	str[i][j] = '\0';
	i++;
	str[i][0] = '\0';
}

void writeDoc(FILE *fPtr, char str[100][100]){
	for (int i = 0; str[i][0] != '\0'; i++){
		for (int j = 0; str[i][j] != '\0'; j++){
			fputc(str[i][j], fPtr);
		}
		fputc('\r\n', fPtr);
	}
}