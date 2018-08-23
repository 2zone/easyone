#include <stdio.h>
int x;
int y;
void fizzbuzz(int n){
printf("fizz숫자를 입력하시오");
scanf("%d",&x);
printf("buzz숫자를 입력하시오");
scanf("%d",&y);
for(int i=1; i<=n; i++){
if(i%x==0&&i%y!=0){
printf("FIZZ\n");}
else if(i%y==0&&i%x!=0){
printf("BUZZ\n");}
else if(i%x==0&&i%y==0){
printf("FIZZBUZZ\n");}
else{printf("%d\n",i);}
}
}


int main(void)
{
fizzbuzz(100);
return 0;
}
