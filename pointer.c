#include<stdio.h>
int main(){
    int num1=1;
    int *num2;
    num2=&num1; //num2にnum1のアドレスを入れている。
    *num2=2; //num2に入っているアドレスの場所に2をぶち込む。

    printf("num1の値は%dです\n",num1);
    printf("num2の値は%dです\n",*num2);
    
    return 0;
}