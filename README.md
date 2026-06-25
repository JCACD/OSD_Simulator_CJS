# IP-KVM OSD Simulator

這是一個用於模擬 IP-KVM 本地端 OSD (On-Screen Display) 功能的專案。它採用 **C++ 核心邏輯** 與 **HTML/JS UI 展示層** 分離的架構，旨在提供一個跨平台的模擬與開發環境。

## 專案架構
- `src/`: 存放 C++ 核心程式碼，處理狀態機、硬體事件監聽與系統控制。
- `ui/`: 存放網頁介面檔案，負責呈現 OSD 選單與使用者互動。
- `.github/workflows/`: 存放自動化編譯設定，支援 Windows 與 Linux 跨平台編譯。

## 快速開始

### 1. 本地開發與執行
若您在本機擁有編譯環境（如 GCC/MinGW），可以直接使用 Make 編譯：
```bash
# 編譯
make

# 執行
./kvm_core  # Linux
# 或
kvm_core.exe # Windows