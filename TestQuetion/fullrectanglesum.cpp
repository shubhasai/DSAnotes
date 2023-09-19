#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int> res;
    while (a>0)
    {
      int m,n;
      cin>>m>>n;
      int arr[m][n];
      for (int i = 0; i < m; i++)
      {
        for (int j = 0; j < n; j++)
        {
          cin>>arr[i][j];
        }
        
      }
      int p1,p2,p3,p4;
      cin>>p1>>p2>>p3>>p4;
      int sum = 0;
      for(int k =p1;k<=p3;k++){
        for (int l = p2; l <= p4; l++)
        {
          sum+=arr[k][l];
        }
        
      }
      res.push_back(sum);
      a--;
    }  
    for(auto x : res){
      cout<<x<<" ";
    }
    return 0;
}