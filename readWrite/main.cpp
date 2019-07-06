#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("test.in");
ofstream g("test.out");

int main()
{
    int a,b,sum;
    f >> a >> b;
    sum = a+b;
    g << sum;
    return 0;
}
