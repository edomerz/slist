/*
	slist
*/
#ifndef __SLIST_H__
#define __SLIST_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
	

typedef struct slist_node
{
	void* data;
	struct slist_node* next;
}slist_node_t;

typedef int (*is_match_func)(const void*, const void*);
typedef void (*action_func)(slist_node_t *, void* param);


/* creates a new node with data and ponter to the next node */
slist_node_t* SListCreateNode(void* data, slist_node_t* next);

/* rmeoves all node form the ponter to the nide thtat was sent */
void SListFreeNode(slist_node* t);

/* insert a new node before given node */
slist_node_t* SListInsert(slist_node_t* where, slist_node_t* new_node);

/* insert a new node after given node */
slist_node_t* SListInsertAfter(slist_node_t* where, slist_node_t* new_node);

/*remove a node before the node ponter to the node sent ! cant be done on last node */
slist_node_t* SListRemove(slist_node_t* node);

/*remove a node after the node ponter to the node sent ! cant be done on last node */
slist_node_t* SListRemoveAfter(slist_node_t* node);

/*count how many nodes exist after the pointer to the given node*/
size_t SListCount(const slist_node_t* node);

/*find a node with recievd data, return NULL */
slist_node_t* SListFind(slist_node_t* head, is_match_fun fp, const void* data);

/* */
void SListForEach(slist_node_t* head, action_func fp, void* param)

#endif /* ifndef __SLIST_H__*/
