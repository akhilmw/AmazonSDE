void convertToWave(int *arr, int n){
    for(int i=0;i<n-1;i=i+2){
        swap(arr[i],arr[i+1]);
    }

}