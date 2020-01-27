#include <iostream>
#include "binarySearchTree.h"

using namespace std;

// Function passed to traverals. Must return void and take a single pass by
// reference argument of the type stored in the binary search tree.  This
// is a requirement of the traversals.
void visit1(int& x)
{
   cout << x << endl;
}
   
// Function passed to traverals. Must return void and take a single pass by
// reference argument of the type stored in the binary search tree.  This
// is a requirement of the traversals.
void visit2(int& x)
{
   cout << x << ' ';
}
   
int main()
{
   bSearchTreeType<int> tree; 
   
   int num;

   cout << "Enter numbers ending with 0." << endl;
   cin >> num;
   while (num != 0)
   {
      tree.Rinsert(num);
      cin >> num;
   }

   cout << endl;
   cout << "node count  = " << tree.treeNodeCount() << endl;
   cout << "tree height = " << tree.treeHeight() << endl;
   cout << "leaves count = " << tree.treeLeavesCount() << endl;
   cout << endl;

   cout << "------- Passing visit function to inorderTraversal -------\n";
   cout << "inorder traversal\n";
   tree.inorderTraversal(visit1); // pass visit1 function to traveral
   cout << endl;

   cout << "------- Passing visit function to traversals -------\n";
   cout << "inorder traversal:   ";
   tree.inorderTraversal(visit2); // pass visit2 function to traversal
   cout << endl;

   if (tree.Rsearch(77))
      cout << "yes" << endl;
   else
      cout << "no" << endl;
   return 0;
}

