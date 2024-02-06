#include <stdio.h>
//auto 是自动的 - 每个局部变量都是auto修饰的
//int main()
//{
//	{
//		/*auto - 此处的auto基本被省略*/ int a = 10; //自动创建，自动销毁的 - 自动变量
//	}
//	return 0;
//}
//auto 在新的C语言语法中也有其他用法，此处不做赘述

//break 循环语句switch语句会用到

//case switch - case语句中使用

//char 字符类型

//const 常变量

//continue 继续

//default 默认

//do do - well循环

//double 双精度

//else else语句

//enum 枚举

//extern 是用来声明外部符号的

//float 单精度浮点型

//for for循环

//goto goto语句

//if if语句

//int

//long 长整形

//register 寄存器关键字 - 计算器
int main()
{
	//大量/频繁被使用的数据，想放在寄存器中，提升效率
	register int num = 100;//  建议  num的值存放在寄存器中
	return 0;
}
//计算器中数据存储在 - 寄存器 - 高速缓存 - 内存 - 硬盘 - 网盘 
//                    最小       MB       G    G/T     T
//造价越高，速度越快，内存越小
// 
//   早期
//   CPU      -     内存
//中央处理器
//
//   现在
//   CPU      - 寄存器 - 高速缓存 - 内存
//中央处理器

//return 返回

//short 短整型

//signed 有符号的 10 -20
//unsigned 无符号的 - 无符号位概念

//sizeof 求大小

//static 静态的

//struct 结构与关键字

//switch switch语句

//typedef 类型定义

//union 联合体/共用体

//void 无 - 空

//volatile C语言暂时不讲

//while while循环

//include与define不是关键字，是预处理指令
