#include<stdio.h>
#include<stdlib.h>
struct dlist{
    int info;
    struct dlist *pre,*next;
};
struct dlist *first=NULL,*last=NULL;

// creat list
void creat(){
    struct dlist *p;
    int x;
    while(1){
        p=(struct dlist *)malloc(sizeof(struct dlist));
        printf("Enter info: ");
        scanf("%d",&p->info);
        if(first==NULL){
            first=p;
            last=p;
            p->pre=NULL;
        }else{
            last->next=NULL;
            p->pre=last;
            last=p;
        }
        printf("Enter 1 for New List....: ");
        scanf("%d",&x);
        if(x!=1)
        break;
        last->next=NULL;
    }
}

// traverse forword
void forWord(){
    struct dlist *p;
    p=first;
    while(p!=NULL){
        printf("%d->",p->info);
        p=p->next;
    }
}

// traverse backword

void backWord(){
    struct dlist *p;
    p=last;
    while(p!=NULL){
        printf("%d->",p->info);
        p=p->pre;
    }
}

int main(){
    while(1){
        printf("1. List Creat\n");
        printf("2. Traverse Backword\n");
        printf("3. Traverse Forword\n");
        //printf("Enter X then exit program\n");
        int ch;
        printf("Enter your choice: ");
        scanf("%d",&ch);
    
        switch (ch)
        {
            case 1:
                creat();
                break;
            case 2:
                forWord();
                break;
            case 3:
                backWord();
                break;
            default:
                break;
        }
        
        
    }
    return 0;
}