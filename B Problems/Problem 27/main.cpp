#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
    int n;
    int arr[3][3];
    cin>>n;
    string s1,s2,s3;
    while(n--){
        cin>>s1>>s2>>s3;
        if(s1[0] == s1[1] && s1[1] == s1[2] && s1[0]!='.'){
            cout<<s1[0]<<endl; continue;
        }
        if(s2[0] == s2[1] && s2[1] == s2[2] && s2[0]!='.'){
            cout<<s2[0]<<endl; continue;
        }
        if(s3[0] == s3[1] && s3[1] == s3[2] && s3[0]!='.'){
            cout<<s3[0]<<endl; continue;
        }
        if(s1[0] == s2[0] && s2[0] == s3[0] && s1[0]!='.'){
            cout<<s1[0]<<endl; continue;
        }
        if(s1[1] == s2[1] && s2[1] == s3[1] && s1[1]!='.'){
            cout<<s1[1]<<endl; continue;
        }
        if(s1[2] == s2[2] && s2[2] == s3[2] && s1[2]!='.'){
            cout<<s1[2]<<endl; continue;
        }
        if(s1[0] == s2[1] && s2[1] == s3[2] && s1[0]!='.'){
            cout<<s1[0]<<endl; continue;
        }
        if(s1[2] == s2[1] && s2[1] == s3[0] && s1[2]!='.'){
            cout<<s1[2]<<endl; continue;
        }

        cout<<"DRAW"<<endl;

    }

return 0;
}
