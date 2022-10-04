#ifndef CONE_H_
#define CONE_H_

class Cone{
    private:
        double raio, altura; // > 0
    public:
        Cone();
        bool setRaio(double);
        bool setAltura(double);
        double geratriz()const;
        double areaLateral()const;
        double areaTotal()const;
        double volume()const;
};

Cone::Cone(){
    raio = 1;
    altura = 1;
}

bool Cone::setRaio(double aux){
    if (aux > 0){
        raio = aux;
        return true;
    }else{
        return false;
    }
}

bool Cone::setAltura(double aux){
    if (aux > 0){
        altura = aux;
        return true;
    }else{
        return false;
    }
}

double Cone::geratriz()const{
    return (sqrt((altura*altura)+(raio*raio)));
}

double Cone::areaLateral()const{
    return (3.14*raio*geratriz());
}

double Cone::areaTotal()const{
    return (3.14*raio*geratriz()+raio);
}

double Cone::volume()const{
    return (1/3*3.14*raio*raio*altura);
}

#endif