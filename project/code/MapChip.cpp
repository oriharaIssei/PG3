#include "MapChip.h"

#include <fstream>
#include <sstream>

void MapChip::Load(const std::string& _filePath) {
    std::ifstream file(_filePath);
    std::string line;
    while (std::getline(file, line)) {
        std::vector<int> row;
        std::istringstream ss(line);
        std::string cell;
        while (std::getline(ss, cell, ',')) {
            int cellNum = std::stoi(cell);
            row.push_back(cellNum);
        }
        chip_.push_back(row);
    }
}

void MapChipLoadTask::Update() {
    if (!mapChip_) {
        return;
    }
    if (mapChip_->isLoaded_) {
        return;
    }

    mapChip_->Load(filePath_);
    mapChip_->isLoaded_ = true;
}
