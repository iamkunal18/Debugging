# CPP Debugging

## Objectives:

1. Debugging (With GDB)
2. Debugging Techniques


## Compile-time versus Run-time Bugs🐛

### Compile-Time	                                      
* Before our program runs	
* Example bugs
    * Syntax Related Bugs
    *  Missing Files
    * Errors linking object files
* Can be caught with static_assert (C++11)
* Compilers can sometimes ‘warn’ us about bugs
* Other static analysis tools can conservatively try to anticipate and report errors.

### Run-Time
* While our program runs
* Example bugs 
    * Memory leaks
    * Segmentation faults
    * Performance related bugs
* Can be caught and handled with exceptions
* Can be caught with assert


Warning all -> g++ -Wall -o main main.cpp
Related to datatypes conversion ->  g++ -Wconversion -o main main.pp
Warning as error ->  g++ -Werror -o main main.cpp
