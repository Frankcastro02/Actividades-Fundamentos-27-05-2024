#include <iostream>
using namespace std;
int main()
{
    int x=0;
    cout << "Cuantos estudiantes hay en el salon?" << '\n';
    cin >> x;
    float arr[x];
    int i=0; 
    int j=0; 
    int f=0; 
    float suma=0; 
    float promedio=0; 
    float mayor=0; 
    float igual=0;
    float menor=0;
    while (i<x)
    {
        cout << "Inserte la altura del estudiante" << '\n';
        cin >> arr[i];
        i++;
    }
    while (j<x)
    {
        suma+=arr[j];
        j++;
    }
    promedio=suma/j;
    while (f<x)
    {
        if(arr[f]>promedio)
        {
            mayor++;
        }
        else if(arr[f]<promedio)
        {
            menor++;    
        }
        else if(arr[f]==promedio)
        {
            igual++;    
        }
        f++;
    }
    cout << "Media: " << promedio << '\n' << "Mayor que el promedio: " << mayor << '\n' << "Igual que el promedio: " << igual << '\n' << "Menor que el promedio: " << menor << '\n';
    return 0;
}