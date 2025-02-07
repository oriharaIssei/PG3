#include "MapChip.h"
#include "Thread/Thread.h"

#include <iostream>

int main() {
    MapChip map;
    std::mutex mainMutex;
    TaskThread<MapChipLoadTask> loadThread;
    loadThread.Init(1);
    loadThread.pushTask(MapChipLoadTask("map.csv", &map));

    while (true) {
        {
        std::lock_guard<std::mutex> lock(mainMutex);
        if (map.isLoaded_) {
            break;
        }
        }
        std::cout << "Loading..." << std::endl;
    }
    for (auto& row : map.chip_) {
        for (int cell : row) {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }
    loadThread.Finalize();
    return 0;
}