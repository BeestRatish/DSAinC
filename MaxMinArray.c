// task is to find the maximum and minimum in an array
// understand the terms, we need total size, max,min, given numbers
// make a separate function that do the operations

#include <stdio.h>
void MaxMinC(int arr[],int size, int *max,int *min) {
    *max = arr[0];
    *min = arr[0];
    for (int i=1; i<size; i++) {
        if (arr[i] > *max){
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}
int main() {
    int numbers[] = {1,3,5,7,9,2,44,6,8,-11,-23,-2};
    int max,min;
    int size = sizeof(numbers)/sizeof(numbers[0]);

    MaxMinC(numbers,size,&max,&min);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n",min);
    return 0;
}
