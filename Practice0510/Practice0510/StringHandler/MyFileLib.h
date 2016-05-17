#pragma once

#include<stdio.h>

FILE* openFile(char fileName[], char type[]);
void readDoc(FILE *fPtr, char str[], int length);
void readDoc(FILE *fPtr, char str[100][100], int length);
void writeDoc(FILE *fPtr, char str[100][100]);