#pragma once

#include <string>
#include <vector>

struct MapChip {
public:
    void Load(const std::string& _filePath);

    // 指定したファイルパスのCSVファイルを読み込み、2次元の文字列配列として返す
    std::vector<std::vector<int>> chip_;
    bool isLoaded_ = false;
};

struct MapChipLoadTask {
    MapChipLoadTask() = default;
    MapChipLoadTask(const std::string& _filePath, MapChip* _mapChip)
        : filePath_(_filePath),
          mapChip_(_mapChip) {}

    void Update();

    std::string filePath_;
    MapChip* mapChip_;
};