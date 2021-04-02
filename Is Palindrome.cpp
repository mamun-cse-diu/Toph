#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;

    int len = str.length();
    int cnt = 0,j = len-1;
    for(int i=0; i<len/2; i++){
        if(str[i] == str[j]){
            cnt++;
        }
        j--;
    }
    if(cnt == len/2)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
