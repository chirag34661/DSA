#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node *l;
    struct node *r;
};
struct node *insert(struct node *,int);
void Preorder(struct node *);
void Inorder(struct node *);
void Postorder(struct node *);
void display(struct node *);
int countLeafNode(struct node *);
int countNonLeafNode(struct node *);
int MaxElement(struct node *);
int MinElement(struct node *);
int BinarySearch(struct node *,int);
void Deletion(struct node *,int);

void main(){
    struct node *tree=NULL;
    int n,item,t;
    printf("Enter no. of nodes: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Enter value: ");
        scanf("%d",&item);
        tree=insert(tree,item);
    }
    printf("Preorder: ");
    Preorder(tree);
    printf("\nInorder: ");
    Inorder(tree);
    printf("\nPostorder: ");
    Postorder(tree);
    printf("\nLeaf Node Count Is: %d",countLeafNode(tree));
    printf("\nNon Leaf Node Count Is: %d",countNonLeafNode(tree));
    printf("\nMax valued element in the tree:%d",MaxElement(tree));
    printf("\nMin valued element in the tree:%d",MinElement(tree));
    printf("Enter the element you want to search for the address: ");
    scanf("%d",&t);
    printf("\nThe address of the searched element is = %d",BinarySearch(tree,t));
    free(tree);
}

struct node *insert(struct node *t,int n){
    if(t==NULL){
        t=(struct node *)malloc(sizeof(struct node));
        t->val=n;
        t->l=NULL;
        t->r=NULL;
        return t;
    }
    else{
        if(n>t->val){
            t->r=insert(t->r,n);
        }
        else if(n<t->val){
            t->l=insert(t->l,n);
        }
        else{
            printf("Element Already In This Tree!");
        }
        return t;
    }

};

void Preorder(struct node *t){
    if(t){
        printf("%d ",t->val);
        Preorder(t->l);
        Preorder(t->r);
    }
}

void Inorder(struct node *t){
    if(t)
    {
        Inorder(t->l);
        printf("%d ",t->val);
        Inorder(t->r);
    }
}

void Postorder(struct node *t){
    if(t)
    {
        Postorder(t->l);
        Postorder(t->r);
        printf("%d ",t->val);
    }
}

int countLeafNode(struct node *t){
    int count=0;
    if(t==NULL){
        return 0;
    }
    else if(t->l==NULL && t->r==NULL){
        count++;
    }
    else{
        return countLeafNode(t->l)+countLeafNode(t->r);
    }
    return count;
}

int countNonLeafNode(struct node *t){
    int count=0;
    if(t==NULL){
        return 0;
    }
    else if(t->l!=NULL && t->r!=NULL){
        count++;
    }
    else{
        return countLeafNode(t->l)+countLeafNode(t->r);
    }
    return count;
}

int MaxElement(struct node *t){
    if(t==NULL){
        return 0;
    }
    while(t->r!=NULL){
        t=t->r;
    }
    return t->val;
}

int MinElement(struct node *t){
    if(t==NULL){
        return 0;
    }
    while(t->l!=NULL){
        t=t->l;
    }
    return t->val;
}

int BinarySearch(struct node *t,int n){
    if(t->val==n){
        return t;
    }
    else if(n<t->val){
        BinarySearch(t->l,n);
    }
    else if(n>t->val){
        BinarySearch(t->r,n);
    }
    else{
        printf("Element not found");
    }
}
