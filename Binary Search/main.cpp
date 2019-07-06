#include <iostream>
#include <bits/stdc++.h>

using namespace std;
ifstream f("data.in");
ofstream g("data.out");

int A[100], numberElements;

int binarySearch (int X) {

    int left = 1, right = numberElements, mid;
    while(left <= right) {
        mid = (left + right) / 2;
        if (X == A[mid])
            return mid;
        else if(X < A[mid])
            right = mid - 1;
        else
            left = mid +1;
    }
    return -1;

}


int main()
{
    f >> numberElements;

    for(int i =1; i<= numberElements; i++) {
        f >> A[i];
    }

    cout << binarySearch(21);
    return 0;
}
