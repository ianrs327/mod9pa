// crash_the_stack.cpp
// Ian Scarberry
// 11/23/26
// make recursive calls until we catch an overflow


#include <iostream>

int count = 0;

void recursiveFunction() {
    count++;
    std::cout << "Recursive call number: " << count << std::endl;
    //Recursive call with no base case, leading to stack overflow
    recursiveFunction();
}

int main() {
    recursiveFunction();
    return 0;
}
