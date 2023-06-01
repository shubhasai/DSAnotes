#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]= {5,3,4,2,1};
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
    }
    
    for(auto x:a){
        cout<<x<<",";
    }
    
    return 0;
}