#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;

};
getnode(){
    struct node *p=(struct node *)malloc(sizeof(struct node ));
    return *p;
}