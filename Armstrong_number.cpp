// if sum of cubes of all digits are equal to that number itself then it is called as Armstrong number.

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int x = n;
    
    int sum = 0;
    
    while(n>0) {
        int lastdigit = n%10;
        sum+= pow(lastdigit, 3);
        n/=10;
    }
    
    if (sum == x) cout<<"Armstrong number"<<endl;
    else cout<<"Not an armstrong number"<<endl;
    return 0;
}
