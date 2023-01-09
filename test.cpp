#include <iostream>

using namespace std;

int func(int n){
    if(n <= 1)
        return 1;
    return func(n / 2) + n;
}


int main(){
    cout << func(333);
}