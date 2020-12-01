//  Moore's voting Algorithm


int findCandidate(int a[],int n){
    int major = 0;
    int count = 0;

    for(int i =1;i<n;i++){
        if(a[major] == a[i])
            count++;
        else
            count--;

        if(count == 0){
            major = i;
            count = 1;
        }
    }

    return a[major];
}

bool isMajority(int a[],int n,int cand){
    int count = 0;
    for(int i =0;i < n;i++){
        if(a[i]==cand)
            count++;
    }
    if(count>n/2)
        return 1;
    else
        return 0;
}


int majorityElement(int a[],int n){
    int cand = findCandidate(a,n);
    if(isMajority(a,n,cand))
        return cand;
    else
        return -1;
}

