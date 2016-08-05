#include <iostream>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int contestants[n];

    for(int i= 0; i <n; i++){
        cin>>contestants[i];
    }

    int min = contestants[k-1];
    int nextR = 0;
    for(int i= 0; i <n; i++){
        if(contestants[i] > 0 && contestants[i] >= min) nextR++;
        else if(contestants[i] < min) break;
    }
    cout << nextR << endl;

    return 0;
}
