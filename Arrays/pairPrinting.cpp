#include<bits/stdc++.h>
using namespace std;
int pairPrint(int a[],int size){
    for (int i=0;i<size;i++){
        for(int j = i+1;j<size;j++){
            cout<<"("<<a[i]<<","<<a[j]<<") ,";
        }
        cout<<endl;
    }
}
int main(){
    int a[] = {1,2,3,4,5};
    pairPrint(a,5);
    return 0;
}