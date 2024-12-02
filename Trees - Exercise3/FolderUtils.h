#ifndef FOLDER_UTILS_H
#define FOLDER_UTILS_H

#include "File.h"

bool hasEmptySubFolder(File* root) {
    if (!root->isFolder) {
        return false;
    }

    if (root->children.empty()) {
        return true;
    }

    for (File* child : root->children) {
        if (child->isFolder && hasEmptySubFolder(child)) {
            return true;
        }
    }

    return false;
}

#endif
