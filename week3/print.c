#include <stdio.h>

int ages[10]={1,2,3,4,5,6,7,8,9,0};
int age=15;
float length=2.4;
char alphabat='c';
int* x; //인티져 포인트타입(메모리타입)

x=(int*)0x20000000; //(타입캐스팅)메모리주소지정

//*의 용도 1. 곱하기 2. 주소형 타입선언 3.dereference operator
int y=3;// 만약 주소0x20000004에 저장됬다
x= &y; // x=(int*)0x20000004
*x=10// 디레퍼런스오퍼레이터- y의값을 변경

int main(){
printf("first of ages: %d\n",ages[0]);
printf("age=0x%x\n",age);
printf("length=%f\n",length);
printf("length=%d\n",(int)length); //2.4를 2의보수표현법으로 나타내면1, (타입캐스팅)하면2
printf("alphabat=%c\n",alphabat);}
