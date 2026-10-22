#include <iostream>
using namespace std;

bool isprime(int n) {
    if (n<2) return false;
    int d=2;
    while (d*d<=n) {
        if (n%d==0) {
            return false;
        }
        d++;
    }
    return true;
}
int main() {
    int N;
    cin>>N;
    int count=0;
    for (int p=2; p+2<=N; p++) {
        if (isprime(p)&&isprime(p+2)) {
            cout<<"("<<p<<","<<p+2<<")";
            count++;
        }
    }
    cout <<endl;
    cout <<"count="<<count<<endl;
    return 0;
}
