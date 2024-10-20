#include <stdio.h>
#include <windows.h>

int main() {
    int frequency; // 指定频率
    int times; // 指定次数
    
    printf("请输入连点的频率：");
    scanf("%d", &frequency);
    printf("请输入连点的次数：");
    scanf("%d", &times);
    
    for (int i = 0; i < times; i++) {
        Sleep(1000 / frequency); // 通过延迟时间来控制频率
        
        // 模拟按下和释放Ctrl+V键
        keybd_event(VK_CONTROL, 0, 0, 0);
        keybd_event(0x56, 0, 0, 0); // 0x56对应V键的虚拟键码
        keybd_event(VK_CONTROL, 0, KEYEVENTF_KEYUP, 0);
        keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0);
        
        // 模拟按下和释放回车键
        keybd_event(VK_CONTROL, 0, 0, 0);
        keybd_event(VK_RETURN, 0, 0, 0);
        keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
        keybd_event(VK_CONTROL, 0, KEYEVENTF_KEYUP, 0);
    }
    
    return 0;
}
