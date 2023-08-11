#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    double prince_speed,dragon_speed,t1,time_back,req_dist,prince_dist,dragon_dist = 0, crown = 0;
    cin>>prince_speed>>dragon_speed>>t1>>time_back>>req_dist;
    prince_dist = t1 * prince_speed;
    while(prince_dist < req_dist){
        prince_dist += 0.001 * prince_speed;
        dragon_dist += 0.001 * dragon_speed;
        if(dragon_dist >= prince_dist && dragon_dist < req_dist){
                ++crown;
            while(dragon_dist > 0){
                dragon_dist -= dragon_speed * 0.001;
                prince_dist += prince_speed * 0.001;
            }
        }
        if(dragon_dist <= 0){
        prince_dist += prince_speed * time_back;
        }
    }
    cout<<crown;
return 0;
}
