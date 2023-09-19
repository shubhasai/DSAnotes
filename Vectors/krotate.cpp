#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {1,2,3,4,5};
    int k = 3;
    int size = arr.size();
    k = k%size;
    reverse(arr.begin(),arr.begin()+(size-k));
     reverse(arr.begin()+(size-k),arr.end());
   reverse(arr.begin(),arr.end());
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}