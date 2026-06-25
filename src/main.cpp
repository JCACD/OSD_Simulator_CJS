#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>

class OSDManager {
public:
    // 啟動 JavaScript UI (透過啟動 Chromium)
    void launchUI() {
        pid_t pid = fork();
        
        if (pid == 0) { // 子行程
            // --kiosk: 全螢幕模式
            // --app: 以應用程式模式開啟網頁
            execlp("chromium-browser", "chromium-browser", 
                   "--kiosk", 
                   "--app=file:///home/root/osd/index.html", 
                   NULL);
            exit(0);
        } else if (pid > 0) {
            std::cout << "OSD UI 已啟動，PID: " << pid << std::endl;
        }
    }

    // 處理硬體核心邏輯
    void runHardwareLoop() {
        while (true) {
            // 在這裡監聽 SPI / GPIO
            // 如果偵測到使用者觸發 OSD 按鍵，則透過 Socket 或訊號通知 UI
            std::cout << "系統運行中：監控 SPI 硬體訊號..." << std::endl;
            sleep(2); // 模擬硬體迴圈
        }
    }
};

int main() {
    OSDManager osd;
    
    // 啟動 UI
    osd.launchUI();
    
    // 執行核心監控
    osd.runHardwareLoop();
    
    return 0;
}