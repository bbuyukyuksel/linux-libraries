#include "lib1.h"
#include "lib2.h"

#include <iostream>

int main(){
    print_value_of_x();
    std::cout << "from main:" << ::x << "\n";
}