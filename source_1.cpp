#include <iostream>
#include <windows.h>


int main() {
    short valueShort;
    int valueInt;
    long valueLong;
    long long valueLongLong;
    float valueFloat;
    double valueDouble;
    long double valueLongDouble;
    bool valueBool;


    std::cout << "short: " << &valueShort << " " << sizeof(valueShort)<< std::endl;
    std::cout << "int: " << &valueInt << " " << sizeof(valueInt) << std::endl;
    std::cout << "long: " << &valueLong << " " << sizeof(valueLong) << std::endl;
    std::cout << "long long: " << &valueLongLong << " " << sizeof(valueLongLong) << std::endl;
    std::cout << "float: " << &valueFloat << " " << sizeof(valueFloat) << std::endl;
    std::cout << "double: " << &valueDouble << " " << sizeof(valueDouble) << std::endl;
    std::cout << "long double: " << &valueLongDouble << " " << sizeof(valueLongDouble) << std::endl;
    std::cout << "bool: " << &valueBool << " " << sizeof(valueBool) << std::endl;

    return 0;
}
