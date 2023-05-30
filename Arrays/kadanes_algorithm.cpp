#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {-1,-2,-3,-6,-4,-5,-6};
    int maxsum = INT_MIN;
    bool allneg = true;
    for (int i = 0; i < 7; i++)
    {
        if(a[i]>0){
            allneg = false;
            maxsum = 0;
        }
        maxsum = max(maxsum,a[i]);
    }
    if(allneg){
        cout<<"maxsum: "<<maxsum;
    }
    if(!allneg){
        int currsum = 0;
        for(int i = 0;i<7;i++){
            currsum = currsum + a[i];
            if(currsum<0){
                currsum = 0;
            }
            maxsum = max(maxsum,currsum);
        }
        cout<<"maxsum: "<<maxsum;
    }
    
    return 0;
}