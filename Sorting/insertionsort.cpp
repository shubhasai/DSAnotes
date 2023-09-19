#include<bits/stdc++.h>
using namespace std;
int printingArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<", ";
    }
    cout<<endl;
    
}
int main(){
    int a[]= {3,5,4,2,1};
    int n = 5; //Size of the array
    for (int i = 1; i <=n-1; i++)
    {
        int current = a[i];
        int previous = i-1;
        while(previous>=0 && a[previous]>current){
            a[previous+1] = a[previous];
            previous--;
        }
        a[previous+1] = current;
        printingArray(a,5);
    }
    
    for(auto x:a){
        cout<<x<<",";
    }
    
    return 0;
}