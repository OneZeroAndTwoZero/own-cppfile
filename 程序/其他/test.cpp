#include <iostream>
using namespace std;

int main() {
// 定义游戏框的宽度和高度
int width = 10;
int height = 5;

// 打印游戏框
for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
        // 在框的上下边界和左右边界上打印"*"
        if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
            cout << "*";
        }
        else {
            cout << " ";
        }
    }
    cout << endl;
}

// 在框的内部打印"114514"
for (int i = 2; i < height - 2; i++) {
    for (int j = 2; j < width - 2; j++) {
        if (i == 2 && j == 3) {
            cout << "1";
        }
        else if (i == 2 && j == 4) {
            cout << "1";
        }
        else if (i == 2 && j == 5) {
            cout << "4";
        }
        else if (i == 2 && j == 6) {
            cout << "5";
        }
        else if (i == 3 && j == 4) {
            cout << "1";
        }
        else if (i == 3 && j == 5) {
            cout << "4";
        }
        else if (i == 3 && j == 6) {
            cout << "5";
        }
        else {
            cout << " ";
        }
    }
    cout << endl;
}

return 0;
}
