#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

struct event {
    long int type;
    long int app;
};

int main(){
    //ifstream cin("thor.in");

    long int n,q;
    cin>>n>>q;
    long int apps[n];

    vector<event> events;
    fill(apps, apps + n, 0);

    int a,b, noti;
    long int  totNot;
    totNot = 0;
    for(int i = 0; i < q; i++){
        cin>>a>>b;
        noti = 0;

        event eventObj;
        eventObj.type = a;
        eventObj.app = b;
        events.push_back(eventObj);

        if(a == 1) {
            apps[b-1]++; totNot++;
        }
        else if(a == 2){ 

            //cout << b << endl;
            //cout << b - 1 << endl;
            noti = apps[b-1]; 
            //cout << noti << endl;
            apps[b-1]=0; totNot -= noti;
        }
        else if(a == 3) {
            for(int z = 0; z < b;z++){
                event e = events[z];

                int app = e.app;

                //cout << z << endl;
                //cout << app << endl;
                
                if(apps[app-1] > 0){
                apps[app-1]--;
                totNot--;
                }
            } 
        }

        cout << totNot << endl;

    }

    return 0;
}

