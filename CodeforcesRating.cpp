#include <iostream>

using namespace std;

int main(){
    int T,N,R,a, totRagting;
    cin>>T;
    for(int i = 0; i<T; i++){
        cin>>N>>R;
        totRagting = 0;
        for(int e = 0; e < N; e++){
            cin>>a; 
            totRagting += a;
        }
        if(totRagting + 1500 == R) cout << "Correct" << endl;
        else cout << "Bug" << endl;
    
    }

    return 0;
}

