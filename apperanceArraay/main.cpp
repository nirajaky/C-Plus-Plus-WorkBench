#include <iostream>
#include <bits/stdc++.h>

using namespace std;
fstream f("test.in");
ofstream o("test.out");
int A[100],n,x;//all global elements are initilizwd to zero
int main()
{
    f>>n;

    for(int i=1; i<=n;i++) {
        f>>x;
        cout <<" " << ++A[x] << endl;
    }

    if(A[9] > 0) {
        o <<"YES , it appears" << A[9] << endl;
    }
    else {
        o <<"NO , it's not" << endl;
    }
    return 0;
}
