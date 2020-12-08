#ifndef Trivia_h
#define Trivia_h

class Trivia{
private:
    string info;
public:
    Trivia();
    Trivia(string info);
    string get_trivia();
};

Trivia::Trivia(){
    this->info = "default";
}

Trivia::Trivia(string info){
    this->info = info;
}

string Trivia::get_trivia(){
    return info;
}

#endif //Trivia_h
