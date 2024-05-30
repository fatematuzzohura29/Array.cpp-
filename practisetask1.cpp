#include <stdio.h>

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
    
    return 0;
}