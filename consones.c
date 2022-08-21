int findMaxConsecutiveOnes(int *nums, int numsSize)
{
	int i = 0;
	int count = 0;
	int max = 0;
	while (i < numsSize)
	{
		if (count >= max)
			max = count;
		count = 0;
		if (nums[i] == 0)
			i++;
		else
		{
			while (nums[i] == 1)
			{
				count++;
				if (i + 1 == numsSize)
					{
					i++;
					if (count >= max)
						max = count;
					break;
					}
				i++;
			}
		}
	}

	return max;
}
#include<stdio.h>
int main()
{
	int nums[] = {1,1,0,0,1,1,1,1,1};
	printf("%d", findMaxConsecutiveOnes(nums, 9));
}
