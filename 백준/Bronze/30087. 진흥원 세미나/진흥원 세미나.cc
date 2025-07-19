// 30087. 진흥원 세미나

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;

        if (str == "Algorithm")
            cout << 204 << endl;
        else if (str == "DataAnalysis")
            cout << 207 << endl;
        else if (str == "ArtificialIntelligence")
            cout << 302 << endl;
        else if (str == "CyberSecurity")
            cout << "B101" << endl;
        else if (str == "Network")
            cout << 303 << endl;
        else if (str == "Startup")
            cout << 501 << endl;
        else if (str == "TestStrategy")
            cout << 105 << endl;
    }
}