#include <stdio.h>
#include <stdlib.h>

float hitung( int num1,int num2, char oprtr);
int main()
{
    printf ("Hasil 2+3   = %.0f\n", hitung(2, 3,'+'));
    printf ("Hasil 9-2   = %.0f\n", hitung(9, 2,'-'));
    printf ("Hasil 4*3   = %.0f\n", hitung(4, 3,'*'));
    printf ("Hasil 9/3   = %.0f\n", hitung(9, 3,'/'));

    return 0;
}
float hitung( int num1,int num2, char oprtr){
    if (oprtr == '+')
        {
            return num1 + num2;
        }
    else if (oprtr == '-')
        {
            return num1 - num2;
        }
    else if (oprtr == '*')
        {
            return num1 * num2;
        }
    else
        {
            return num1 / num2;
        }
}
