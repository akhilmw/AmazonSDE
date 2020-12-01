// search in sorted and rotated array

int Search(vector<int> vec, int k){
    int n = vec.size(),ans = -1;

    int low = 0,high = n-1;

    while(low<=high){
        int mid = low + (high - low)/2;
        if(vec[mid] == k){
            ans = mid;
            break;
        }

        if(vec[low]<=vec[mid]){
            if(k>=vec[low] && k<=vec[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }

        else{
            if(vec[mid]<vec[high]){
                if(k>=vec[mid] && k<=vec[high])
                    low = mid + 1;
                else 
                    high = mid - 1;
            }
        }

    }

    return ans;
}