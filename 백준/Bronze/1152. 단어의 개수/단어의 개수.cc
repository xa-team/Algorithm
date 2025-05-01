// 1152. 단어의 개수

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string input;
    int count = 0;

    getline(cin, input);
    int size = input.length();

    bool inWord = false;

    for (int i = 0; i < size; i++)
    {
        if (input[i] != ' ' && !inWord) // 공백 X, 이전에 공백이 없었다면면
        {
            inWord = true; // 단어 시작
            count++;       // 단어 수 증가
        }
        else if (input[i] == ' ')
        {
            inWord = false; // 단어 끝끝
        }
    }

    cout << count;
}