int compare(const void* a, const void* b) { 
    return *(int*)a - *(int*)b;
}
int minDifference(int* nums, int s) {
    if(s<=4)
    return 0;
    qsort(nums, s, sizeof(int), compare);
    int a, b;
    a = fmin(nums[s - 1] - nums[3], nums[s - 2] - nums[2]);
    b = fmin(nums[s - 3] - nums[1], nums[s - 4] - nums[0]);
    return fmin(a, b);
}
