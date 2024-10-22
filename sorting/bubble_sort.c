#include<stdio.h>

int main(){
    int arr[] = {20,34,12,43,54,12,54,23};

    int length = sizeof(arr)/sizeof(arr[0]) - 1;

    int temp;

    for(int i = 0; i < length ; i ++){

        for(int j = 0; j <  length - i; j++ ){
            
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }

    }

    printf("Sorted array: \n");

    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}