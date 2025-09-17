// 4470. 줄번호

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; ++i)
    {
        string str;
        getline(cin, str);

        cout << i << ". " << str << "\n";
    }
}