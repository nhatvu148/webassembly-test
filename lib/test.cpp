#include <iostream>

extern "C"
int increment(int num)
{
    num++;
    std ::cout << num << std ::endl;
    return 0;
}