#include <stdbool.h>

#ifndef LIST_H_ 
#define LIST_H_ 
#include <stdbool.h> 

#define TSIZE 45
struct film {
	char title[TSIZE];
	int rating;
};

/* 一般类型定义 */

typedef struct film Item;

typedef struct node {
	Item item; 
	struct node *next;
} Node; 


typedef Node * List;



/* 初始化一个链表  */
/*   前提条件， plist 指向一个链表 */
/*   后置条件， 链表初始化为空 */

void InitializeList(List * plist);








/* 操作： 确定链表是否有定义， plist 指向一个已初始化的链表 */
/* 后置条件：   如果链表为空， 返回true */
bool ListIsEmpty(const List *plist);


/* 操作： 确定链表是否已满, plist 指向一个已初始化的链表  */
/* 后置条件：  如果满， 返回 true */
bool ListIsFull(const List *plist);




/* 操作：   确定链表中项数， plist 指向一个已初始化的链表  */
/* 后置条件：  */
unsigned int ListItemCount(const List *plist);



/*  操作：    在链表末尾添加项  */
/*  前提条件：   item 是一个待添加至链表的项，   plist 指向一个已初始化的链表  */
/*  后置条件：   如果可以， 在末尾添加， 返回true,  添加失败返回 false */
bool AddItem(Item item, List *plist);



/*  操作   把函数作用于链表中每一项 */
/*  plist 指向一个已经初始化的链表 */
/*  pfun 指向一个函数， 该函数接受一个Item类型参数， 且无返回值 */
void Traverse(const List *plist, void (*pfun) (Item item));

/*  操作， 释放已分配内存 （如果有的话） */
/*  plist 指向一个已初始化的链表  */

void EmptyTheList(List *plist);


#endif 