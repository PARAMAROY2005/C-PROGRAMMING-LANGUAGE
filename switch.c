// // 

// #include <stdio.h>
// void main()
// {
// int a;
// printf("press 1 or 2 or 3");
// scanf("%d",&a);
// switch(a,a+1)
// {
// case 1:
// printf("A");
// break;
// case 2:
// printf("B");
// break;
// case 3:
// printf("C");
// break;
// default:
// printf("wrong input");
// }
// }



#include <stdio.h>

int main()
{
    float c, f, k, r;
    int ch;

    printf("Enter Temperature in Centigrade: ");
    scanf("%f", &c);

    printf("\nPress 100 to convert into Fahrenheit");
    printf("\nPress 200 to convert into Kelvin");
    printf("\nPress 300 to convert into Romer");
    printf("\nEnter Your Choice: ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 100:
            f = (c * 9 / 5) + 32;
            printf("Fahrenheit = %.2f", f);
            break;

        case 200:
            k = c + 273.15;
            printf("Kelvin = %.2f", k);
            break;

        case 300:
            r = (c * 21 / 40) + 7.5;
            printf("Romer = %.2f", r);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}