#include <iostream>

using namespace std;

class trienode
{
public:
    char data;
    trienode *children[26];
    bool isterminalnode;

    trienode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isterminalnode = false;
    }
};

class trie
{
public:
    trienode *root;

    trie()
    {
        root = new trienode('\0');
    }

    void insertuntill(trienode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isterminalnode = true;
            return;
        }

        int index = word[0] - 'a';
        trienode *child;

        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new trienode(word[0]);
            root->children[index] = child;
        }

        insertuntill(child, word.substr(1));
    }

    void insertword(string word)
    {
        insertuntill(root, word);
    }

    bool searchuntill(trienode *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isterminalnode;
        }

        int index = word[0] - 'a';
        trienode *child;

        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }
        
        return searchuntill(root,word.substr(1));
        
    }

    bool search(string word)
    {
        return searchuntill(root,word);
    }
};

int main()
{

    return 0;
}
