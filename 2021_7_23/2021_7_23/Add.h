//#pragma once     //防止头文件多次包含，也可写下面的方法（以前的方法）

#ifndef __add_h_
#define __add_h_

extern int Add(int x, int y);    //对Add函数的声明

#endif


//在使用.h文件和.lib文件卖给他人的时候需要导入静态库
//方法：#pragma comment(lib,"Add.lib");
