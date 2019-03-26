#include<stdio.h>
int Summation(int NumberFromMain){
    if(NumberFromMain==0){
        return 0;
    }
    else{
        return NumberFromMain+Summation(NumberFromMain-1);
    }
}
int main(){
    int number;
    int Sum;

    printf("enter a number\n");
    scanf("%d",&number);

    Sum=Summation(number);
    printf("Summation Value For This number Is:- %d",Sum);
 return 0;
}
