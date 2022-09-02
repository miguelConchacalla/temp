#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout <<"Ingrese valor:";    cin>>a;
    cout <<"Ingrese valor:";    cin>>b;

    if (a < b){
        cout<<"El mayor es:: "<<b<<endl;
    } else if (a > b){
        cout<<"El mayor es:: "<<a<<endl;
    } else{
        cout<<"Son iguales";
    }

    return 0;
}
