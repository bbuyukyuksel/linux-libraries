#include "lib1.h"
#include "lib2.h"

#include <iostream>

void print_value_of_x(){
    using std::cout;
    cout << "value of x:" << ::x << "\n";
}
