#include <iostream>

using namespace std;

int main(){
    int T,n;
    for(int i = 0; i < T; i++){
        cin>>n;
        int A[n];
        int B[n];
        for(int e = 0; e < n; e++){
            cin>>A[e]; 
        }
        for(int e = 0; e < n; e++){
            cin>>B[e]; 
        }

        int cnt = 0;
        long int tot = 0;
        string result = "";
        for(int e = 0; e < n; e++){
            cnt = 0;
            if((B[e]|0) == A[e]) cnt++; 
            if((B[e]|1) == A[e]) cnt++; 
            if(cnt == 0) {
                result = "IMPOSSIBLE";
                break;
            }else if(cnt == 2) tot++;
        }

        if(result == "") cout << tot % 1000000007 << endl;
        else cout << result;
    
    }

    return 0;
}
