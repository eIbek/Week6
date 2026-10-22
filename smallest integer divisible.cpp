#include <iostream>
using namespace std;
int smallestrepunitdivbyk(int k) {
    int r=0;
    for (int f=1; f<=k; f++) {
        r=(r*10+1)%k;
        if (r==0) {
            return f;
        }
    }
    return -1;
}
int main() {
    int k;
    cin >>k;
    cout <<smallestrepunitdivbyk(k);
    return 0;
}

