#include<bits/stdc++.h>
using namespace std;
int reverseArray(int a[],int size){
    int s = 0;
    int e = size-1;
    while(s<=e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i];
    }
    return 1;
}
int main(){
    int a [5] = {1,2,3,4,5};
    reverseArray(a,5);
    
    return 0;
}