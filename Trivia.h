#ifndef Trivia_h
#define Trivia_h
#include<string> 
using namespace std;

class Trivia{
protected:
    std::string info;

public:
    Trivia(std::string info);
    Trivia();
    std::string get_trivia();
};

Trivia::Trivia(){
    this->info = "default";
}

Trivia::Trivia(std::string info)
{
    this->info = info;
}

std::string Trivia::get_trivia(){
    return info;
}

#endif //Trivia_h
