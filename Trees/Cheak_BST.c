#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* right;
    struct node* left;
};

struct node* creatNode(int data){
    struct node* n;
    n = (struct node*)malloc(sizeof(struct node));
    n -> data = data;
    n ->left = NULL;
    n -> right = NULL;
    return n;
}
void inOrderTraversal(struct node *root){
    if(root != NULL){
        
        inOrderTraversal(root -> left);
        printf("%d ",root ->data);
        inOrderTraversal(root -> right);
    }
}
int IsBST(struct node* root){
    static struct node *prev;
    if(root != NULL){
        if(!IsBST(root->left))
        return 0;
        if(prev != NULL && root->data <= prev->data)
        return 0;
        prev = root;
        return IsBST(root->right);
    }else return 1;
}
int main(){
    
    struct node *p1 = creatNode(8);
    struct node *p2 = creatNode(5);
    struct node *p3 = creatNode(9);
    struct node *p4 = creatNode(4);
    struct node *p5 = creatNode(6);

    // linking the node
    p1 ->left = p2;
    p1 ->right = p3;

    p2 ->left = p4;
    p2 ->right = p5;
    
    inOrderTraversal(p1);
    printf("\n");
    printf("%d",IsBST(p1));
    return 0;

}