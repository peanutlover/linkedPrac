//
//  linked.c
//  gittest3
//
//  Created by 이수길 on 2020/12/14.
//

#include "linked.h"
LINK createNode (char *name);
LINK append(LINK head, LINK cur);
int printList(LINK head);

int main(void){
    char name[30];
    LINK head=NULL;
    LINK cur;
    printf("input your name>>");
    while(gets(name)){
        cur=createNode(name);
    }
    return 0;
}
LINK createNode (char *name){
    LINK cur;
    cur=(LINK)malla
}
