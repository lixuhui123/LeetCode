#include<stdio.h>
#include<stdlib.h>
//给定一个整数数组 nums 和一个目标值 target，
//请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	//numsSize = sizeof(nums)/sizeof(int);1,致命错误
	printf("%d\n", numsSize);
	int i = 0;
	int j = 0;
	for (i=0;i<numsSize-1;i++)
	{
		for (j=i+1;j<numsSize;j++)
		{
		    if (target == *(nums + i) + *(nums + j))
            {
				returnSize[0] = i;
				returnSize[1] = j;
				return returnSize;
            }
			else
			{
				continue;
			}
        
		}
	}
	return NULL;
}
int main1()
{
	int nums[] = { 2,7,11,15 };
	int target = 9;
	int numsSize = 0;
	int returnSize[2] = { 0 };
	numsSize = sizeof(nums) / sizeof(int);
	twoSum(nums, numsSize, target, returnSize);
	printf("%d %d\n", returnSize[0], returnSize[1]);
    system("pause");
    return 0;
}
