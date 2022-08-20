/* Method1----------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
int main()
{
    struct Node *root=new Node;
    root->data=10;
    root->left=NULL;
    root->right=NULL;
    root->left=new Node;
    root->left->data=100;
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
}

------------------------------------------------------------------------------------------------------*/
//-----------------------------------------Method 2------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
int main()
{
    struct Node *root=new Node(10);
    root->left=new Node(120);
    root->right=new Node(150);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
}

//--------------------------------------------------------------------------------------------------