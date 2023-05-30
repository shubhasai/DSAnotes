> std::cout << std::string(n - i, ' '); This will print " " in a single line till n-1 times.
>Here  is a example to demontrate the same:
 #include<bits/stdc++.h>
using namespace std;
int main(){
    for (int i = n; i >= 1; i--) {
        std::cout << std::string(n - i, ' ');
        std::cout << std::string(2 * i - 1, '*');
        std::cout << std::endl;
    }
    return 0;
}
// This doesn't affect the time complexity of the program. Still it is n^2. While writing in std::cout<< std::string((lenght),'character') the character should be in '' and should be only one character. for example '* ' wont work

