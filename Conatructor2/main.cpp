#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Product{
    int price1;
    double price2;

    Product(double newprice2, int newprice1) {
        price1 = newprice1;
        price2 = newprice2;
    }
    Product(int newprice1, double newprice2) {
        price1 = newprice1 + 10;
        price2 = newprice2 + 10;
    }
}X(5.0, 5), Y(10, 10.0);

int main()
{
    cout << X.price1 << endl;
    cout << Y.price1;

    return 0;
}
