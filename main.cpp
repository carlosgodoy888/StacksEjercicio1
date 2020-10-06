/**
CARLOS GODOY VALVERDE
21927584 INGENIERIA INFORMATICA

 UTILIZANDO LA ESTRUCTURA DE LA PILA(LA QUE ELEGÍ), AÑADIR UN CAMPO QUE ALAMCENE NOMBRE Y APELLIDO,
 UN CAMPO QUE ALMACENE EL NUMERO DE EXPEDIENTE, UN CAMPO QUE ALMACENE LA FECHA DE NACIMIENTO Y
 CREAR UNA NUEVA RAMA Y SUBIR LA VERSION.

*/
#include <iostream>
#include <string>
using namespace std;
struct vox{
    int exp;
    string name;
    string surnames;
    string FechaNacimiento;
    /**struct FechaNacimiento;
    {char dia[x];
        char mes[y];
        char annio[z];
    };
     ó Pedirte dia, mes y año
     */
    vox *sgt;
};
vox *peek = NULL;
void push(string name,string surnames,int exp,string FechaNacimiento){
   vox *nvox =  new vox;
   nvox->name=name,nvox->surnames=surnames,nvox->exp=exp,nvox->FechaNacimiento=FechaNacimiento,nvox->sgt=peek;
   peek=nvox;
}
void pop(){
    if(peek==NULL)
        cout<<"Nada que imprimir, Stack vacia \n";
    else
    peek=peek->sgt;

}
void prt(){
     vox *aux = peek;
     if(aux==NULL)
         cout<<"Nada que imprimir, Stack vacia\n";
     else
         while(aux!=NULL){
             cout<<"LA PERSONA ES "<<aux->name,<<"CUYO APELLIDO ES; "aux->surnames,<<",CON EL NUMERO DE EXPEDIENTE ES EL SIGUIENTE"aux->exp,<<";LA FECHA DE NACIMIENTO ES "aux->FechaNacimiento<<" -> ";
             aux=aux->sgt;
         }
}
int main(){
    vox *nvox = new vox;
    int op, exp;
    string name, surnames, FechaNacimiento;

    do{
        cout<<"\n(1) Push    (2) Pop    (3) Print   (4) Salir \n ";
        cout<<"\n Elija opcion  ?: ",cin>>op;
        switch (op){
            case 1:
                cout<<"Introduzca el nombre : ", cin>>nvox->name;
                cout<<"Introduzca los apellidos : ",cin>>nvox->surnames;
                cout<<"Introduzca su numero de expediente : ",cin>>nvox->exp;
                cout<<"Introduzca su fecha de nacimiento : ",cin>>nvox->FechaNacimiento;
                push(name,surnames,exp,FechaNacimiento);
                break;
            case 2:
                cout<<"Eliminando ultimo registro ..... : ";
                pop();
                break;
            case 3:
                cout<<"Imprimiendo datos requeridos..... : ";
                prt();
                break;
            case 4:
                cout<<"------Gracias por usar el programa. Hasta la próxima--------";
        }
    }while(op!=4);
}

