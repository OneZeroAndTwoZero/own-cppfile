#include <stdio.h>
#include <windows.h>

int main() {
    int frequency; // ָ��Ƶ��
    int times; // ָ������
    
    printf("�����������Ƶ�ʣ�");
    scanf("%d", &frequency);
    printf("����������Ĵ�����");
    scanf("%d", &times);
    
    for (int i = 0; i < times; i++) {
        Sleep(1000 / frequency); // ͨ���ӳ�ʱ��������Ƶ��
        
        // ģ�ⰴ�º��ͷ�Ctrl+V��
        keybd_event(VK_CONTROL, 0, 0, 0);
        keybd_event(0x56, 0, 0, 0); // 0x56��ӦV�����������
        keybd_event(VK_CONTROL, 0, KEYEVENTF_KEYUP, 0);
        keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0);
        
        // ģ�ⰴ�º��ͷŻس���
        keybd_event(VK_CONTROL, 0, 0, 0);
        keybd_event(VK_RETURN, 0, 0, 0);
        keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
        keybd_event(VK_CONTROL, 0, KEYEVENTF_KEYUP, 0);
    }
    
    return 0;
}
