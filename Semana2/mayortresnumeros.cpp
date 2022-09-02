#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout <<"Ingrese valor:";    cin>>a;
    cout <<"Ingrese valor:";    cin>>b;
    cout <<"Ingrese valor:";    cin>>c;

    if (a > b){
        if (a > c){
            cout<<"El mayor es: "<<a<<endl;
        } else if (a < c){
            cout<<"El mayor es: "<<c<<endl;
        } else{
            cout<<"Los mayores son: "<<a<<b<<endl;
        }
        
    } else if (a < b){
        if (a < c){
            cout<<"El mayor es:: "<<b<<endl;
        } else if (a > c){
            cout<<"El mayor es:: "<<a<<endl;
        }
        
    } else{
        cout<<"Son iguales";
    }

    return 0;
}
