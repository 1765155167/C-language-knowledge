#include <stdio.h>
#include <stdlib.h>
#include <iostream> 
using namespace std;
/*
 *@值传递：形参改变不影响实参，可以当成赋值 
 *形参不影响实参 
 *main:a的地址为:00000000006FFE1C
 *fun1:a的地址为:00000000006FFDF0
 *a = 10
 *a的值不发生改变，形参与实参地址不一致 
 */ 
void fun1(int a)//形参 
{
	a = 11;
	printf("fun1:a的地址为:%p\n",&a); 
}
/*
 *@值传递：与值传递一样只是赋值的是变量的地址 
 *（形参不影响实参）但我们操作的是地址的值不是地址本身，所以实参会发生变化 
 *main:a的地址为:00000000006FFE1C
 *fun2:a的值为:00000000006FFE1C
 *a = 12
 *a的值发生改变，变量的地址一样，但请注意这里我们传递的是变量a的地址所以实参是a的地址不是a 
 *
 */ 
void fun2(int *a) //形参 
{
	*a = 12;
//	a++;//我们操作a 函数内部地址发生变化，但来的地址并没有随之改变 
	printf("fun2:a的值为:%p\n",a); 
}
/*
 *@引用传递：引用传递只在C++中才有，操作形参a就像操作实参，
 *和我们日常想的一样， 函数内部形参发生变化实参也相应发生变化 
 *main:a的地址为:00000000006FFE1C
 *fun3:a的地址为:00000000006FFE1C
 *a = 13
 *比指针传递更易于操作和理解的改变实参的方法
 *但注意C语言中没有这种用法， 
 */
void fun3(int &a)//形参 
{
	a = 13;
	printf("fun3:a的地址为:%p\n",&a); 
}
int main()
{
	int a = 10;
	printf("main:a的地址为:%p\n",&a); 
	fun3(a);//实参
	printf("a = %d\n",a);
	return 0;
 } 
