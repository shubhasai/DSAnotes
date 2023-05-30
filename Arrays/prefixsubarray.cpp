#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {-10,12,3,-3,1};
    int prefixsum[5] = {0};
    prefixsum[0] = a[0];
    for (int i = 1; i < 5; i++)
    {
        prefixsum[i] = prefixsum[i-1] + a[i];
    }
    //Printing Prefix Sum Array
    for (int i = 0; i < 5; i++)
    {
        cout<<prefixsum[i]<<",";
    }
    //finding max
    int maxsum = 0;
    for(int i = 0;i<5;i++){
        for(int j =i;j<5;j++){
            if(i!=0){
                 int curr_sum = prefixsum[j] - prefixsum[i-1];
                 maxsum = max(maxsum,curr_sum);
            }
            else{
                int curr_sum = prefixsum[j];
                maxsum = max(maxsum,curr_sum);
            }
            
        }
    }
    cout<<endl<<"max sum: "<<maxsum ;
    return 0;
}