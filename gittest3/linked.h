//
//  linked.h
//  gittest3
//
//  Created by 이수길 on 2020/12/14.
//

#ifndef linked_h
#define linked_h

#include <stdio.h>
#include <stdlib.h>

#endif /* linked_h */
struct linked_list {
    char *name;
    struct linked_list *next;
};
typedef struct linked_list NODE;
typedef NODE * LINK;
