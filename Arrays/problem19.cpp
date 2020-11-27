// method-1 O(N*2)

int trappingWater(int arr[], int n){
    int water = 0;

    for(int i =1;i<n-1;i++){
        int lmax = arr[i];
        for(int j=0;j<i;j++){
            lmax = max(lmax,arr[j]);
        }
        int rmax = arr[i];
        for(int j=i+1;j<n;j++){
            rmax = max(rmax,arr[j]);
        }

        water += min(lmax,rmax) - arr[i];
    }

    return water;
}

// method -2 O(N)

int trappingWater(int arr[], int n){
    int lmax[n];
    lmax[0] = arr[0];

    for(int i=1;i<n;i++){
        int temp = max(arr[i],lmax[i-1]);
        lmax[i] = temp;
    }

    int rmax[n];
    rmax[n-1] = arr[n-1];

    for(int i =n-2;i>=0;i--){
        int temp = max(arr[i],rmax[i+1]);
        rmax[i] = temp;
    }
    int water = 0;
    for(int i =0;i<n;i++){
        water += min(lmax[i],rmax[i]) - arr[i];
    }

    return water;
}