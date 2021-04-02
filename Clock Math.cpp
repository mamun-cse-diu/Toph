#include<bits/stdc++.h>

using namespace std;

int main()
{
    int h,m;

    cin>>h>>m;

    double res;

    res = abs(0.5 * (60 * h - 11 * m));

    if(res>180.00)
        res = 360 - res;

    cout<< fixed << setprecision(7) << res << endl;
    return 0;
}
