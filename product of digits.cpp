#include <iostream>
using namespace std;

int productdigits(int n) {
    int count=1;
    do {
        count=count*(n%10);
        n=n/10;
    } while (n>0);
    return count;
}
int main() {
    int n;
    cin >>n;
    cout <<productdigits(n);
    return 0;
}