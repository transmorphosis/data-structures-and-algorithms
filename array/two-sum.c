#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *result = (int*)malloc(2 * sizeof(int));
    result[0] = 0;
    result[1] = 1;
    for(int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
            if(nums[i] + nums[j] == target){
                *returnSize = 2;
                result[0] = i;
                result[1] = j;
                return(result);
            }
        }
    }
    *returnSize = 0;
    return (NULL);
}
