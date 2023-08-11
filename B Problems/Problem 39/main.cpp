#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    string s,t; int i, result = 0, dreamon_walk = 0, wifi_signals = 0, marks_number = 0;
    cin>>s>>t;
    for(int i = 0; i<s.length(); ++i ){
        if(s[i]=='+'){
            ++dreamon_walk;
        }
        else --dreamon_walk;
    }
    for(int i = 0; i<t.length(); ++i){
        if(t[i] == '+'){
            ++wifi_signals;
        }
        else if(t[i] == '-'){
            --wifi_signals;
        }
        else ++marks_number;
    }


    if(marks_number == 0){
        if(wifi_signals - dreamon_walk == 0){
            cout<<"1.0"; }
            else {cout<<"0.0"; }
            }


    else{
     i = dreamon_walk - wifi_signals + marks_number;

    if(i%2 == 0 && i/2>=0 && i/2 <= marks_number){
        result = calculate(marks_number) / (calculate(marks_number-i/2) * calculate(i/2));
         printf("%0.12f",double(result)/double(pow(2,marks_number)));

    }
    else cout<<"0.0";

    }
    return 0;
}
