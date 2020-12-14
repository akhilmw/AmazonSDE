bool find3Numbers(int arr[], int n, int x){

    sort(arr, arr+n);

    for(int i=0;i<n-2;i++){
        int l = i+1;
        int r = n-1;
        int k = arr[i];

        while(l<r){
            if(k+arr[l]+arr[r] == x)
                return true;
            else if(k+arr[l]+arr[r] < x)
                l++;
            else
                r--;
        }
    }

    return false;
}