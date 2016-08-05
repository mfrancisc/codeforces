#include <iostream>

using namespace std;

int main(){
    int T,n;
    cin>>T;
    for(int i = 0; i < T; i++){
        cin>>n;
        int A;
        int B;
        cin>>A; 
        cin>>B; 

        int cnt = 0;
        long int tot = 0;
        string result = "";
        while(A){
            cnt = 0;
            //cout << ((A%10)|0) << " == " << B%10 << endl; 
            //cout << ((A%10)|1) << " == " << B%10 << endl; 
            if(((A%10)|0) == B%10) cnt++; 
            if(((A%10)|1) == B%10) cnt++; 
            B /=10;
            A /=10;
            if(cnt == 0) {
                result = "IMPOSSIBLE";
                break;
            }else if(cnt == 2) tot+=2;
        }

        if(result == "") cout << tot % 1000000007 << endl;
        else cout << result << endl;
    
    }

    return 0;
}
