int findExtra(int a[],int b[],int n){
    int index = 0;
    int start = 0,end = n-1;
    
    while(start<=end){
        int mid = (start+end)/2;
        if(a[mid] == b[mid])
            start = mid  + 1;
        else{
            index = mid;
            end = mid - 1;
        }
    }
    return index;
}
