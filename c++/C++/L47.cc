#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

bool detechLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node *floaddetechloop(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *fast = head;
    Node *slow = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;
        if (fast == slow)
        {
            return slow;
        }
    }
    return NULL;
}

Node *getStartingNode(Node *head)
{

    if (head == NULL)
        return NULL;

    Node *intersection = floaddetechloop(head);

    if (intersection == NULL)
        return NULL;

    Node *slow = head;

    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}

Node *removeloop(Node *head)
{
    if (head == NULL)
        return NULL;

    Node *startingloop = getStartingNode(head);

    if (startingloop == NULL)
        return head;
        
    Node *temp = startingloop;

    while (temp->next != startingloop)
    {
        temp = temp->next;
    }

    temp->next = NULL;
    return head;
}

int main()
{

    return 0;
}
