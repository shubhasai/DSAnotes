#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]= {5,3,4,2,1};
    int n = 5; //Size of the array
    for (int i = 0; i <n-1; i++)
    {
        int current = a[i];
        int minpostion = i;
        for (int j = i; j < n; j++)
        {
            if(a[j]<a[minpostion]){
                minpostion = j;
            }
        }
        swap(a[minpostion],a[i]);
        
    }
    
    for(auto x:a){
        cout<<x<<",";
    }
    
    return 0;
}