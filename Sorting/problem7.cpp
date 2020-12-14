// closet 0's 1's and 2's

// we gotta do it in o(logN) and o(1)

// Method - 1  o(N) & o(1)

void segregate012(int arr[],int n){
    int c0 = 0,c1 = 0,c2 = 0,i;

    for(int i =0;i<n;i++){

        switch (arr[i])
        {
        case 0:
            c0++;
            break;
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        default:
            break;
        }
    }
    // updating the array;
    i=0;

    while(c0>0){
        arr[i++] = 0;
        c0--;
    }
    while(c1>0){
        arr[i++] = 1;
        c1--;
    }
    while(c2>0){
        arr[i++] = 2;
        c2--;
    }
}


// method - 2 (Dutch National Flag Algorithm) (More Efficient) o(N) & o(1);

void segregate012(int arr[],int n){
    int low  =0,high = n-1;
    int mid = 0;

    while(mid<=high){
        switch (arr[mid])
        {
        case 0:
            swap(arr[low],arr[mid]);
            low++,mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid],arr[high]);
            high--;
        
        default:
            break;
        }
    }
}

