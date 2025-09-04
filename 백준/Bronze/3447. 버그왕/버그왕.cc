// 3447. 버그왕

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while (getline(cin, str))
    {
        while (true)
        {
            size_t pos = str.find("BUG");
            if (pos == string::npos)
                break;

            str.erase(pos, 3);
        }
        cout << str << "\n";
    }
}