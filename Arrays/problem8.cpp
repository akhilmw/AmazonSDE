int max_sum(int arr[],int n){
    int cumSum = 0;
    for(int i=0;i<n;i++){
        cumSum += arr[i];
    }

    int maxSum = 0;
    int currSum = 0;
    for(int i=0;i<n;i++){
        currSum = i*arr[i];
        maxSum = currSum;
    }

    for(int i=1;i<n;i++){
        int temp = currSum - cumSum + arr[i-1]*n;
        if(temp > maxSum){
            maxSum = temp;
        }
    }

    return maxSum;
}