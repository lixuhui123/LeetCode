#include<stdio.h>
#include<stdlib.h>
//����һ���������� nums ��һ��Ŀ��ֵ target��
//�����ڸ��������ҳ���ΪĿ��ֵ���� ���� ���������������ǵ������±ꡣ
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	//numsSize = sizeof(nums)/sizeof(int);1,��������
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
