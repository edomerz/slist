Slist
single linked list

struct slist_node
{
    struct * slist_node;
    void* val;
};

slist_node* slistCreate – create a new node and initialize it.

SlistFreeAll(slist_node * node)  - free all nodes 

slistInsert – insert node before
actually insert the new node after the node given, but change the values
between the new val and old val.
Problem solved: dont know the  and cant change the previous pointer

problem not solved: any pointer directed to the old values\ next field
will be unvalid, we swapped the values
the old pointer will point to the new val.

SlistInsertAfter – insert node after the given node

slistRemove – actually remove the 1 after but coping the value/next field to the one thats need to be romived

slistRemoveAfter

slistCount

slistfind – using a function pointer ( 

slistForeach - 
