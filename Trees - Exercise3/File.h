#ifndef FILE_H
#define FILE_H

#include <string>
#include <vector>

class File {
public:
    bool isFolder;
    std::string name;
    std::vector<File*> children;

    // Constructor
    File(const std::string& name, bool isFolder) : name(name), isFolder(isFolder) {}

    void addChild(File* child) {
        if (isFolder) {
            children.push_back(child);
        }
    }
};

#endif
