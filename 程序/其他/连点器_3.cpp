#include <bits/stdc++.h>

// ������볣�� 
const int VK_UP = 0x26;
const int VK_DOWN = 0x28;
const int VK_LEFT = 0x25;
const int VK_RIGHT = 0x27;

int main() {
    // ģ�ⰴ���ϼ� 
    keybd_event(VK_UP, 0, 0, 0);
    // �ȴ�һ��ʱ�䣨��ѡ)
    Sleep(1000);
    // �ɿ��ϼ� 
    keybd_event(VK_UP, 0, KEYEVENTF_KEYUP,0,0);
}
