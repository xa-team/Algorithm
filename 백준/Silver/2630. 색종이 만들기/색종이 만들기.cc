//2630. 색종이 만들기(리팩토링)

#include <iostream>
#include <vector>
using namespace std;

class PaperCounter {
private:
    vector<vector<int>> paper;
    int white = 0;
    int blue = 0;

public:
    PaperCounter(int n) : paper(n, vector<int>(n)) {}

    void input() {
        for (auto& row : paper)
            for (int& cell : row)
                cin >> cell;
    }

    void countColors() {
        divideAndConquer(0, 0, paper.size());
        cout << white << '\n' << blue << '\n';
    }

private:
    void divideAndConquer(int x, int y, int size) {
        int color = paper[x][y];
        if (isUniform(x, y, size, color)) {
            color == 0 ? ++white : ++blue;
            return;
        }

        int half = size / 2;
        divideAndConquer(x, y, half);                   // 왼쪽 위
        divideAndConquer(x, y + half, half);            // 왼쪽 아래
        divideAndConquer(x + half, y, half);            // 오른쪽 위
        divideAndConquer(x + half, y + half, half);     // 오른쪽 아래
    }

    bool isUniform(int x, int y, int size, int color) {
        for (int i = x; i < x + size; ++i)
            for (int j = y; j < y + size; ++j)
                if (paper[i][j] != color)
                    return false;
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    PaperCounter counter(n);
    counter.input();
    counter.countColors();

    return 0;
}