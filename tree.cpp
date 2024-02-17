#include<iostream>
using namespace std;



struct node{
    int data;
    node *left;
    node *right;
}*root;



node* get_node(int data) {
    node* r  = new node();
    r->data  = data;
    r->left  = NULL;
    r->right = NULL;
    return r;
}



void insert_tree(int data){
    if(root == NULL) {
        root = get_node(data);
        return;
    }
    node *cur;
    cur=root;
    while(true){
        if(cur->data > data) {
            if(cur->left == NULL) {
                cur->left = get_node(data);
                return;
            }
            cur=cur->left;
        }
        else {
            if(cur->right == NULL) {
                cur->right = get_node(data);
                return;
            }
            cur=cur->right;
        }
    }
}



int main() {



    node tree;
    insert_tree(43);
    insert_tree(31);




    return 0;
}
