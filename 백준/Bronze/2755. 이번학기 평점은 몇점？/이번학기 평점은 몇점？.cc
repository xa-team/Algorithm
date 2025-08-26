// 2755. 이번학기 평점은 몇점?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    float allScore = 0, sum = 0;

    while (n-- > 0)
    {
        string str1, str2;
        float score, grade;
        cin >> str1 >> score >> str2;

        if (str2 == "A+")
            grade = 4.3;
        else if (str2 == "A0")
            grade = 4.0;
        else if (str2 == "A-")
            grade = 3.7;
        else if (str2 == "B+")
            grade = 3.3;
        else if (str2 == "B0")
            grade = 3.0;
        else if (str2 == "B-")
            grade = 2.7;
        else if (str2 == "C+")
            grade = 2.3;
        else if (str2 == "C0")
            grade = 2.0;
        else if (str2 == "C-")
            grade = 1.7;
        else if (str2 == "D+")
            grade = 1.3;
        else if (str2 == "D0")
            grade = 1.0;
        else if (str2 == "D-")
            grade = 0.7;
        else if (str2 == "F")
            grade = 0;
        sum += score * grade;
        allScore += score;
    }
    printf("%.02f", sum / allScore);
}