#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin>>n;

    string word;
    for(int i = 0; i< n; i++){
        cin>>word;
       if(word.size() > 10){
            word = word[0] + to_string(word.size()- 2) + word[word.size()-1]; 
       } 

       cout << word << endl;
    }


}
