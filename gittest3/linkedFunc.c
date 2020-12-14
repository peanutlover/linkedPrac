//
//  linkedFunc.c
//  gittest3
//
//  Created by 이수길 on 2020/12/14.
//

#include "linked.h"
NODE * createNode (char *name){
    NODE * cur;
    cur=malloc(sizeof(NODE));
            if(cur==NULL){
                printf("error");
                return NULL;
            }
    cur->name=(char *)malloc(sizeof(char)*(strlen(name)+1));
    strcpy(cur->name, name);
    cur->next=NULL;
    return cur;
}
NODE * append(NODE * head, NODE * cur){
    NODE * nextNode=head;
    if(!head){
        head=cur;
        return head;
    }
    while(nextNode->next){
        nextNode=nextNode->next;
    }
    nextNode->next=cur;
    return head;
}
int printList(NODE * head){
    int cnt=0;
    NODE * nextNode=head;
    while(nextNode){
        printf("%dth node is %s\n",++cnt,nextNode->name);
        nextNode=nextNode->next;
    }
    return cnt;
}
