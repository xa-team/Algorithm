// 16170. 오늘의 날짜는?

#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    time_t raw_time = time(nullptr);
    tm *utc_time = gmtime(&raw_time);

    char buffer[100];
    strftime(buffer, sizeof(buffer), "%Y\n%m\n%d", utc_time);

    cout << buffer;
    return 0;
}