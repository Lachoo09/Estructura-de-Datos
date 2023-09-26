#include <cstdlib>
#include <iostream>
#define mazxf 3
#define maxc 5
using namespace std;
int main(int argc, char*argv(]))
{
    float a[maxf] [maxc];
    int f, c;
    //leer el array (arreglo)
    for(f = 0; f < maxf; f++)
    for(c = 0; c < maxc; c++)
    cin>>a[f][c];

    //Escribir el arreglo
    for(f = 0; f < maxf; f++)
    {
        for(c = 0; c < maxc; c++)
        cout<<a[f][c];
        cout<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCES;
}