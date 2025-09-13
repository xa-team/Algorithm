// 30501. 관공... 어찌하여 목만 오셨소...

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool isOk = false;
    while (n-- > 0)
    {
        string str;
        cin >> str;
        for (char c : str)
        {
            if (c == 'S')
            {
                cout << str;
                isOk = true;
            }
        }
        if (isOk)
            break;
    }
}