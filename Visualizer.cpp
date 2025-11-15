#include <iostream>
#include "BinaryTree.h"  // Include your header file

using namespace std;

int main()
{
    // Test 1: Complete binary tree
    cout << "Test 1: Complete Binary Tree" << endl;
    cout << "       1" << endl;
    cout << "      / \\" << endl;
    cout << "     2   3" << endl;
    cout << "    / \\ / \\" << endl;
    cout << "   4  5 6  7" << endl;
    
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    Tree tree1(arr1, 7);
    
    cout << "\nTree array representation: ";
    tree1.printTree();
    
    cout << "\nNode 0 (value=1) children: ";
    int *children = tree1.getNodeChildren(0);
    cout << "Left=" << children[0] << ", Right=" << children[1] << endl;
    delete[] children;
    
    cout << "Node 1 (value=2) children: ";
    children = tree1.getNodeChildren(1);
    cout << "Left=" << children[0] << ", Right=" << children[1] << endl;
    delete[] children;
    
    cout << "Node 2 (value=3) children: ";
    children = tree1.getNodeChildren(2);
    cout << "Left=" << children[0] << ", Right=" << children[1] << endl;
    delete[] children;
    
    cout << "Node 3 (value=4) children: ";
    children = tree1.getNodeChildren(3);
    cout << "Left=" << children[0] << ", Right=" << children[1] << endl;
    delete[] children;
    
    // Test 2: Incomplete binary tree
    cout << "\n\nTest 2: Incomplete Binary Tree" << endl;
    cout << "       10" << endl;
    cout << "      /  \\" << endl;
    cout << "     20  30" << endl;
    cout << "    /" << endl;
    cout << "   40" << endl;
    
    int arr2[] = {10, 20, 30, 40};
    Tree tree2(arr2, 4);
    
    cout << "\nTree array representation: ";
    tree2.printTree();
    
    cout << "\nNode 0 (value=10) children: ";
    children = tree2.getNodeChildren(0);
    cout << "Left=" << children[0] << ", Right=" << children[1] << endl;
    delete[] children;
    
    cout << "Node 1 (value=20) children: ";
    children = tree2.getNodeChildren(1);
    cout << "Left=" << children[0] << ", Right=" << children[1] << endl;
    delete[] children;
    
    cout << "Node 2 (value=30) children: ";
    children = tree2.getNodeChildren(2);
    cout << "Left=" << children[0] << ", Right=" << children[1] << endl;
    delete[] children;
    
    // Test 3: Single node tree
    cout << "\n\nTest 3: Single Node Tree" << endl;
    int arr3[] = {100};
    Tree tree3(arr3, 1);
    
    cout << "Tree array representation: ";
    tree3.printTree();
    
    cout << "\nNode 0 (value=100) children: ";
    children = tree3.getNodeChildren(0);
    cout << "Left=" << children[0] << ", Right=" << children[1] << endl;
    delete[] children;
    
    return 0;
}
