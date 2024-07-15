/*
Autor: Nayeli Cruz
Fecha: 11/07/2024
Tema:  Vectores
Orden:- Diseñe la función que busca un número entero y devuelve la cantidad de veces que existe ese 
número en el vector.. (realizado en clases).
*/
#include<iostream>
using namespace std;
 
int BuscaNumero(int vector[], int total, int num)
{
    int cont=0;
    for(int k=0; k<total; k++)
    {
        if(vector[k]==num) //si existe el elemento
        cont++; //se incrementa el contador
    }
    return cont;
}
 
 
/*
-Diseñe la funcion que convierte un entero en su equivalente en binario.
El resultado del numero binario se debe guardar en un vector.*/
 
void EnteroaBinario(int num)
{
    int const MAX = 16;
    int vector[MAX];
    int numOriginal = num;
    //encerar el vector
    for(int k=0; k<MAX; k++)
    vector[k]=0;
 
    //convertir en binario
    int cont=0;
    while( num > 0)
    {
        int resto = num % 2;
        vector[cont] = resto;
        cont++;
 
        num = num / 2;
    }
 
    //Imprimir el resultado
    cout<<endl<<"El numero "<<num << " en binario es ";
    for(int k=(cont-1); k>=0; k--)
    cout<<vector[k];
 
 
}
 
int main()
{
    int vector[]={10, 20, 6, 45, 10, 45, 6, 10, 1, 77, 3};
    int total = sizeof(vector)/sizeof(int); //        44/ 4 = 11
 
    int num = 6;
    int cont = BuscaNumero(vector, total, num);
    cout<<endl<<"El elemento "<<num<< " existe "<<cont << " veces en el vector ";
    EnteroaBinario(78);
 
   
    return 0;
}