#include <iostream>
using namespace std;
int main()
{
    int size = 0, x=0;
    cout << "Ingrese tamano de arreglo " << endl;
    cin >> size;
    int arr[size];
    int i = 0;
    while (i < size)
    {
        cout << "Ingrese un numero: ";
        cin >> x;

        if (x % 2 == 1)
        {
            arr[i] = x;
        }
        else
        { 
            arr[i] = 0;
        }
    i++;
    }
    for (int j = 0; j < size; j++)
    {
        while (j<size)
        {
            cout << arr[j] << '\n';
            j++;
        }    
    }
    return 0;
}