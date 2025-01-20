#include "SequentialSearch.h"

int main(void)
{
    int     i = 0;
    int     Count = 10;
    Node*   List = NULL;
    Node*   Current = NULL;
    Node*   NewNode = NULL;
    Node*   Match = NULL;

    int InitValue[10] = {1, 2, 6, 10, 4, 9, 5, 3, 8, 7};

    for(i = 0; i < Count; i++)
    {
        NewNode = SLL_CreateNode(InitValue[i]);
        SLL_AppendNode(&List, NewNode);
    }

    printf("Simple Sequential Search...\n");

    // Simple Squential Search
    Match = SLL_SequentialSearch(List, 9);
    if(Match != NULL)
        printf("Found : %d\n", Match->Data);
    else
        printf("Not Found : %d\n", Match->Data);
    
    // Move to Front Method
    printf("Move to Front...\n");

    Match = SLL_MoveToFront(&List, 4);
    if(Match != NULL)
        printf("Found : %d\n", Match->Data);
    else
        printf("Not Found : %d\n", Match->Data);
    
    // Transpose Method
    printf("Transpose...\n");

    Match = SLL_Transpose(&List, 7);
    if(Match != NULL)
        printf("Found : %d\n", Match->Data);
    else
        printf("Not Found : %d\n", Match->Data);
    
    // Destroy all nodes from memory
    printf("Destroy List...\n");

    for(i = 0; i < Count; i++)
    {
        Current = SLL_GetNodeAt(List, 0);

        if(Current != NULL)
        {
            SLL_RemoveNode(&List, Current);
            SLL_DestroyNode(Current);
        }
    }
    return 0;
}