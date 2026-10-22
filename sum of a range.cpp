#include <iostream>
using namespace std;

long long sumrange(int a, int b) {
    if (a>b) {
        int c=a;
        a=b;
        b=c;
    }
    long long count=0;
    for (int i=a; i<=b; i++ ) {
        count=count+i;
    }
    return count;
}
int main() {
    int a, b;
    cin >>a>>b;
    cout <<sumrange(a,b);
    return 0;
}


