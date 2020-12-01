// O(n) method

int peakElement(int arr[],int n){
    for(int i =0;i<n;i++){
        if(n==0 || (arr[i]>arr[i-1]) && (i==n-1 || arr[i]>arr[i+1]));
        return i;
    }
}


// O(logN) method using binary search

int peakElement(int arr[],int n){

    int start = 0,end = n-1;
    while(start<end){
        int mid = (start+end+1)/2;
        if(arr[mid-1]>arr[mid])
            end = mid-1;
        else
            start = mid;
    }

    // here start == end
    return start;
}

// OR

int peakElement(int arr[],int n){
    int start = 0,end = n-1;

    while (start<end)
    {
        int mid = (start+end+1)/2;
        if(arr[mid+1]>arr[mid])
            start = mid+1;
        else
            end = mid;
    }

    return start;
    
}