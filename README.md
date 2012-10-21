Function
--------
Convert a 0-1 series into an interger, compile time with c++11 features enabled.

Simple examples
---------------
    std::cout <<  0_b << std::endl;
    std::cout <<  1_b << std::endl;
    std::cout <<  10_b << std::endl;
    std::cout <<  11_b << std::endl;
    std::cout <<  110111100001010101001_b << std::endl;
    std::cout << -110111100001010101001_b << std::endl;
    std::cout <<  011111111111111111111111111111111111111111111111111111111111111_b << std::endl;

Compiler time error detection
-------------------
    //compile time error -- only '0' and '1' supported
    //std::cout <<  210111100001010101001_b << std::endl;

    //compile time error -- too long a series
    //std::cout <<  0111111111111111111111111111111111111111111111111111111111111111_b << std::endl;

Enjoy it
--------
