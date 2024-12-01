#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

namespace AOC {
std::string readFiletoString(const std::string &fileName) {
    std::ifstream file(fileName);
    if (!file.is_open()) {
        throw std::runtime_error("Could not open file!");
    }

    std::string result, line;
    while (std::getline(file, line)) {
        result += line + "\\n";
    }

    file.close();
    return result;
}
std::vector<std::string> readFiletoVector(const std::string &fileName) {
    std::ifstream file(fileName);
    if (!file.is_open()) {
        throw std::runtime_error("Could not open file!");
    }

    std::vector<std::string> lines;
    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }

    file.close();
    return lines;
}
} // namespace AOC
