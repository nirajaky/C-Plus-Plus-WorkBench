#include <iostream>

using namespace std;

int main()
{
    int num,sumT =0;
    cout << "Enter no. upto which you want sum " << endl;
    cin >> num;

    for (int i =1; i<= num; i++) {
        if (i % 4 == 0){
            continue;
        }
        sumT = sumT + i;
    }
    cout << "Sum = " << sumT;
    return 0;
}
