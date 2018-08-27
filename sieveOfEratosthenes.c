/*
Display prime number using Sieve of Eratosthenes
gcc sieveOfEratosthenes.c followed by ./a.out
*/
#include<stdio.h>
int main(){
    printf("Enter value of n\n");
    int n;
    scanf("%d",&n);
    int nums[n];    
    for(int i=0;i<n;i++)
        nums[i]=i+1;
    int eliminate;
    for(int i=1;i*i<n;i++){
        if(nums[i]==-1){
            continue;
        }
        eliminate = i+nums[i];
        while(eliminate<n){
            nums[eliminate]=-1;
            eliminate+=nums[i];
        }
    }
    for(int i=1;i<n;i++){
        if(nums[i]!=-1)
            printf(" %d",nums[i]);
    }
    printf("\n");
}