#include <chrono>
#include <cstdio>
#include <string>

// コピーとムーブの速度比較
int main() {
    // ベースとなる文字列
    const int stringCount = 100000;
    std::string baseStr(100000, 'a');
    // コピーした文字列
    std::string copyStr;
    // ムーブした文字列
    std::string moveStr;

    // コピー
    {
        auto start = std::chrono::high_resolution_clock::now();
        copyStr    = baseStr;
        auto end   = std::chrono::high_resolution_clock::now();
        auto msec  = static_cast<float>(std::chrono::duration<float>(end - start).count());

        printf("copy: %f msec\n", msec);
    }

    // ムーブ
    {
        auto start = std::chrono::high_resolution_clock::now();
        moveStr    = std::move(baseStr);
        auto end   = std::chrono::high_resolution_clock::now();
        auto msec  = static_cast<float>(std::chrono::duration<float>(end - start).count());

        printf("move: %f msec\n", msec);
    }

    return 0;
}