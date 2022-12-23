/*          Concatination of Array                  */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
    int *ans = (int *)calloc(2*numsSize, sizeof(int));
    *returnSize = 2*numsSize;
    for(int i = 0; i < numsSize; i++){
        ans[i] = nums[i];
        ans[i+numsSize] = nums[i];
    }
    return ans;
}
/*          Build array from permutation            */
int* buildArray(int* nums, int numsSize, int* returnSize){ 
    *returnSize = numsSize;
    int *ans = (int *)calloc(numsSize, sizeof(int));
    for(int i = 0; i < numsSize; i++){
        ans[i] = nums[nums[i]];
    }
    return ans;
}
/*          Convert Temperatures                    */
double* convertTemperature(double celsius, int* returnSize){
    int nrdegs = (sizeof(celsius)/sizeof(double))*2;
    double* temperatures=malloc(nrdegs*sizeof(double));
    *returnSize = nrdegs;
    for(int i = 0; i < nrdegs; i=i+2){
        temperatures[i] = celsius + 273.15;
        temperatures[i+1] = celsius * 1.80 + 32.00;
    }
    return temperatures;
}
