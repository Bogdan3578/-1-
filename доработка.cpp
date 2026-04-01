#include <iostream>

int main()
{
  
  
    int chislo[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    for (int i = 0; i < 10; ++i)
    {
        std::cout << chislo[i];
        if (i < 9)
        {
            std::cout << ", ";
        }
    }
}
