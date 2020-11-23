vector<int> subarraySum(int arr[], int n, int s){
    int start = 0;
    int last = 0;
    int currSum = 0;
    bool flag = false;
    vector<int> ans;

    for(int i = 0;i<n;i++){
        currSum += arr[i];

        if(currSum >=  s){
            last = i;
            while(s<currSum && start<last){
                currSum -= arr[i];
                start++;
            }
            if(currSum == s){
                ans.push_back(start + 1);
                ans.push_back(last + 1);
                flag = true;
                break;
            }
        }
    }

    if(flag == false)
        ans.push_back(-1);

    return ans;
}