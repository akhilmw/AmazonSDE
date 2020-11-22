int equilibriumPoint(long long a[], int n){
    long long sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }

    long long sum2 = 0;
    int ans = -1;

    for(int i=0;i<n;i++){
        sum = sum -a[i];
        if(sum == sum2)
            ans = i+1;
        sum2+=a[i];
    }

    return ans;
}