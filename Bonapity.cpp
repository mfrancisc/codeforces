#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int T;
    string english;
    string arabic;
    cin>>T;
    for(int i= 0; i< T; i++){
        cin>>english>>arabic;
        transform(english.begin(), english.end(), english.begin(), ::tolower);
        transform(arabic.begin(), arabic.end(), arabic.begin(), ::tolower);
        replace(english.begin(), english.end(), 'b', 'p');
        replace(english.begin(), english.end(), 'i', 'e');
        replace(arabic.begin(), arabic.end(), 'b', 'p');
        replace(arabic.begin(), arabic.end(), 'i', 'e');
        if(arabic == english) { cout << "Yes" << endl;}
        else cout << "No" << endl;
    }

    return 0;
}
