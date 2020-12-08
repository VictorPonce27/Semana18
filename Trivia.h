#ifndef Trivia_h
#define Trivia_h

class Trivia{
private:
    string info;
public:
    Trivia();
    Trivia(string infoNueva);
    string get_trivia(); 
};

Trivia::Trivia(){
    info = "default";
}

Trivia::Trivia(string infoNueva){
    info = infoNueva;
}

string Trivia::get_trivia(){
    return info; 
}

#endif //Trivia_h 