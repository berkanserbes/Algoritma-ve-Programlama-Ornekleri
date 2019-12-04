#include <stdio.h>
#include <stdlib.h>


char charAt(char string[], int index);

int main()
{
    char btu[24] = "BursaTeknikUniversitesi";

    charAt(btu, 6);

    return 0;
}

char charAt(char string[], int index)
{
    printf("indeks %d daki eleman: %c", index, string[index]);
    return string[index];
}
