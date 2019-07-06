#include <iostream>

using namespace std;

int main()
{
    int num,bNum[100];
    cout << "Enter a number: " ;
    cin >> num;
     int i = 0;
    while(num > 0) {
        bNum[i] = num % 2;
        num = num/2;
        i++;
    }
    while(i){
        cout << bNum[i-1] << " " ;
        i--;
    }
    return 0;
}
