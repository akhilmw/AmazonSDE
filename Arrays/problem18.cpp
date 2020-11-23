int maxSubarraySum(int arr[], int n){
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i = 0;i<n;i++){
        currSum += arr[i];
        if(currSum < 0){
            currSum = 0;
        }
        maxSum = max(maxSum,currSum);
    }
    return maxSum;
}