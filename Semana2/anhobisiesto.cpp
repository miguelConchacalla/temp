#include <iostream>

using namespace std;

int main()
{
    int a;
    
    cout<<"Ingrese anho: ";   cin>>a;

    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0){
        cout<<"Es una anho bisiesto";
    } else{
        cout<<"No es bisiesto";
    }

    return 0;
}
