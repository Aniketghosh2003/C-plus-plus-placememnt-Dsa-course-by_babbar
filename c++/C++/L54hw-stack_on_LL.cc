#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};

class stack
{
    node *top;

public:
    stack() { top = NULL; }

    void push(int val)
    {
        node *temp = new node(val);

        if (!temp)
        {
            cout << " Stack Overflow " << endl;
        }

        temp->data = val;
        temp->next = top;
        top = temp;
    }

    void pop(){
        node* top1 ;
        top1 = top;
        if(top1 == NULL)
            cout<< "Stack Underflow " << endl;

        top = top->next;
        free(top1);    
    }
    void display(){
        node* temp;
        temp = top;
        if (temp == NULL)
        {
            cout << "List is empty" <<endl;
        }
        else 
           while (temp != NULL)
           {
             cout << temp->data << "->" ;
             temp = temp->next;
           } cout << "NULL";
           
        

    }
};

int main()
{
     
    stack s;

    s.push(5);
    s.push(6);
    s.push(7);
    s.display();
    s.pop();
    s.display(); 

    return 0;
}
