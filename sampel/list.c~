#include <stdio.h>

typedef struct node *Node;

static Node head;

/*链表接点结构 
* val : 结点的值 
* next : 下一个结点指针 
*/
struct node {
	int val;
	Node next;	
}; 

int a = 1;
int b = 2;

/*插入结点函数*/
int insert(int val)
{
	Node p, q;
	p = head;
	
	if(p != NULL){
		/*链表非空*/
		while(p -> next != NULL) {
			p = p -> next;
		}
	}
	
	q = (Node)malloc(sizeof(struct node)); /*创建一个新的结点*/
	
	if(q == NULL) {
		return -1;
	}
	
	q -> next = NULL;
	
	q -> val = val;
	
	if(p == NULL) {
		/*空链表*/
		head = q;
		return 1;	
	}
	
	p -> next = q; /*结点链入链表*/
	
	return 1;
}

/*遍历链表， 打印每个结点的值*/
void print()
{
	Node p = head;
	
	while(p != NULL) {
		/*输出每个结点的值*/
		printf("%d\n", p -> val);
		p = p->next;
	}
}

/*遍历链表，释放每一个结点*/
void destroy()
{
	 Node p = head;
	 
	 while(p != NULL) {
	 	Node q;
	 	q = p;
	 	p = p->next;
	 	free(q);
	 }
	
	head = NULL;	
}


