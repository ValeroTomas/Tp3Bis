#include <stdio.h>
#include <stdlib.h>

int azar();
int cargarNum(int);
void devolver(int, int, int);

int main()
{
    int n1, n2, n3;
    /*num1 = azar();
    printf("\nNumero random: %d", num1);*/
    n1 = cargarNum(n1);
    n2 = cargarNum(n2);
    n3 = cargarNum(n3);
    devolver(n1, n2, n3);
    return 0;
}


int azar()
{
    srand(time(NULL));
    int num = rand()%100+1;
    return num;
}

void devolver(int num1, int num2, int num3)
{

    if(num1 > num2)
    {
        if (num1 > num3)
        {
            printf("\nEl numero mayor es: %d\n", num1);
            if(num2 > num3){
                printf("\nEl numero menor es: %d\n", num3);
            }
            else{
                printf("\nEl numero menor es: %d\n", num2);
            }
        }
        else
        {
            printf("\nEl numero menor es: %d\n", num2);
            printf("\nEl numero mayor es: %d\n", num3);
        }
    }
    else if(num2 > num3)
    {
        if (num2 > num1)
        {
            printf("\nEl numero mayor es: %d\n", num2);
            if(num3 > num1){
                printf("\nEl numero menor es: %d\n", num1);
            }
            else{
                printf("\nEl numero menor es: %d\n", num3);
            }
        }
        else
        {
            printf("\nEl numero menor es: %d\n", num3);
            printf("\nEl numero mayor es: %d\n", num1);
        }

    }
    else if(num3 > num2)
    {
        if (num3 > num1)
        {
            printf("\nEl numero mayor es: %d\n", num3);
            if(num2 > num1){
                printf("\nEl numero menor es: %d\n", num1);
            }
            else{
                printf("\nEl numero menor es: %d\n", num2);
            }
        }
        else
        {
            printf("\nEl numero menor es: %d\n", num2);
            printf("\nEl numero mayor es: %d\n", num1);

        }
    }
}

int cargarNum(int num1)
{
    printf("\nIngrese un numero entero:  ");
    scanf("%d", &num1);
    return num1;
}
