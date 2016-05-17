#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 5

void show(const int a[]){
	for (int i = 0; i < SIZE; i++){
		printf("%d ", a[i]);
	}
}
void main(void){
	srand(time(NULL));

	/* //to get a number with no repeat 5 number*/
	int ans[5] = {0};
	ans[0] = rand() % 9+1;
	int counter = 1;
	do{
		int flag = 1;
		ans[counter] = rand() % 10;
		for (int i = counter-1; i >= 0; i--){
			if (ans[counter] == ans[i]){
				flag = 0;
			}
		}
		if (flag){
			counter++;
		}
	} while (counter<SIZE);

//	show(ans);
//	puts("");
	
	printf("Please guess a number with no repeat 5 integer(e.g., 12345, 67890 etc.):\n");
	int a;
	counter = 0;
	do{
		int gus[SIZE];
		do{
			printf("Input number:");
			int input;

			scanf(" %d", &input);
			gus[0] = input / 10000;
			gus[1] = (input - gus[0] * 10000) / 1000;
			gus[2] = (input - gus[0] * 10000 - gus[1] * 1000) / 100;
			gus[3] = (input - gus[0] * 10000 - gus[1] * 1000 - gus[2] * 100) / 10;
			gus[4] = input - gus[0] * 10000 - gus[1] * 1000 - gus[2] * 100 - gus[3] * 10;
			int flag = 1;
			for (int i = 0; i < SIZE; i++){
				for (int j = 0; j < SIZE; j++){
					if (gus[i] == gus[j]&& i!=j){
						flag = 0;
					}
				}
			}
			if (flag){
				break;
			}
			else{
				puts("Input ERROR\n");
			}
		} while (1);
		show(gus);
		puts("");
		++counter;
		int c = 0;
		a = 0;
		for (int i = 0; i < SIZE; i++){
			int flag = 1;
			for (int j = 0; j < SIZE; j++){
					
				if (i==j && ans[i] == gus[j]){
					a++;
					flag = 0;
				}else if(ans[i] == gus[j]){
					flag = 0;
				}
			}
			if (flag){
				c++;
			}
		}

		printf("%dA%dC\n", a, c);
	} while (a != 5);
	printf("恭喜，答案為");
	show(ans);
	printf("，您共猜了%d次", counter);
	system("pause");
}