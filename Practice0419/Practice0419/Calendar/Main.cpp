#include<stdio.h>
#include<stdlib.h>

int isLeapYear(int year){
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)){
		return 1;
	}
	else{
		return 0;
	}
}

int monthDay(int year,int month){
	switch (month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 2:
			if (isLeapYear(year)){
				return 29;
			}
			else{
				return 28;
			}
		default:
			return 30;
	}
}

int weekDay(int startYear, int startMonth,int startDay, int startWeekDay, int year, int month){
	int total = 0;//羆ぱ计
	/*
	1 羆ぱ计+=тyear-1羆ぱ计
	2 羆ぱ计+=тyear/month-1羆ぱ计
	3 羆ぱ计+=тyear/month/day羆ぱ计
	4 羆ぱ计%=7
	*/
	for (int i = startYear; i < year; i++){
		if (isLeapYear(i)){
			total += 366;
		}else{
			total += 365;
		}
	}
	
	for (int i = 1; i < month; i++){
		total += monthDay(year, i);
	}
	
	for (int i = 1; i < startMonth; i++){
		total -= monthDay(year, i);
	}
	
	for (int i = 1; i < startDay; i++){
		total--;
	}
	
	return (total % 7 + startWeekDay) % 7;
}

void show(int calendar[]){
	printf("%4s%4s%4s%4s%4s%4s%4s", "ら", "", "", "", "", "き", "せ");
	for (int i = 0; i < 42; i++){
		if (i % 7 == 0){
			printf("\n");
		}
		if (calendar[i] == 0){
			printf("%4s","");
		}else{
			printf("%4d", calendar[i]);
		}
		
	}
}

void calendar(int startYear, int startMonth, int startDay, int startWeekDay, int year, int month){
	int calendar[42] = {0};
	int weekday = weekDay(startYear, startMonth, startDay, startWeekDay, year, month);
	
	for (int i = 0; i < monthDay(year, month); i++){
		calendar[weekday + i] = i + 1;
	}
	show(calendar);
}

void main(void){
	calendar(1, 1, 1, 1, 2016, 4);
	system("pause");
}