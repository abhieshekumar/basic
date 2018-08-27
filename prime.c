/*
Asks for a value of 'n'.
Displays Prime Number upto n.

Run Using : gcc prime.c followed by ./a.out in linux
*/
#include<stdio.h>
int main(){
    printf("Enter the limit of n\n");
    int n;
    scanf("%d",&n);
    int j;
    for(int i=2;i<=n;i++){
        for(j=2;j<i;j++){
            if(i%j == 0){
                break;
            }
        }
        if(j == i){
            printf("%d ",i);
        }
    }
    printf("\n");
}