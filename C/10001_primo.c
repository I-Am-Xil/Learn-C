#include<stdio.h>

int identificador(int n);

int main()
{
    int n_primos = 0;
    int i = 1;

    while (n_primos <= 10001)
    {
        if (identificador(i) != 0)
        {
            printf("%i\n", identificador(i));
            n_primos++;
        }
        i++;
    }
    
    return 0;
}

int identificador(int n)
{
    int i = 1, primo, modulo, contador = 0;

    while (i <= n && n > 0)
    {
        modulo = n%i;
        if (modulo == 0)
        {
            contador++;
        }
        i++;
    }

    if (contador < 3 && i != 1)
    {
        primo = n;
        return primo;
    }
    
    return 0;
}