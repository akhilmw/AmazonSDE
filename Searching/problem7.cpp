int binarySearch(int arr[],int n,int l,int h,int x){
    while(l<=h){
        int mid = l + (h-l)/2;
        if(arr[mid]<=x)
            l = mid+1;
        else
            h = mid  -1;
    }

    return h;
}


vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                             int m, int n)

{   
    vector<int> ans;
    sort(arr2,arr2+n);

    for(int i =0;i<m;i++){
        int index = binarySearch(arr2,n,0,n-1,arr1[i]);
        ans.push_back(index);
    }

    return ans;
}