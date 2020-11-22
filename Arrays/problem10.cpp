vector<int> duplicates(int a[], int n){
    vector<int> v;

    for(int i=0;i<n;i++){
        int index = a[i]%n;
        a[index] += n;
    }

    bool flag = false;

    for(int i=0;i<n;i++){
        if(a[i]/n > 1){
            v.push_back(i);
            flag = true;
        }
    }

    if(!flag)
        v.push_back(-1);

    return v;
}