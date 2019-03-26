#include<stdio.h>

int main(){
    int array[20];
    int i,a;

    printf("enter Your array Size\n");
    scanf("%d",&a);

    printf("enter value for array: \n");

    for(i=0;i<a;i++){
        printf("Enter value For Index %d : ",(i+1));
        scanf("%d",& array[i]);
    }

    for(i=1;i<a-2;i++){
        if(array[i]>array[i-1]&&array[i]<array[i+1]){
            printf("it is a ramp....");
            printf("and ramp number is:- \n");
            printf("%d\n %d\n %d\n",array[a-1],array[a],array[a+1]);
            printf("%d",array[a]);
            printf("%d\n",array[a+1]);
        }

    }


}
