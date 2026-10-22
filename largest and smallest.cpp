#include <iostream>
using namespace std;

int max2(int a, int b) {
    if (a>b) return a;
    return b;
}
int min2(int a, int b) {
    if (a<b) return a;
    return b;
}
int main() {
    int n;
    cin >>n;
    int c;
    cin >>c;
    int max=c;
    int min=c;
    for(int i=1; i<n; i++) {
        cin>>c;
        max=max2(max,c);
        min=min2(min,c);
    }
    cout <<"max="<<max<<" "<<"min="<<min<<endl;
    return 0;
}