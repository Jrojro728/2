#include <iostream>

int a(int x, int y);
int b(int x, int y);

int main()
{
    int x;
    int y;
    std::cout << "输入正方形的边长：";
    std::cin >> x;
    std::cout << "输入两个正方形间隔距离：";
    std::cin >> y;
    std::cout << "这个平行四边形的面积是：" << a(x,y) * b(x,y);
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单
