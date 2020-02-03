#include<stdio.h> 
int missingNumber(int* nums, int numsSize) {
	int a = 1;
	int i = 0;
	int num = 0;
	for (; i<numsSize; i++, a++)
	{
		num ^= (a^nums[i]);   
	}
	return num;
 
}
 
int main()
{
	int nums[] = { 9, 6, 4, 2, 3, 5, 7, 0, 1 };
	int len = sizeof(nums) / sizeof(int);
	int a = missingNumber(nums, len);
	printf("%d\n", a);
	return 0;
}
