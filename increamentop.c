#include <stdio.h>
#include <stdio.h>

void main()
{
    int a = 10, b = 8, c = 7, d = 6, e,
        f, g, h;

    e = (a > 2) && (c != d);
    f = (a != b) || (c > d);

    g = e++;
    h = ++g;

    printf("%d %d %d %d %d %d %d %d",
           a++, ++b, c++, ++d, e++, ++f, g++, ++h);
}