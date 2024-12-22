// Run code using following commands
// 1. g++ -Wall -o 1.warning 1.warning.cpp
// 2. g++ -Wall -Wconversion -o 1.warning 1.warning.cpp
// 3. g++ -Wall -Wconversion -Werror -o 1.warning 1.warning.cpp

#include <iostream>
using namespace std;

int squaref(float n)
{
    return n * n;
}

int main()
{
    for (float i = 0; i < 1; i += 0.1)
    {
        int x = squaref(i);
        cout << i << " squared = " << squaref(i) << endl;
    }
}

//FIXED CODE 
// float squaref(float n)
// {
//     return n * n;
// }

// int main()
// {
//     for (float i = 0; i < 1; i += 0.1f)
//     {
//        // int x{squaref(i)};
//         cout << i << " squared = " << squaref(i) << endl;
//     }
// }
