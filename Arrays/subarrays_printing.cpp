#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6};
    for(int i = 0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for(int k = i;k<j;k++){
                cout<<a[k];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}