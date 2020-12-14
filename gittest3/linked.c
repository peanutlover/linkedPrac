//
//  NODE *ed.c
//  gittest3
//
//  Created by 이수길 on 2020/12/14.
//

#include "linked.h"
NODE * createNode (char *name);
NODE * append(NODE * head, NODE * cur);
int printList(NODE * head);

int main(void){
    char name[30];
    NODE * head=NULL;
    NODE * cur;
    printf("input your name>>");
    while(gets(name)){
        cur=createNode(name);
        if(!cur) exit(1);
        head=append(head,cur);
        printList(head);
    }
    return 0;
}

