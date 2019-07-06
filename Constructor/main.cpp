#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Student {
    int ID, year;
    char name[20];
    Student() {
        ID =0;
        year = 0;
        memset(name, 0, sizeof(name));
    }
}student1;

int main()
{
    cout <<student1.ID << " " << student1.year << " " << student1.name << endl;

    Student student2;
    cout <<student2.ID << " " << student2.year << " " << student2.name << endl;
    return 0;
}
