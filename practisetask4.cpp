#include <stdio.h>
#include <math.h>

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
    
    // Calculate the squared differences from the mean
    float squared_diff_sum = 0;
    for (int i = 0; i < size; i++) {
        float diff = array[i] - mean;
        squared_diff_sum += diff * diff;
    }
    
    // Calculate the variance
    float variance = squared_diff_sum / size;
    
    // Calculate the standard deviation
    float standard_deviation = sqrt(variance);
    
    // Print the standard deviation
    printf("Standard deviation of the array: %.2f\n", standard_deviation);
    
    return 0;
}