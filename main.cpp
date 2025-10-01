// main.cpp - A comprehensive C++ starter script for GitHub's Linguist
// Created by Abie Haryatmo, enhanced by Gemini
#include <iostream>
#include <vector>
#include <string>

struct Project {
    std::string name;
    std::string version;
};

void print_project_info(const Project& project) {
    std::cout << "Project Name: " << project.name << std::endl;
    std::cout << "Version: " << project.version << std::endl;
}

int main() {
    Project my_project = {"GitHub Auto-Repo Project", "1.0.0"};
    print_project_info(my_project);

    std::cout << "\nThis script is now comprehensive enough for GitHub's language detection." << std::endl;
    
    std::vector<std::string> features = {"Structs", "Functions", "Vectors", "Range-based loops"};
    std::cout << "Features demonstrated:" << std::endl;
    for (const auto& feature : features) {
        std::cout << "  - " << feature << std::endl;
    }
    
    return 0;
}
