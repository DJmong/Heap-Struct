#include <iostream>

using namespace std;
typedef int DATA;

typedef struct heap
{
    DATA val;
    heap *left;
    heap *right;
} heap;

bool is_empty(heap *node)
{
    if(node == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
    return false;
}

DATA heap_pop(heap *root, DATA val)
{
    //search
    //delete
    //sort
    //return
}

void heap_push(heap *root, DATA val)
{
    //search
    //insert
    //sort
}

static void _heap_del(heap *node)
{
    delete node;
}

static void _heap_add(heap **node, DATA val)
{
    node = new heap();
    node->val = val;
    cout << *node->val << endl;
    node->left = NULL;
    node->right = NULL;
}

int main()
{

    heap *root;
    DATA val = 1;
    _heap_add(&root, val);
    cout << root->val << endl;
    cout << "compile complete" << endl;
    return 0;
}