#include "BinarySearchTree.h"

void    PrintSearchResult(int SearchTarget, BSTNode* Result)
{
    if(Result != NULL)
        printf("Found : %d \n", Result->Data);
    else
        printf("Not Found : %d \n", SearchTarget);
}

int main(void)
{
    BSTNode* Tree = BST_CreatNode(123);
    BSTNode* Node = NULL;

    BST_InsertNode(Tree, BST_CreatNode(22));
    BST_InsertNode(Tree, BST_CreatNode(9918));
    BST_InsertNode(Tree, BST_CreatNode(424));
    BST_InsertNode(Tree, BST_CreatNode(17));
    BST_InsertNode(Tree, BST_CreatNode(3));

    BST_InsertNode(Tree, BST_CreatNode(98));
    BST_InsertNode(Tree, BST_CreatNode(34));

    BST_InsertNode(Tree, BST_CreatNode(760));
    BST_InsertNode(Tree, BST_CreatNode(317));
    BST_InsertNode(Tree, BST_CreatNode(1));

    int SearchTarget = 17;
    Node = BST_SearchNode(Tree, SearchTarget);
    PrintSearchResult(SearchTarget, Node);

    int SearchTarget = 117;
    Node = BST_SearchNode(Tree, SearchTarget);
    PrintSearchResult(SearchTarget, Node);

    BST_InorderPrintTree(Tree);
    printf("\n");

    printf("Removing 98...\n");

    Node = BST_RemoveNode(Tree, NULL, 98);
    BST_DestroyNode(Node);

    BST_InorderPrintTree(Tree);
    printf("\n");

    printf("Inserting 111...\n");

    BST_InsertNode(Tree, BST_CreatNode(111));
    BST_InorderPrintTree(Tree);
    printf("\n");

    BST_DestroyTree(Tree);

    return 0;
}