#include <stdio.h>

typedef struct node *Node;

static Node head;

/*����ӵ�ṹ 
* val : ����ֵ 
* next : ��һ�����ָ�� 
*/
struct node {
	int val;
	Node next;	
}; 

int a = 1;
int b = 2;

/*�����㺯��*/
int insert(int val)
{
	Node p, q;
	p = head;
	
	if(p != NULL){
		/*����ǿ�*/
		while(p -> next != NULL) {
			p = p -> next;
		}
	}
	
	q = (Node)malloc(sizeof(struct node)); /*����һ���µĽ��*/
	
	if(q == NULL) {
		return -1;
	}
	
	q -> next = NULL;
	
	q -> val = val;
	
	if(p == NULL) {
		/*������*/
		head = q;
		return 1;	
	}
	
	p -> next = q; /*�����������*/
	
	return 1;
}

/*�������� ��ӡÿ������ֵ*/
void print()
{
	Node p = head;
	
	while(p != NULL) {
		/*���ÿ������ֵ*/
		printf("%d\n", p -> val);
		p = p->next;
	}
}

/*���������ͷ�ÿһ�����*/
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


