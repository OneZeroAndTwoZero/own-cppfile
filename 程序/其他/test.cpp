#include <iostream>
using namespace std;

int main() {
// ������Ϸ��Ŀ�Ⱥ͸߶�
int width = 10;
int height = 5;

// ��ӡ��Ϸ��
for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
        // �ڿ�����±߽�����ұ߽��ϴ�ӡ"*"
        if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
            cout << "*";
        }
        else {
            cout << " ";
        }
    }
    cout << endl;
}

// �ڿ���ڲ���ӡ"114514"
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
