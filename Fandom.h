#ifndef Fandom_h
#define Fandom_h


class Fandom{
private:
    string nombreFan;
    string categoria;
public:
    Fandom();
    Fandom(string nombreFan, string categoria);
    string getNombreFan();
    string getCategoria();
};

Fandom::Fandom(){
    nombreFan = "default";
    categoria = "default";
}

Fandom::Fandom(string nombreFan, string categoria){
    this->nombreFan = nombreFan;
    this->categoria = categoria;
}

string Fandom::getNombreFan(){
    return nombreFan;
}

string Fandom::getCategoria(){
    return categoria;
}

#endif // Fandom_h
