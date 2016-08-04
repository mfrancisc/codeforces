#include <iostream>

using namespace std;

int main(void){
    int n,m,c;
    cin>>n;

    int totM = 0;
    int totC = 0;
    for(int i = 0; i < n; i++){
        cin>>m>>c;
        totM +=m;
        totC +=c;
    }
    
    if(totC < totM){
        cout << "Mishka" << endl;
    }else if(totM < totC){
        cout << "Chris" << endl; 
    }else if (totM == totC) {
        cout << "Friendship is magic!^^" << endl; 
    }

    return 0;
}
