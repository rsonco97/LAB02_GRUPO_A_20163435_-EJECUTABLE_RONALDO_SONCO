/*//Ejercicio 1
#include <iostream>

using namespace std;

int main()
{
    int suma=0;
    for(int i=2;i<=100;i=i+1){
        suma=suma+i;
    }cout<<suma;
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
//Ejercicio2
#include <iostream>

using namespace std;

int main(){
    int c=0;
    for(int i=2;i<=50;i++){
        for(int j=2;j<=i;j++){
            if(i%j==0){
                c++;
            }
        }if(c==1){
            cout<<i;
        }c=0;
    }
    return 0;
}
// Ejercicio3
#include <iostream>

using namespace std;

int main(){
    for(int i=1;i<=100;i++){
        if(i%5==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
// Ejercicio4
#include <iostream>

using namespace std;

int main(){
    int x,y,c;
    cout<<"Ingrese dos numeros"<<endl;
    cout<<"X= ";cin>>x;
    cout<<"Y= ";cin>>y;
    if(x<y){
        for(int i=x; i<=y; i++){
            for(int j=2;j<=i;j++){
                if(i%j==0){
                    c++;
                }
            }if(c==1){
                cout<<i<<" ";
            }c=0;
        }
    }

    return 0;
}
//Ejercicio 6
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int n,x=0,y=1,z=1;
    cout<<"Digite el numero de elementos: ";cin>>n;
    cout<<"1 ";
    for(int i=1;i<n;i++){
        z=x+y;
        cout<<z<<" ";
        x=y;
        y=z;
    }
    return 0;
}

//Ejercicio 7
#include <iostream>

using namespace std;

int main(){
    int n;
    float n1,n2,n3,p, nt;
    nt=n1+n2+n3;
    p=nt/3;
    cout <<"Promedio de cuantos alumnos? "<<endl;
    cout<< "Cantidad de alumnos: ";cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Alumno "<<i<<": ";
        cout<<endl;
        cout<<"NOta 1: ";cin>>n1;
        cout<<"NOta 2: ";cin>>n2;
        cout<<"NOta 3: ";cin>>n3;
        cout<<"Promedio: "<<p<<endl;
    }
    return 0;
}
//Ejercicio 8
#include <iostream>

using namespace std;

int main() {
    int n,p;
    cout <<"Tabla de que numero quiere ver: "<<endl;
    cout<< "Numero: ";cin>>n;
    for(int i=0;i<=12;i++){
        p=n*i;
        cout<<n<<"x"<<i<<" = "<<p<<endl;
    }
    return 0;
}

*/