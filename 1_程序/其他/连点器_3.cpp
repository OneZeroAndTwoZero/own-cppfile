#include <bits/stdc++.h>

// 定义键码常量 
const int VK_UP = 0x26;
const int VK_DOWN = 0x28;
const int VK_LEFT = 0x25;
const int VK_RIGHT = 0x27;

int main() {
    // 模拟按下上键 
    keybd_event(VK_UP, 0, 0, 0);
    // 等待一段时间（可选)
    Sleep(1000);
    // 松开上键 
    keybd_event(VK_UP, 0, KEYEVENTF_KEYUP,0,0);
}
