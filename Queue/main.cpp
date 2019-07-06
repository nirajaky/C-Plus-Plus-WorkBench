#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int Queue[100],frontInd,backInd;

void push(int x) {
    backInd++;
    Queue[backInd] = x;
}
void pop() {
    Queue[frontInd] =0;
    frontInd++;

}
bool isEmpty() {
    if(backInd > frontInd)
        return false;
    else
        return true;
}
int Front() {
    return Queue[frontInd];

}
int main()
{
    frontInd = 1;
    backInd = 0;

    push(10);
    push(30);
    cout << Front() << endl;
    cout << isEmpty() << endl;
    pop();
    cout << Front() << endl;
    pop();
    cout << isEmpty() << endl;
    cout << Front() << endl;
    return 0;
}
