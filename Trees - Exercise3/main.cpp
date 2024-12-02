#include <iostream>
#include "File.h"
#include "FolderUtils.h"

int main() {
    File* root = new File("Root", true);

    File* folder1 = new File("Folder1", true);
    File* folder2 = new File("Folder2", true);
    File* file1 = new File("File1", false);
    File* file2 = new File("File2", false);

    root->addChild(folder1);
    root->addChild(folder2);
    folder1->addChild(file1);
    folder1->addChild(file2);

    // folder2 can be empty
    /*folder2->addChild(file1);*/


    bool result = hasEmptySubFolder(root);
    if (result) {
        std::cout << "The root folder contains at least one empty sub-folder." << std::endl;
    } else {
        std::cout << "The root folder does not contain any empty sub-folder." << std::endl;
    }

    delete root;
    delete folder1;
    delete folder2;
    delete file1;
    delete file2;

    return 0;
}
