vector<int> removeDuplicate(vector<int>& arr, int n)
{
    int sam[100];
    for(int i=0;i<100;i++){
        sam[i]=0;
    }
    vector<int> v;
    
    for(int i = 0; i<n; i++){
        if(sam[arr[i]] == 0){
            sam[arr[i]] = 1;
            v.push_back(arr[i]);
        }
    }
    
    return v;

}
