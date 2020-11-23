
// method 1: O(N) & O(N)


vector<long long int> productExceptSelf(vector<long long int>& nums, int n){
    vector<long long int> left(n);
    vector<long long int> right(n);

    left[0] = 1;
    right[n-1] = 1;

    for(int i;i<n;i++){
        left[i] = left[i-1]*nums[i-1];
    }

    for(int i = n-2;i>=0;i++){
        right[i] = right[i+1]*nums[i+1];
    }

    vector<long long int> ans;
    long long int prod = 1;
    for(int i = 0;i<n;i++){
        prod = left[i]*right[i];
        ans.push_back(prod);
    }

    return ans;
}