#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int hash[numsSize];
    int *result_arr = malloc(2 * sizeof(int));
 
    // Iterating over the nums array
    for (int i = 0; i < numsSize; i++)
    {
        int complement = target - nums[i];
        if (i == 0)
        {
            hash[i] = nums[i];
        }
        else
        {
            // Iterating over the hash array till it is initialized
            for (int j = 0; j < i; j++)
            {
                // Checking for the complement in hash array
                if (hash[j] == complement)
                {
                    result_arr[0] = j;
                    result_arr[1] = i;
                    *returnSize = 2;
                    return result_arr;
                }
            }
            // Storing number in the hash array
            hash[i] = nums[i];
        }
    }
    
    // If no solution found
    *returnSize = 0;
    return NULL;
}