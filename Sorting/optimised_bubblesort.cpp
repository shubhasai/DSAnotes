#include<bits/stdc++.h>
using namespace std;
// Time complexity O(n^2) but for best case it is o(n)
int main(){
    int a[]= {1,2,3,4,5};
    int n = 5; //Size of the array
    
    for (int i = 0; i < n; i++)
    {
        bool check = true;
        for (int j = 0; j < n-i-1; j++)
        {
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                check= false;
            }
        }
        if(check){
            for(auto x:a){
                cout<<x<<",";
            }
            return 0;
        }
        
    }
    for(auto x:a){
        cout<<x<<",";
    }
    
    return 0;
}