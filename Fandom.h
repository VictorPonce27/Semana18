#ifndef Fandom_h
#define Fandom_h


class Fandom{
private:
    string nombreFan;
    string categoria;
public:
    Fandom();
    Fandom(string nomFanNueva, string categNueva);
}

Fandom::Fandom(){
    nombreFan = "default";
    categoria = "default";
}

Fandom::Fandom(string nomFanNueva, string categNueva){
    nombreFan = nomFanNueva;
    categoria = categNueva;
}




#endif // Fandom_h
