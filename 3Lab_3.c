// Lab 3.3: Nested if-else
#include<stdio.h>
int main(){
    int val;
    scanf("%d",&val);
    if(val <= 100){
        if(val >= 10){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    else{
        printf("No");
    }
}