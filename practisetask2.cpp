#include <stdio.h>
#include <stdlib.h>

int main() {
    // Example array
    int array[] = {5, 10, 15, 20, 25};
    int size = sizeof(array) / sizeof(array[0]);
    
    int sum = 0;
    
    // Calculate the sum of all elements in the array
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    
    // Calculate the mean
    float mean = (float)sum / size;
    
    // Print the mean
    printf("Mean of the array: %.2f\n", mean);
    
    // Create a new array to store the differences
    int diffArray[size];
    
    // Calculate the difference of each element from the mean and store it in the new array
    for (int i = 0; i < size; i++) {
        diffArray[i] = array[i] - mean;
    }
    
    // Print the differences
    printf("Differences from the mean:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", diffArray[i]);
    }
    printf("\n");
    
    return 0;
}