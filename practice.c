#include<stdio.h>

int main(){

    int array[3];
    scanf("%d %d %d", &array[0],  &array[1],  &array[2]);
    printf("%d %d %d", array[0],  array[1],  array[2]);

    // =================Array Index======================

       int arr[3];
       for(int i=0;i<3;i++){
        printf("arr[%d]\n", i);
       }

    // =================== Array ====================

    int array[5];

     for(int i=0; i<=4; i++){
       scanf("%d ",&array[i]);
    }

    for(int i=0; i<=4; i++){
       printf("%d ",array[i]);
    }

    // ===================Reverse Array=================

    int n;
    scanf("%d",&n);
    int array[n];

     for(int i=0; i<n; i++){
       scanf("%d ",&array[i]);
    }

    for(int i=n-1; i>=0; i--){
       printf("%d ",array[i]);
    }

    //====================Array Initialization============
    
    int arr[5]={10,30,12,90,44};
    for(int i=0;i<5;i++){
      printf("%d ",arr[i]);
    }

    return 0;
}