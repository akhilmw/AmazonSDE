int maxIndexDiff(int arr[], int n) {
    int left[n];
    int right[n];

    int left[0] = arr[0];
    int right[n-1] = arr[n-1];

    for(int i=1;i<n;i++){
        left[i] = min(left[i-1],arr[i]);
    }

    for(int i =n-2;i>=0;i--){
        right[i] = max(right[i+1],arr[i]);
    }

    int x=0,y=0,ans=0;
    while(x<n && y<n){
        if(right[y]>left[x]){
            ans = max(ans,y-x);
            y++;
        }
        else
            x++;
    }

    return ans;
}