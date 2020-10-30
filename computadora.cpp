#include "computadora.h"

Computadora::Computadora()
{

}

Computadora::Computadora(const string &nombre, const string &sistema, int disco, int ram)
{
    this->nombre = nombre;
    this->sistema = sistema;
    this->disco = disco;
    this->ram = ram;
}
void Computadora::setNombre(const string &v)
{
    nombre = v;
}

string Computadora::getNombre()
{
    return nombre; 
}

void Computadora::setSistema(const string &v)
{
    sistema = v;
}

string Computadora::getSistema()
{
    return sistema;
}

void Computadora::setDisco(int v)
{
    disco = v;
}

int Computadora::getDisco()
{
    return disco;
}

void Computadora::setRam(int v)
{
    ram = v;
}

int Computadora::getRam()
{
    return ram;
}
