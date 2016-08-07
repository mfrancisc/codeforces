#include <iostream>

using namespace std;

int main(){
    int n;
    cin >>n;

    string feeling;
    int i = 1;
    while(i<=n){
        if(i%2 != 0) feeling += "I hate ";
        else feeling += "I love ";
        if(n-i > 0) feeling += "that ";
        i++;
    }

    cout << feeling + "it" << endl;

    return 0;
}
