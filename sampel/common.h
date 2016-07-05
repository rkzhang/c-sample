#include <stdio.h>

typedef int (*Opt)(int, int);
//?如果定义成 typedef int *(*Opt)(int, int),程序照样能运行，但编译会有警告，不知道为什么。 

//声明四个全局变量
extern Opt p1; //引用加法函数
extern Opt p2; //引用减法函数
extern Opt p3; //引用乘法函数
extern Opt p4; //引用除法函数 

//四则运算的函数声明
int add(int a, int b);		//加法函数
int sub(int a, int b);		//减法函数
int mul(int a, int b);		//乘法函数 
int div(int a, int b); 		//除法函数 

typedef int (*cmp)(void *, void *);

typedef struct book* Book;

/*
* id : 图书的编号 
* name : 图书的名字 
*/
struct book {
	int id;
	char name[10];		
};

//求最大对象的函数 
extern void *max(void *array[], int len, cmp func);

//比较两个整数的函数
extern int cmp_int(void *p, void *q);

//比较两个图书结构的函数 
extern int cmp_struct(void *p, void *q); 

//插入一个结构 
extern int insert_struct(Book *pos, int id, char* name);

//插入一个整数
extern int insert_int(int **pos, int val); 
