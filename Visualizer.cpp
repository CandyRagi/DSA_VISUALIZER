#include <iostream>
#include "BinaryTree.h"  // Include your header file

using namespace std;

int main() {
    // Sample tree: array of integers
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

    // Create a Tree object using the array and its size
    Tree tree(arr, size);

    // Print the tree structure (as a list)
    cout << "Tree Structure: ";
    tree.printTree();
    cout << endl;

    // Test getNodeChildren on different nodes
    for (int i = 0; i < size; i++) {
        int* children = tree.getNodeChildren(i);  // Get the children of node i

        // Print the children
        cout << "Children of node " << arr[i] << ": ";
        cout << "Left child = " << children[0] << ", Right child = " << children[1] << endl;
    }

    return 0;
}
