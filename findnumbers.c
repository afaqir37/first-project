int findNumbers(int* nums, int numsSize)
{
    int i = 0;
    int count = 0;
    int  max = 0;
    while (i < numsSize)
    {
        if (nums[i] / 100000)
            count = 6;
        else if (nums[i] / 10000)
            count = 5;
        else if (nums[i] / 1000)
            count = 4;
        else if (nums[i] / 100)
            count = 3;
        else if (nums[i] / 10)
            count = 2;
        else
            count = 1;
        if (count % 2 == 0)
            max++;
        i++;    
    }
    return max;

}
