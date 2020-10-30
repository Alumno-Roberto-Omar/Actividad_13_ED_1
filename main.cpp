#include<iostream>
#include<iomanip>
#include "ArregloDinamico.h"
#include "computadora.h"

int main()
{
    ArregloDinamico<Computadora> computadoras;

    Computadora c01("PC_1","Windows 7",200,4);
    Computadora c02("Mi_Equipo_2","Windows 8",350,6);
    Computadora c03("Omar_PC","Windows 10",500,8);
    Computadora c04("PC_New","Windows 7",250,4);
    Computadora c05("Mi_Equipo_new","Windows 7",450,6);

    computadoras<<c01<<c02<<c03<<c04<<c05;

    cout<<endl;
    cout<<"BUSQUEDA LINEAL"<<endl;
    cout<<"Equipos registrados:"<<endl;
    computadoras.mostrar();
    cout<<endl;
    
    Computadora cb1("","Windows 8",0,0);
    Computadora *ptr = computadoras.buscar(cb1);
    cout<<"Buscar() - Elemento existente con SO Windows 8:"<<endl;
    cout<<left;
    cout<<setw(15)<<"Nombre:";
    cout<<setw(15)<<"Sistema:";
    cout<<setw(8)<<"Disco:";
    cout<<setw(6)<<"RAM:";
    cout<<endl;
    if(ptr != nullptr){
        cout<<*ptr<<endl;
    }
    else
    {
        cout<<"No existe"<<endl;
    }

    Computadora cb2("","Windows XP",0,0);
    Computadora *ptr1 = computadoras.buscar(cb2);
    cout<<"Buscar() - Elemento inexistente con SO Windows XP:"<<endl;
    if(ptr1 != nullptr){
        cout<<left;
        cout<<setw(15)<<"Nombre:";
        cout<<setw(15)<<"Sistema:";
        cout<<setw(8)<<"Disco:";
        cout<<setw(6)<<"RAM:";
        cout<<endl;
        cout<<*ptr1<<endl;
    }
    else
    {
        cout<<"No existe"<<endl;
    }

    Computadora cb3("","Windows 7",0,0);
    ArregloDinamico<Computadora*> ptrs = computadoras.buscar_todos(cb3);
    cout<<endl;
    cout<<"Buscar_Todos() - Elementos con SO Windows 7:"<<endl;
    cout<<left;
    cout<<setw(15)<<"Nombre:";
    cout<<setw(15)<<"Sistema:";
    cout<<setw(8)<<"Disco:";
    cout<<setw(6)<<"RAM:";
    cout<<endl;
    if(ptrs.size()>0){
        for(size_t i=0;i<ptrs.size();i++){
            Computadora *p = ptrs[i];
            cout<<*p<<endl;
        }
    }
    else{
        cout<<"No existen coincidencias"<<endl;
    }

    return 0;
}