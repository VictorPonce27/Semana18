#ifndef Trivia_h
#define Trivia_h

class Trivia{
private:
    string info;
public:
    Trivia();
    Trivia(string infoNueva);
};

Trivia::Trivia(){
    info = "default";
}

Trivia::Trivia(string infoNueva){
    info = infoNueva;
}

#endif //Trivia_h 