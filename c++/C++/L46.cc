#include<stdio.h>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int data){
                this->data = data;
                this->next = NULL;
            }
};


bool iscircular(Node* head){
    
    if (head == NULL)
    {
        return true;
    }

    Node* temp = head->next;

    while(temp != NULL && temp != head){
        temp = temp->next;

    }
    if (temp == head)
    {
        return true;
    }
    else
    {
        return false;
    }
    
    
    
}



int main(int argc, char const *argv[])
{
    
    return 0;
}
