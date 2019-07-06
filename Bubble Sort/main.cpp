#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A[] = {5,6,4,2,7,9,4};
    int len = sizeof(A)/sizeof(int);
    cout << len << endl;

    /*for(int i=0; i<len; i++) {
        for(int j=i+1; j<len; j++) {
            if(A[i] > A[j]){
                int temp = A[j];
                A[j] = A[i];
                A[i] = temp; // Also swap(A[i], A[j]);
            }
        }
    }*/
    sort(A+0,A+len);
    for(int i=0; i<len; i++) {
        cout << i+1 << " - " << A[i] << endl;
    }

    return 0;
}
