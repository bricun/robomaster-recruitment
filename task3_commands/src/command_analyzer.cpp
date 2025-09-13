#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>

void printUsage() {
    std::cout << "Usage: ./command_analyzer <log_file_path>" << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Error: Invalid number of arguments." << std::endl;
        printUsage();
        return 1;
    }

    std::string filename = argv[1];
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file '" << filename << "'" << std::endl;
        return 1;
    }

    std::unordered_map<std::string, int> commandCount;
    std::string line;
    int totalCommands = 0;

    while (std::getline(file, line)) {
        if (!line.empty()) {
            commandCount[line]++;
            totalCommands++;
        }
    }

    file.close();

    std::cout << "Command Statistics:" << std::endl;
    std::cout << "-------------------" << std::endl;
    for (const auto& pair : commandCount) {
        std::cout << pair.first << ": " << pair.second << " times" << std::endl;
    }
    std::cout << "-------------------" << std::endl;
    std::cout << "Total commands: " << totalCommands << std::endl;

    return 0;
}
