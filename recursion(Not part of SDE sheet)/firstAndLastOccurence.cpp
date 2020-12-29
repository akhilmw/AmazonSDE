#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int i,int key){

    if(i==n)
        return -1;       // base case

    if(arr[i] == key){
        return i;
    }
    return firstOcc(arr,n,i+1,key);
}

int lastOcc(int arr[],int n,int i,int key){

    if(i==n)
        return -1;
    
    int restArray = lastOcc(arr,n,i+1,key);
    if(restArray != -1)
        return restArray;
    if(arr[i] == key){
        return i;
    }
    return -1;
}


int main(){
    int arr[6] = {1,2,4,2,2,5};
    cout<<firstOcc(arr,6,0,2)<<endl;
    cout<<lastOcc(arr,6,0,2)<<endl;

    return 0;
}