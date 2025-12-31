#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
    if (!fs::exists("data")) {
        fs::create_directory("data");
    }
}
