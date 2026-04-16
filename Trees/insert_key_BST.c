#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
// make
struct node* creatNode(int val){
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n ->data=val;
    n->left=NULL;
    n->right=NULL;
    return n;
}
// insert
struct node* insert(struct node* root,int val){
    if(root==NULL){
        return creatNode(val);
    }
    if(val < root->data){
        root->left=insert(root->left,val);
    }else{
        root->right=insert(root->right,val);
    }
    return root;
}
//delete
void delete(struct node* root,int key){
    struct node* temp=root->data;
    if(root==NULL){
        printf("tree empty !");
        return;
    }
    delete(root->left,key);
    delete(root->right,key);
    if(root->data=key){
        free(temp);
    }
}
//print
void inorder(struct node* root){
    if(root==NULL) {
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
int main(){
    struct node* root=NULL;
    while (1)
    {
        printf("Enter 0 exit: \n");
        int p;
        printf("Enter any value: ");
        scanf("%d",&p);
        if(p==0) break;
        root=insert(root,p);
    }
    printf("Inorder Traversel: ");
    inorder(root);
    return 0;
    
}
