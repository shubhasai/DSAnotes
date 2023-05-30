
#include<bits/stdc++.h>
using namespace std;
void printTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        std::cout << std::string(n - i, ' ');
        std::cout << std::string(i, '*');
        std::cout << std::endl;
    }
    for (int i = n ; i >= 1; i--) {
        std::cout << std::string(n - i, ' ');
        std::cout << std::string(i, '*');
        std::cout << std::endl;
    }
}
int main(){
   printTriangle(3);
    return 0;
}