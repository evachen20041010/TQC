/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    for (int i = 0; i < sizeof(nums); i++)
    {
        for (int j = i + 1; j < sizeof(nums); j++)
        {
            if (nums[j] == target - nums[i])
            {
                printf("[%d,%d]", i, j);
            }
        }
        break;
    }
}