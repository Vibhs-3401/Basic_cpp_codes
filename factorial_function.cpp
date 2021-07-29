// find the factorial of given number using function and NOT recursion.

#include <iostream>
#include <math.h>
using namespace std;

int fact(int num) {
    int factorial = 1;
    
    for (int i=2; i<=num; i++) {
        factorial*=i;
    }
    return factorial;
}

int main() {

    int a;
    cin>>a;
    
    int fac;
    fac = fact(a);
    cout<<fac<<endl;

    return 0;
}
