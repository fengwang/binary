#include <binary.hpp>

#include <iostream>

int main()
{
    std::cout <<  0_b << std::endl;
    std::cout <<  1_b << std::endl;
    std::cout <<  10_b << std::endl;
    std::cout <<  11_b << std::endl;
    std::cout <<  110111100001010101001_b << std::endl;
    std::cout << -110111100001010101001_b << std::endl;

    //compile time error
    //std::cout <<  210111100001010101001_b << std::endl;

    std::cout <<    011111111111111111111111111111111111111111111111111111111111111_b << std::endl;
    //compile time error
    //std::cout <<  0111111111111111111111111111111111111111111111111111111111111111_b << std::endl;

    return 0;
}

