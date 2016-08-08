#include <iostream>
#include <fstream>

using namespace std;

int main() {
    //ifstream cin("spiderman.in");

    int n,a;
    cin>>n;
    int winner = 2;

    while(n--){
        cin>>a;
        // when even vetrices, odd edges
        if(a%2 == 0) {winner = 3 - winner;}
        cout << winner << endl;
    }

    return 0;
}
