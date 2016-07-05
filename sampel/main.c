#include <stdio.h>
//#include <stdlib.h>
#include "list.h"
#include "common.h"

struct test {
	//声明一个结构提，不考虑对齐机制的话，每个结构变量占用9个字节
	int array[2];
	char ch; 
};

typedef struct test Test;

int main()
{
	/* list示例 
	int i;
	for(i = 0; i < 50; i++) {
		insert(i);		
	}
	print();	//输出链表的所有结点
	destroy();	//销毁链表 
	return 0;*/
	
	/* 动态传参 
	int n;
	n = print_args(-1, "hello", "world", NULL); //第一次调用，使用4个参数
	printf("first, without NULL : %d \n", n);
	
	n = print_args(-1, "china", "beijing", "Olympic", NULL);	//第二次调用，使用5个参数
 	printf("second, without NULL : %d\n", n);
 	return 0;
 	*/
 	
 	/*pointer pointer
 	int a;
	int *p;
	int **q;
	
	a = 100;
	p = &a;
	q = &p;
	printf("var a : %d\n", a);
	printf("pointer p: 0x%x\n", *p); 
	printf("pointer pointer q : 0x%x\n", *q);
	
	int a;
	int *p = &a;
	a = 10;
	*p = 100;
	printf("pointer a: %d, p : %d \n", a, *p); 
	return 0;*/
	
	/* pointer
	Test var = {0x12345678,0x12345678,0x30}; //初始化结构体变量
	char *p;
		
	//将指针p转换为指向字符型变量，向后看1个字节
	p = (char *)&var; 
	printf("1 byte : 0x%x\n", *p);
	
	//将指针p转换为指向短整型变量，向后看2个字节
	p = (short *)p;
	printf("2 bytes : 0x%x\n"); 
	
	//将指针p转换为指向整型变量，向后看4个字节
	p = (int *)p;
	printf("4 byte : 0x%d\n", *p); 
	
	//将指针p转换为指向test结构类型的变量，向后看9个字节
	p = (Test *)p;
	printf("whole bytes :  %d",  sizeof(p));
	*/
	/*
	int x = 10;
	int * xp = &x;
	double y = (double)x;
	double * yp = &y;
	*xp = 11;
	*yp = *xp;
	
	printf("x : %d, y : %f, xp : %d, yp : %f", x, y, *xp, *yp);
	return 0;
	*/
	
	/*函数指针 */
	int a, b, res;
	
	//使用四个全局变量的函数指针来引用这四个函数
	p1 = add;
	p2 = sub;
	p3 = mul;
	p4 = div; 
	
	a = 2;
	b = 1;
	
	res = (*p1)(a, b);
	printf("add : %d\n", res);
	
	res = (*p2)(a, b);
	printf("sub : %d\n", res);
	
	res = (*p3)(a, b);
	printf("mul : %d\n", res);
	
	res = (*p4)(a, b);
	printf("div : %d\n", res);
	
	
	
}
