// for finding a single missing number

int MissingNumber(vector<int>& arr, int n){
    int x1 = 0,x2 = 0;
    for(int i =0;i<n-1;i++){
        x1=x1^arr[i];
    }
    for(int i =1;i<=n;i++){
        x2 = x2^i;
    }

    return (x1^x2);
}


// for finding 2 missing numbers


int missingTwoNumbers(vector<int>& arr,int n){
    
    long long int numSum = 0;
    long long int arrSum = 0;
    int pivot;

    numSum = n*(n-1)/2;

    for(int i =0;i<n-1;i++){
        arrSum+=arr[i];
    }

    pivot = (numSum - arrSum)/2;

    int totalLeftXoR = 0;
    int arrLeft = 0;
    int totalRightXor = 0;
    int arrRight = 0;

    for(int i=1;i<=pivot;i++)
        totalLeftXor ^= i;
    
    for(int i =1;i<=pivot;i++)
        totalRightXor ^= i;

    for(int i =0;i<n-2;i++){
        if(i<=pivot)
            arrLeft ^= arr[i];
        else
        {
            arrRight ^= arr[i];
        }   
    }

    vectot<int> ans;

    ans[0] = (totalLeftXoR^arrLeft);
    ans[1] = (totalRightXoR^arrRight);

    return ans;


}