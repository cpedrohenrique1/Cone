#ifndef TESTACONE_H_
#define TESTACONE_H_
#include "Cone.h"
#include <iostream>
using namespace std;

class TestaCone{
    private:
        Cone *Objeto = new Cone;
    public:
        TestaCone();
        ~TestaCone();
        void menu();
};

TestaCone::TestaCone(){
}

TestaCone::~TestaCone(){
    delete Objeto;
}

void TestaCone::menu(){
    double entrada;
    int flag;
    do{
        do{
            cout << "Insira raio: ";
            cin >> entrada;
        }while (Objeto->setRaio(entrada) == false);
        do{
            cout << "Insira altura: ";
            cin >> entrada;
        }while (Objeto->setAltura(entrada) == false);
        cout << "Geratriz: " << Objeto->geratriz() << "\n";
        cout << "Area lateral: " << Objeto->areaLateral() << "\n";
        cout << "Area total: " << Objeto->areaTotal() << "\n";
        cout << "Volume: " << Objeto->volume() << "\n";
        cout << "Digite 0 para encerrar o programa: ";
        cin >> flag;
    }while (flag != 0);
}

#endif