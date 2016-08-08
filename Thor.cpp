#include <iostream>
#include <fstream>
#include <algorithm>
#include <list>

using namespace std;

#define MAXN 300100

int main(){
   //ifstream cin("thor.in");

    int n,q;
    cin>>n>>q;
    list<int> apps[MAXN];

    bool readed[MAXN];

    int a,b;
    int  totNot, mx = 0;
    totNot = 0;
    int event = 0;
    for(int i = 0; i < q; i++){
        cin>>a>>b;

        if(a == 1) {
            apps[b].push_back(++event);
            totNot++;
        }
        else if(a == 2){ 

            while(!apps[b].empty()){
                if(!readed[apps[b].back()]){
                    readed[apps[b].back()] = true; 
                    totNot--;
                }
                apps[b].pop_back();
            }

        }
        else if(a == 3) {
            while(mx<b){
				++mx;
                if(!readed[mx]){
                    readed[mx] = true; 
                    totNot--;
                }
            }
        } 

    cout << totNot << endl;
    }


return 0;
}

