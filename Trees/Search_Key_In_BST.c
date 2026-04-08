#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* creatNode(int data){
    struct node* n;
    n = (struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
// searching key program
struct node* search(struct node* root,int key){
    if(root == NULL)
    return NULL;
    if(root -> data == key)
    return root;
    else if(root -> data > key)
    return search(root -> left , key);
    else
    return search(root -> right, key);
}
int main(){
    struct node* p1 = creatNode(20);
    struct node* p2 = creatNode(9);
    struct node* p3 = creatNode(22);
    struct node* p4 = creatNode(8);
    struct node* p5 = creatNode(10);
    struct node* p6 = creatNode(19);
    struct node* p7 = creatNode(23);

    // link
    p1 -> left = p2;
    p1 -> right = p3;
    p2 -> left = p4;
    p2 -> right = p5;
    p3 -> left = p6;
    p3 -> right = p7;
    struct node* result = search(p1,22);
    if(result != NULL)
    printf("%d is present",result -> data);
    else 
    printf("root not present");




}