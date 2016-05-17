#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"MyStringLib.h"
#include"MyFileLib.h"



#define LENGTH 100

/*
*/


void main(int argc, char *argv[]){
	//printf("%d", argc);
	if (argc > 1){
		//printf("\n%d", strcmp(argv[1], "p"));
		if (!strcmp(argv[1], "copy")){
			if (argc > 3){
				char content[LENGTH][LENGTH];
				//open source file
				FILE *sourcefPtr = openFile(argv[2], "rb");
				if (sourcefPtr != NULL){
					readDoc(sourcefPtr, content, LENGTH);
					fclose(sourcefPtr);
				}
				else{
					printf("%s does not exist.\n", argv[2]);
					exit(1);
				}
				//open destination file
				printf("read ok.\n");
				FILE *desfPtr = openFile(argv[3], "wb");
				if (desfPtr != NULL){
					writeDoc(desfPtr, content);
					fclose(desfPtr);
				}
				else{
					printf("%s does not exist.\n", argv[3]);
					exit(1);
				}
			}
			else{
				printf("Please use %s copy source.txt destination.txt\n", argv[0]);
			}
		}
		else if (!strcmp(argv[1], "cv")){
			if (argc > 2){
				FILE *fPtr = openFile(argv[2], "rb");
				char content[LENGTH];
				if (fPtr != NULL){
					readDoc(fPtr, content, LENGTH);
					fclose(fPtr);
				}
				else{
					printf("%s does not exist.\n", argv[2]);
					exit(1);
				}

				counterVowel(content);
			}
			else{
				printf("Please use %s cv filename.txt\n", argv[0]);
				exit(1);
			}
		}
		else if (!strcmp(argv[1], "p")){
			if (argc > 2){
				FILE *fPtr = openFile(argv[2],"rb");
				char content[LENGTH];
				if (fPtr != NULL){
					readDoc(fPtr, content, LENGTH);
					fclose(fPtr);
				}
				else{
					printf("%s does not exist.\n", argv[2]);
					exit(1);
				}
				
				int flag = palindromes(content);
				if (flag){
					printf("%s is palindromes\n", content);
				}
				else{
					printf("%s is not palindromes\n", content);
				}
			}
			else{
				printf("Please use %s p filename.txt\n",argv[0]);
			}
		}
	}

	system("pause");
}