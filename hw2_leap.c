#include <stdio.h>
int isLeapYear(int year);

int main() {
	int year;
	printf("Enter any year:\n");
	scanf("%d",&year);
	if(isLeapYear(year)){printf("%d is leap year!\n",year);}
	else{printf("%d is not leap year!\n",year);}
	return 0;
}

int isLeapYear(int year){
if (year%4==0&&year%100!=0||year%400==0)
return 1;
else return 0;}
