#include<bits/stdc++.h>
using namespace std;
// Time complexity O(n^2) for both best and worst case
int main(){
    int a[]= {5,3,4,2,1};
    int n = 5; //Size of the array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
        
    }
    for(auto x:a){
        cout<<x<<",";
    }
    
    return 0;
}