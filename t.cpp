#include<iostream>
using namespace std;

class BST{
    private:
    struct node{
        int data;
        node *left = NULL;
        node *right = NULL;
        int count = 0;
    };
    node *root;
    public:

    BST(){
        root = NULL;
    }

    void InsertNode(int key){
        cout<<"a";
        node *newnode = new node;
        node *traverse;

        if(this->root == NULL){
            root = newnode;
            root->data = key;
            root->count++;
            root->left = root->right = NULL;
            cout<<"\nnode added...root\n";
        }
        else{
            traverse = root;
            newnode->data = key;
            while(traverse != NULL){
                if(traverse->data == key){
                    traverse->count++;
                    traverse->left = traverse->right = NULL;
                    cout<<"\nduplicate value is stored\n";
                    break;
                }
                else if(key < traverse->data){
                    if(traverse->left != NULL){
                        traverse = traverse->left;
                    }
                    else{
                        traverse->left = newnode;
                        cout<<"\nnode added...left\n";
                        break;
                    }

                }
                else if(key > traverse->data){
                    if(traverse->right != NULL){
                        traverse = traverse->right;
                    }
                    else{
                        traverse->right = newnode;
                        cout<<"\nnode added...right\n";
                        break;
                    }
                }
            }

        }
    }
    
};

int main(){
    BST tree;
    tree.InsertNode(12);
    tree.InsertNode(8);

    return 0;
}