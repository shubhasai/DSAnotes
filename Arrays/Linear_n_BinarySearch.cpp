#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int s = 0;
    int e = size-1;
    while (s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]==key){
            return mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return 0;
}
int linearSearch(int arr[],int size, int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]== key){
            return i+1;
        }
    }
    return 0;
    
}
int main(){
    int a[5] = {2,3,4,5,6};
    int result = binarySearch(a,5,2);
    if(result==0){
        cout<<"Not found";
    }
    else{
        cout<<"Found at index: "<<result;
    }
    return 0;
}