#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    bool flag;
    
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i == 0) { cout<<"Non-prime"<<endl; flag = true; break; }
    }
    if (flag == false) { cout<<"Prime"<<endl;}
    return 0;
}
