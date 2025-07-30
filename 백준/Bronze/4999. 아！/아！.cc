// 4999. 아!

#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0;
    string jae, doc;
    cin >> jae >> doc;
    for (char c : jae)
    {
        if (c != 'h')
            ++a;
    }
    for (char c : doc)
    {
        if (c != 'h')
            ++b;
    }
    if (a >= b)
        cout << "go";
    else
        cout << "no";
}