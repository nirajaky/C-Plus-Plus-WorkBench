#include <iostream>
#include <bits/stdtr1c++.h>

using namespace std;

ifstream f("data.in");
ofstream g("data.out");
int A[100],numberElements;

int firstOccurance(int X) {
    int left = 1,right = numberElements,mid;
    int result = -1;
    while(left <= right) {

        mid = (left + right) /2;

        if (X == A[mid]) {
            result = mid;
            right = mid -1;
        }
        else if (X < A[mid]) {
            right = mid -1;
        }
        else
            left = mid + 1;
    }
    return result;

}
int lastOccurance(int X) {
    int left = 1,right = numberElements,mid;
    int result = -1;
    while(left <= right) {

        mid = (left + right) /2;

        if (X == A[mid]) {
            result = mid;
            left = mid +1;
        }
        else if (X < A[mid]) {
            right = mid -1;
        }
        else
            left = mid + 1;
    }
    return result;

}

int main()
{
    f >> numberElements;

    for(int i =1; i<= numberElements; i++) {
        f >> A[i];
    }
    cout << firstOccurance(50) << endl;

    cout << lastOccurance(50) << endl;

    g << firstOccurance(50) << endl;
    g << lastOccurance(50) << endl;
    return 0;
}
