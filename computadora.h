#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Computadora{
    string nombre;
    string sistema;
    int disco;
    int ram;

public:
    Computadora();
    Computadora(const string &nombre, const string &sistema, int disco, int ram);
    void setNombre(const string &v);
    string getNombre();
    void setSistema(const string &v);
    string getSistema();
    void setDisco(int v);
    int getDisco();
    void setRam(int v);
    int getRam();
    
    friend ostream& operator<<(ostream &out, const Computadora &p)
    {
        out << left;
        out << setw(15) << p.nombre;
        out << setw(15) << p.sistema;
        out << setw(8) << p.disco;
        out << setw(6) << p.ram;
        out << endl;
        return out;
    }

    friend istream& operator>>(istream &in, Computadora &p)
    {
        cout<<"Nombre: ";
        getline(cin, p.nombre);

        cout<<"Sistema: ";
        getline(cin, p.sistema);

        cout<<"Disco: ";
        cin >> p.disco;

        cout<<"RAM: ";
        cin >> p.ram;

        return in;
    }
    bool operator==(const Computadora& p)
    {
        return sistema == p.sistema;
    }
    bool operator==(const Computadora& p) const
    {
        return sistema == p.sistema;
    }
};

#endif