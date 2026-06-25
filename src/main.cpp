#include <iostream>
#include <cstdlib>
#include <unistd.h>

int main() {
    std::cout << "Starting IP-KVM Core..." << std::endl;

    // 啟動 UI (呼叫系統瀏覽器)
    pid_t pid = fork();
    if (pid == 0) {
        // 請確保板子上已安裝 chromium-browser
        execlp("chromium-browser", "chromium-browser", 
               "--kiosk", "--app=file:///home/root/osd/ui/index.html", NULL);
        exit(0);
    }

    // 核心硬體監控迴圈
    while (true) {
        // TODO: 在此處加入 SPI 讀取程式碼
        std::cout << "Core running: Monitoring SPI..." << std::endl;
        sleep(5);
    }
    return 0;
}