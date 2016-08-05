#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n,m,a;

    cin>>n>>m>>a;

    long long resX = ceil((double)n/a);
    long long resY = ceil((double)m/a);
    long long res =   resY * resX;
    cout << res << endl;

    return 0;
}
