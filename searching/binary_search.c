#include<stdio.h>
#include<stdlib.h>


int binary_search(int arr[], int length,int val){
    int low = 0;
    int high = length -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == val) {
            return mid; 
        }

        else if(arr[mid] < val){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }

    }
     
    return -1;
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int length = sizeof(arr) / sizeof(arr[0]);
    int index = binary_search(arr, length, 12);

    printf("The item is at index: %d", index);

    return 0;
}