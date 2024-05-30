#include <stdio.h>

int main()
 {

    int nums[] = {1, 3, 5, 6};
    int target = 5;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) 
        {
            printf("Index of %d: %d\n", target, mid);
            
        }
        
         else if (nums[mid] < target) 
         {
            left = mid + 1;
         }
         else 
         {
            right = mid - 1;
        
          }
                           }

    printf("Index where %d would be inserted: %d\n", target, left);

    return 0;

}