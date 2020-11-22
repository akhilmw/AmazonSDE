

    int thirdLargest(int arr[],int n){
        int max1 = max(arr[0],arr[1]);
        int max2 = min(arr[0],arr[1]);
        int max3 = INT_MAX;

        if(n<=2)
            return -1;

        for(int i=2;i<n;i++){
            if(arr[i]>max3)
                max3 = arr[i];

            if(arr[i]>max2){
                max3 = max2;
                max2 = arr[i];
            }

            if(arr[i]>max1){
                max2 = max1;
                max1 = arr[i];
            }
        }

        return max3;
    }

    int main(){
        
    }
