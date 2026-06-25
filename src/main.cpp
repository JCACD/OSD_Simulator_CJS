#include <iostream>
#include <cstdlib>
#include <string>

// 獲取目前執行檔路徑並拼接 UI 路徑
std::string getUIPath() {
    return "ui/index.html"; // 執行時需在專案根目錄
}

int main() {
    std::cout << "Starting OSD Simulator..." << std::endl;

    // 跨平台開啟 HTML 的指令
    #ifdef _WIN32
        std::string cmd = "start " + getUIPath();
    #else
        std::string cmd = "xdg-open " + getUIPath() + " &";
    #endif

    std::cout << "Launching UI: " << cmd << std::endl;
    system(cmd.c_str());

    // 模擬核心監控
    while (true) {
        std::cout << "Monitoring... (Press Ctrl+C to stop)" << std::endl;
        #ifdef _WIN32
            Sleep(5000);
        #else
            sleep(5);
        #endif
    }
    return 0;
}