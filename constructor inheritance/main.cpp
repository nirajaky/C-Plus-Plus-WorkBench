#include <iostream>

using namespace std;

class Machine
{
private:
    int ID;
public:
    Machine() :ID(0) {cout << "Machine Constructor with no-argument " << endl; }
    void info() { cout << "ID " << ID << endl; }
};
class Vechile : public Machine
{
public:
    Vechile() {cout << "Vechile Constructor with no-argument " << endl; }
};
int main()
{
    Vechile vechile;
    vechile.info();

    return 0;
}
