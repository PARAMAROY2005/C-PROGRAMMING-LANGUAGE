// #include <stdio.h>

// void main()
// {
//     if (420)
//     {
//         printf("Hi");
//     }
//     else                                 //Hi   because any int = 1  true
//     {                              
//         printf("Hello");
//     }
// }


#include <stdio.h>

void main()
{
    if (1, 0, 1)
    {
        printf("Hi");     
    }
    else                          //Hi    reason:The comma operator evaluates all expressions from left to right and returns the value of the last expression. Here:

(1, 0, 1)                                           // Result = 1
    {
        printf("Hello");
    }
}