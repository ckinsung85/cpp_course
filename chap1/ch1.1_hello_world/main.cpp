#include <iostream>

void fun(const char* pInfo, int pVal){
    std::cout << pInfo << " Value = " << pVal << std::endl;
}

int main(){

    fun("Hello World", 1);

    // By default, even if without writing return, return will be 0
    // Can skip return 0 code only unique to main function
    return 0;
}