This is a 7days project for me to get used to C and the bridge to start leetcode!!

# C Foundations 7-Day Sprint 🚀  
> 打好 C 基礎 → 7 天後正式踏進 LeetCode

## 🥅 目標
1. **7 天內完成 7 個主題**（Day00–Day06），熟練 C 語法、指標、動態記憶體。  
2. **Day07** 以前在 LeetCode 取得 5+ 題 Easy Accepted（先用 C）。  
3. 所有程式、筆記、截圖 **每天 Commit + Push** 到本 repo，留下完整學習軌跡。

---

## 📁 專案結構
c-foundations-7d/
├─ day00/ # ✅ 環境檢查 & Hello World
├─ day01/ # ✅ if / loop / basic I/O
├─ day02/ # ✅ 指標函式：swap、sum_array
├─ day03/ # ✅ Mini Vector (malloc / realloc)
├─ day04_lc/ # ✅ LeetCode 首三題 (C)
├─ day05_lc/ # ✅ LeetCode 再三題 (C)
├─ day06_hash/ # ✅ 自製簡易 Hash + LC Contains Duplicate
├─ day07_leetcode/ # ✅ 上線提交 & 截圖
├─ docs/ # 筆記、錯誤日誌、Demo GIF
└─ README.md # 就是你現在看的這份


> 資料夾以 **DayXX** 命名；每天完成後 `git add . && git commit -m "DayXX: …" && git push`。

---

## 🗓 每日清單（Quick Checklist）

| Day | 必做 (★) | 選做 (☆) |
|-----|----------|----------|
| **00** | ★ 建立資料夾&Git Repo<br>★ `hello.c` → `gcc … && ./hello` | ☆ 安裝 VS Code Code Runner / Makefile |
| **01** | ★ `even_odd.c`, `table.c` | ☆ Makefile 一鍵編譯 |
| **02** | ★ `swap`, `sum_array` + 測試主程式 | ☆ 撰寫指標陷阱筆記 |
| **03** | ★ `Vector`：init/push/get/free + 壓測 | ☆ 加入 AddressSanitizer |
| **04** | ★ LeetCode #1, #9, #242 (C) | ☆ 30 min 內 AC 計時 |
| **05** | ★ LeetCode #217, #412, #125 (C) | ☆ 寫 `docs/LC_notes.md` |
| **06** | ★ 自己寫簡易 HashTable<br>★ LeetCode #349, #136 | ☆ 和 C++ `unordered_map` 比較 |
| **07** | ★ 提交全部 5–7 題到線上，存截圖<br>★ README 更新進度 | ☆ 評估是否轉學 C++ STL |

---

## 🛠️ 編譯與執行
```bash
# 例：編譯 Day02 的指標函式
gcc day02/pointer_funcs.c -o day02/run && day02/run

# （可選）使用 Makefile
make               # 編譯預設目標
make run-day03     # 執行 Vector 測試
make clean         # 刪除生成檔

⏭ 下一步

刷完 20–30 題 Easy 後，轉向 C++ STL 或 Python，提升速度。
讀《演算法圖解》或看 CS50 DS 章節，開始 Array → Hash → Stack/Queue → Tree 循環。
每週固定「5 題新題＋複習 5 題舊題」，並寫解題文章。
