#include <stdio.h>
#include "solution.c"
#include "../../utils/timer.h"

int main() {
    start_timer();
    
    int nums1[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize = 0;
    
    int* result1 = twoSum(nums1, 4, target, &returnSize);
    
    if (returnSize == 2) {
        printf("✅ Indices: [%d, %d]\n", result1[0], result1[1]);
    } else {
        printf("❌ No solution found.\n");
    }

    free(result1);
    end_timer();
    return 0;
}
