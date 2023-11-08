//
//  main.cpp
//  Forward Declaration
//
//  Created by Emanuel Alfaro on 11/8/23.
//

#include <iostream>

int add(int, int);

int main()
{
    std::cout << add(8, 9) << '\n';
    return 0;
}

int add(int x, int y)
{
    return x+y;
}
