#include<stdio.h>
int A[100];
int FindNumber(int num,int upper,int lower){
    int mid;
    mid=(upper+lower)/2;

    if(A[mid]==num){
        return mid;
    }
    else if(A[mid]>num){
         FindNumber(num,mid-1,lower);
    }
    else if(A[mid]<num){
        FindNumber(num,upper,mid+1);
    }
}
int main(){
    int number;
    int Find,i,a;

    printf("enter Your array Size\n");
    scanf("%d",&a);
    printf("enter value for array: \n");
    for(i=0;i<a;i++){
        printf("Enter value For Index %d : ",(i+1));
        scanf("%d",& A[i]);
    }
    printf("enter a number: \n");
    scanf("%d",&number);

    Find=FindNumber(number,a-1,a-a);
    printf("For this number array Index Is:- %d\n",Find+1);
 return 0;
}
