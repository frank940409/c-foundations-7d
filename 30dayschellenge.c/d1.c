#include<stdio.h>
#include<stdlib.h>

int singlenumber(int* nums, int numsSize);

int main(){
    int numsize = 0;
    printf("Enter the number of nums: ");
    scanf("%d", &numsize);

    int *nums = malloc(numsize * sizeof(int));

    if (nums == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }
    
    for (int i = 0; i < numsize; i++)
    {
        printf("Enter the numebr#%d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    
    printf("The Answer:%d", singlenumber(nums, numsize));

    free(nums);
    nums = NULL;
    return 0;
}

int singlenumber(int* nums, int numsSize){
    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = 0; j < numsSize; j++)
        {   
            
            if (nums[i] == nums[j])//[12,23,23,12,99], i == 0: c == 1
            {
                count ++; 
            }
        }
        if (count == 1)
            {
                return nums[i];
            }else{
                count = 0;
            }
    }
    return 0;
}