int transitionPoint(int arr[],int n){
    if(arr[0])
        return 0;

    int start = 0,end = n-1;

    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == 0)
            start = mid+1;
        else if(arr[mid] == 1){
            if(arr[mid-1] == 0)
                return mid;
            else
                end = mid -1;
        }
    }
    return -1;
}