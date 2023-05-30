#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,12,11};
    int key = 10;
    int s = 0;
    int e = 6;
    int startIndex,endIndex;
    int diff = INT_MAX;
    while(s<e){
        int currsum = arr[s] +arr[e];
        if(abs(currsum - key)<diff){
            diff = abs(currsum - key);
            startIndex = s;
            endIndex = e;
        }
        if(currsum>key){
            e--;
        }
        else{
            s++;
        }
    }
    cout<<arr[startIndex]<<","<<arr[endIndex];
    return 0;
}