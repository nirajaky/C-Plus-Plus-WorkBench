#include <iostream>

using namespace std;

int main()
{
    int num,sumFactDigit=0,T;
    cin >> T;
    for(int k = 1; k<=T; k++) {

    cout << "Enter a number : ";
    cin >> num;

    int num1 = num;

    while(num1!=0) {
        int temp = num1 %10;
        int fact = 1;

        for(int i =temp; i>=1; i--) {
            fact = fact * i;

        }
        sumFactDigit = sumFactDigit + fact;
        num1 = num1/10;
    }
    cout << "Sum of the Factorials of the Digits = " << sumFactDigit << endl;

    if(sumFactDigit == num)
        cout << "Strong Number" << endl;
    else
        cout << "Not a Strong Number" << endl;
    }

    return 0;
}
