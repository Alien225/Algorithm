#include<stdio.h>
int A[100],maximum;
int Maximum(int LastIndex){
    int mid;

    if(LastIndex==0){
        maximum=A[LastIndex];
        return A[LastIndex];
    }
    else{
        if(A[LastIndex]>Maximum(LastIndex-1)){
            maximum=A[LastIndex];
            return maximum;
        }
        else {
            return maximum;
        }
    }
}
int main(){
    int max,i,a;

    printf("enter Your array Size\n");
    scanf("%d",&a);

    printf("enter value for array: \n");

    for(i=0;i<a;i++){
        printf("Enter value For Index %d : ",(i+1));
        scanf("%d",& A[i]);
    }

    max=Maximum(a-1);
    printf("maximum value Is:- %d\n",max);



 return 0;
}
