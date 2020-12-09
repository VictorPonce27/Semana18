#ifndef Fandom_h
#define Fandom_h

#include <string>
using namespace std;

class Fandom{
protected:
    std::string nombreFan;
    std::string categoria;

public: 
    Fandom();
    Fandom(std::string nombreFan, std::string categoria);
};

Fandom::Fandom(){
    nombreFan = "default";
    categoria = "default";
}

Fandom::Fandom(std::string nombreFan, std::string categoria){
    this->nombreFan = nombreFan;
    this->categoria = categoria;
}

#endif // Fandom_h
