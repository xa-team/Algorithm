// 5698. Tautogram

#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        string str;
        getline(cin, str);
        if (str[0] == '*')
            break;

        char first = tolower(str[0]);

        bool isOk = true;
        for (int i = 1; i < str.length(); ++i)
        {
            if (str[i] == ' ')
                if (tolower(str[i + 1]) != first)
                {
                    isOk = false;
                    break;
                }
        }
        cout << (isOk ? "Y\n" : "N\n");
    }
}