#include "pustaka.h"

int main()
{
    printf("TRUE  = 1\n");
    printf("FALSE = 0\n\n");


    printf("At Least 1 Larry Mage      --> %d\n", at_least('r', 3, "Larry Mage"));
    printf("At Least 2 Mark Zuckerberg --> %d\n", at_least('a', 2, "Mark Zuckerberg"));
    printf("At Least 3 Matt Mullenweg  --> %d\n", at_least('m', 2, "Matt Mullenweg"));
    printf("At Least 4 Jimmy Wales     --> %d\n", at_least('m', 2, "Jimmy Wales"));


    return 0;
}
