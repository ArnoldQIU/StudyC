/*
#include<stdlib.h>
#include<iostream>
#include<stdio.h>

void backtrack(int n, int N);
char s[4] = { 'a', 'b', 'b','c' };    // �r��A�ݭn�w���Ѥp��j�Ƨ�
char solution[4];
bool used[4];

int main(void) {
	backtrack(0, 4);
}

void backtrack(int n, int N)
{
	if (n == N)
	{
		for (int i = 0; i < N; i++)
			printf("%c", solution[i]);
		puts("");
		return;
	}

	char last_letter = '\0';
	for (int i = 0; i<N; i++)
	{                           // if not �令 continue
		if (used[i]) continue;
		if (s[i] == last_letter) continue;  // �קK�T�|�@�˪��r��

		last_letter = s[i];     // ������~�ϥιL���r��
		used[i] = true;

		solution[n] = s[i];
		backtrack(n + 1, N);

		used[i] = false;
	}
}*/