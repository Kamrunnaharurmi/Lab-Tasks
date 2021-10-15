#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int key;
    Node* next;
};
void push(Node** head_ref, int new_key)
{
    Node*new_node=new Node();
    new_node->key = new_key;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

bool search(Node* head, int x)
{
    Node* current = head;
    while (current!= NULL)
    {
        if (current->key == x)
            return true;
        current=current->next;
    }
    return false;
}

int main()
{
    int x = 23;
    Node* head = NULL;
    push(&head, 43);
    push(&head, 12);
    push(&head, 54);
    push(&head, 23);
    push(&head, 44);

    search(head, 23)?
    cout<<"Yes"<<endl:cout<<"No"<<endl;
    return 0;
}

