#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");
int A[1000],num,x,maximum;
int main()
{
    f>>num;
    for(int i =1; i<=num; ++i ) {
        f >> x;
        ++A[x];
        maximum = max(x,maximum);
    }

    for(int i=0; i<=maximum; i++) {
        if(A[i] > 0){
            for(int j =0;j<A[i];j++) {
                cout << i << endl;
            }
        }

    }
    return 0;
}
