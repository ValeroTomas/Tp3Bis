#include <stdio.h>
#include <stdlib.h>

int azar();
int cargarNum();
int sumaNum(int);
void devolver(int, int, int);
void multiNum(int);

int main()
{
    int n1, n2, n3;

    //PUNTO1
    /*num1 = azar();
    printf("\nNumero random: %d", num1);*/

    //PUNTO2
    /*n1 = cargarNum();
    n2 = cargarNum();
    n3 = cargarNum();
    devolver(n1, n2, n3);*/

    //PUNTO3
    /*n1 = cargarNum();
    sumaNum(n1);
    return 0;*/

    //PUNTO4
    /*n1 = 5;
    multiNum(n1);*/

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

int cargarNum()
{
    int num1;
    printf("\nIngrese un numero entero:  ");
    scanf("%d", &num1);
    return num1;
}

int sumaNum(int num1){
    int suma = 0;
    int i;
    for(i = 0; i < num1; i++){
        printf("\n|| %d + %d  =  %d ||\n", suma, i, suma+i);
        suma = suma + i;
    }
    printf("\n|| RESULTADO = %d ||\n", suma);
    return suma;
}

void multiNum(int num1){
    int mult = 0;
    int i, res;

    for(i = 1; i < 11; i++){
        res = num1 * i;
        printf("\n|| %d * %d  =  %d ||\n", num1, i, res);
    }
}
