#ifndef Funko_h
#define Funko_h
#include<string>    
using namespace std;

#include "Trivia.h"
#include "Fandom.h"


class Funko: public Trivia, public Fandom{
private:
    std::string name;

public:
    Funko(); 
    Funko(std::string info, std::string nombreFan, std::string categoria, std::string name);
    void get_story(); 
    void print(); 
    bool filter(std::string fandom); 
    std::string display();
};

Funko::Funko(){

}

Funko::Funko(std::string info, std::string nombreFan, std::string categoria, std::string name): Trivia(info), Fandom(nombreFan,categoria){
    this-> name = name; 
}

void Funko::get_story(){
    get_trivia(); 
}

void Funko::print(){
    std::cout<<"name: "<< name << std::endl;
    std::cout<<"fandom: "<<nombreFan << std::endl;
    std::cout<<"trivia: "<<info<<std::endl;
    std::cout<<std::endl;
}

std::string Funko::display(){
    return name; 
}

bool Funko::filter(std::string fandom){
    return nombreFan == fandom; 
}


#endif //Funko
