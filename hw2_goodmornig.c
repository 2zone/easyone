#include <stdio.h>
int time;

int main(){
printf("What time is it now?\n");
scanf("%d",&time);//time 변수의 주소에다가 %d값을 넣음
printf("%d",time);

if(time>6&&time<=12){printf("Good morning");}
else if(time>12&&time<=15){printf("Good afternoon");}
else if(time>15&&time<=21){printf("Good evening");}
else if(time>21){printf("good night");};
}
