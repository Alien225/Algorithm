#include<stdio.h>
int Factorial(int NumberFromMain){
    if(NumberFromMain==0 || NumberFromMain==1){
        return 1;
    }
    else{
        return NumberFromMain*Factorial(NumberFromMain-1);
    }
}
int main(){
    int number;
    int Fact;

    printf("enter a number\n");
    scanf("%d",&number);

    Fact=Factorial(number);
    printf("Factorial Value Is:- %d",Fact);

 return 0;
}
