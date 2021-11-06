// 1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
#include <iostream>

int a(int x, int y);

int main()
{
    int x;
    int y;
    std::cout << "输入平行四边形的底：";
    std::cin >> x;
    std::cout << "输入平行四边形的高：";
    std::cin >> y;
    std::cout << "这个平行四边形的面积是：" << a(x,y);

    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单