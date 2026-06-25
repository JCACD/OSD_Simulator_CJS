#include <iostream>
#include <windows.h> // Windows 專用

int main() {
    std::cout << "Starting IP-KVM OSD (Windows Mode)..." << std::endl;

    // 使用 ShellExecute 開啟網頁，這比 system("start...") 更穩定
    ShellExecute(NULL, "open", "ui\\index.html", NULL, NULL, SW_SHOWNORMAL);

    // 核心監控模擬
    while (true) {
        std::cout << "Monitoring... (Press Ctrl+C to stop)" << std::endl;
        Sleep(5000); // Windows 專用的睡眠函數
    }
    return 0;
}