#include "SequentialSearch.h"

Node*   SLL_SequentialSearch(Node* Head, int Target)
{
    Node* Current = Head;
    Node* Match = NULL;

    while(Current != NULL)
    {
        if(Current->Data == Target)
        {
            Match = Current;
            break;
        }
        else    
            Current = Current->NextNode;
    }

    return Match;
}

Node* SLL_MoveToFront(Node** Head, int Target)
{
    Node* Current = *Head;
    Node* Previous = NULL;
    Node* Match = NULL;

    while(Current != NULL)
    {
        if(Current->Data == Target)
        {
            Match = Current;
            if(Previous != NULL)
            {
                Previous->NextNode = Current->NextNode;
                Current->NextNode = *Head;
                *Head = Current;
            }
            break;
        }
        else
        {
            Previous = Current;
            Current = Current->NextNode;
        }
    }
    return Match;
}

Node*   SLL_Transpose(Node** Head, int Target)
{
    Node* Current = *Head;
    Node* PPrevious = NULL;
    Node* Previous = NULL;
    Node* Match = NULL;

    while(Current != NULL)
    {
        if(Current->Data == Target)
        {
            Match = Current;
            if(Previous != NULL)
            {
                if(PPrevious != NULL)
                    PPrevious->NextNode = Current;
                else
                    *Head = Current;
                
                Previous->NextNode = Current->NextNode;
                Current->NextNode = Previous;
            }
            break;
        }
        else
        {
            if(Previous != NULL)
                PPrevious = Previous;
            
            Previous = Current;
            Current = Current->NextNode;
        }
    }
    return Match;
}