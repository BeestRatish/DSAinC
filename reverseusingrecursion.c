#include <stdio.h>

void reversecurse(int arr[],int start,int end){
    if (start >= end) {
        return;
    }

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end]= temp;

    //calling recursively for the next 
    reversecurse(arr,start + 1 , end - 1);
}

//need a function to print the array 
void printArray(int arr[],int size) {
    for (int i = 0; i < size; i++) {
        printf("%d",arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    printf("Original Array: ");
    printArray(numbers,size);

    reversecurse(numbers,0,size-1);
    
    printf("Reversed Array: ");
    printArray(numbers,size);

    return 0;
}