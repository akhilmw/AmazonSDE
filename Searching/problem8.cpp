int findFloor(vector<long long> v, long long n, long long x){
    long long l =0,h = n-1;

    while(l<=h){
        long long mid = l + (h-l)/2;
        if(v[mid]>x)
            h = mid-1;
        else
            l = mid+1;
    }
    if(l == 0)
        return -1;
        
    return l-1;
}