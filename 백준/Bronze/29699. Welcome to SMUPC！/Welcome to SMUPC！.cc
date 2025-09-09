// 29699. Welcome to SMUPC!

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str = "WelcomeToSMUPC";

    cout << str[(n - 1) % 14];
}