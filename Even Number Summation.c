#include<stdio.h>
int Summation(int NumberFromMain){

    if(NumberFromMain==0 || NumberFromMain==1){
        return 0;
    }
    else if(NumberFromMain%2==0){
        return NumberFromMain+Summation(NumberFromMain-1);
    }
    else {
        return Summation(NumberFromMain-1);
    }
}
int main(){
    int number;
    int Sum;

    printf("enter a number\n");
    scanf("%d",&number);

    Sum=Summation(number);
    printf("Even Value Summation For This number Is: %d",Sum);
 return 0;
}
