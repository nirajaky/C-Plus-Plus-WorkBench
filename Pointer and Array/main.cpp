#include <iostream>

using namespace std;

int main() {

    string texts[] = {"one ", "two" ,"three"};
    string *pTexts = &texts[0];

    cout << pTexts << endl;
    //pTexts++;
    cout << *pTexts << endl;
    //cout << pTexts << endl;
    for(unsigned int i = 0;i < sizeof(texts)/sizeof(string);i++) {
        cout << pTexts[i] << " " << flush;
    }
    cout << endl;

    for(unsigned int i = 0;i < sizeof(texts)/sizeof(string);i++ ,pTexts++) {
        cout << *pTexts << " " << flush;
    }
    return 0;
}
