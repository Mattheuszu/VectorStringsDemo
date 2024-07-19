/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> countries;
    
    countries.push_back("Україна");
    countries.push_back("Канада");
    countries.push_back("Франція");
    
    std::cout << "Другий елемент вектора: " << countries.at(1) << std::endl;
    
    
    
    

    return 0;
}