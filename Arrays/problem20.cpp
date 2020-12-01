long long maxArea(long long A[], int len){

    long long int water = 0;

    int i =0,j = len - 1;

    while(i<j){
        if(A[i]<A[j]){
            water = max(water,A[i]*(j-i));
            i++;
        }
        else
        {
            water = max(water,A[j]*(j-i));
            j--;
        }
        
    }

    return water;
}