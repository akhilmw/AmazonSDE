// O(nLogn) && O(1);


int findPlatform(int arr[], int dep[], int n){

    sort(arr, arr+n);
    sort(dep, dep+n);

    int max_plat = 1, need_plat = 1;

    int i = 1;
    int j = 0;

    while(i<n && j<n){

        if(arr[i]<=dep[j]){
            max_plat++;
            i++;
            if(max_plat > need_plat)
                need_plat = max_plat;
        }
        else{
            j++;
            max_plat--;
        }
    }

    return need_plat;

}