/**
 * Note: The returned array must be malloced, assume caller calls free().
 * This code is without stack implementation
 */
int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize){
    int j;
    int* answer = (int*)calloc(temperaturesSize, sizeof(int));
    int max_val = 0;
    *returnSize = temperaturesSize;

    for(int i = temperaturesSize-1; i >= 0; i--){
        answer[i] = 0;
        if (temperatures[i] >= max_val){
            max_val =  temperatures[i]; 
            continue;
        }
        j= 1;
        while (temperatures[j+i]<=temperatures[i]) {
            j += answer[j+i];
        }
        answer[i] = j;
    }
    return answer;
}
