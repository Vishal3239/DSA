#include<stdio.h>
#include<malloc.h>
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
void preOrderTraversal(struct node *root){
    if(root != NULL){
        printf("%d ",root ->data);
        preOrderTraversal(root -> left);
        preOrderTraversal(root -> right);
    }
}

void postOrderTraversal(struct node *root){
    if(root != NULL){
        
        postOrderTraversal(root -> left);
        postOrderTraversal(root -> right);
        printf("%d ",root ->data);
    }
}
void inOrderTraversal(struct node *root){
    if(root != NULL){
        
        inOrderTraversal(root -> left);
        printf("%d ",root ->data);
        inOrderTraversal(root -> right);
    }
}
int main(){
    struct node *p1 = creatNode(2);
    struct node *p2 = creatNode(1);
    struct node *p3 = creatNode(4);
    struct node *p4 = creatNode(8);
    struct node *p5 = creatNode(10);

    // linking the node
    p1 ->left = p2;
    p1 ->right = p3;

    p2 ->left = p4;
    p2 ->right = p5;
    // preOrderTraversal(p1);
    // postOrderTraversal(p1);
    inOrderTraversal(p1);
    return 0;
}