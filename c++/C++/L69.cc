#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *insertinbst(node *root, int d)
{

    if (root == NULL)
    {
        root = new node(d);
        return root;
    }

    if (root->data > d)
    {
        root->left = insertinbst(root->left, d);
    }
    else
    {
        root->right = insertinbst(root->right, d);
    }

    return root;
}

void inputinbst(node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertinbst(root, data);
        cin >> data;
    }
}
void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                // queue still has some child ndoes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

node *minnode(node *root)
{
    node *temp = root;
    while (temp != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

node *deletenode(node *root, int d)
{

    if (root == NULL)
    {
        return root;
    }

    else if (root->data == d)
    {
        // case1
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // case2
        if (root->left != NULL && root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return root;
        }
        if (root->left == NULL && root->right != NULL)
        {
            node *temp = root->right;
            delete root;
            return root;
        }
        // case3
        if (root->left != NULL && root->right != NULL)
        {
            int mini = minnode(root->right)->data;
            root->data = mini;
            root->right = deletenode(root->right, mini);
            return root;
        }
    }

    else if (root->data > d)
    {
        deletenode(root->left, d);
        return root;
    }
    else
    {
        deletenode(root->right, d);
        return root;
    }
}

int main()
{
    node *root = NULL;
    cout << "Enter the values :-" << endl;
    inputinbst(root);
    levelOrderTraversal(root);

    cout << "Minimum value is :-" << minnode(root)->data;

    return 0;
}
