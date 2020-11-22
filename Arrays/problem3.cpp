vector<int> larg&secLargest(int arr[],int n){
    int max = INT_MIN, max2 = INT_MIN;
    
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max2 = max;
            max = arr[i];
        }
        
        else if(arr[i] > max2 && arr[i]!= max){
            max2 = arr[i];
        }
    }

    if(max2 == INT_MIN)
        return -1;

    vector<int> temp(2);
    temp[0] = max;
    temp[1] = max2;

}