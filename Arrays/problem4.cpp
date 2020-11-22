int minDist(int arr[],int n,int x,int y){
    int rec_x = -1, rec_y = -1;
    int ans = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i] == x){
            rec_x = i;

            if(rec_y != -1)
                ans = min(abs(rec_x - rec_y), ans);
        }
        else if(arr[i] == y)
            rec_y = -1;

            if(rec_x != -1)
                ans = min(abs(rec_x - rec_y), ans);
    }

    if(ans == INT_MAX)
        return -1;

    return ans;
}