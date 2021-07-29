// find the nCr for given value of n and r, formula: n!/(r! * (n-r)!)


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

    int n,r;
    cin>>n>>r;
    
    int nCr;
    nCr = fact(n)/(fact(r)*fact(n-r));
    cout<<nCr<<endl;

    return 0;
}
