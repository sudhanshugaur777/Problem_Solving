/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//sudhanshu 
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int n=numsSize;
    int * result=(int *)malloc(2*sizeof(int));
    for(int i=0;i<n;i++){
        int key=nums[i];
        for(int j=i+1;j<n;j++){
            int sum=key+nums[j];
            if(sum==target){
                result[0]=i;
                result[1]=j;
                *returnSize=2;
                return result;
               
        }
    }
    }
    *returnSize=0;
    return result;


}