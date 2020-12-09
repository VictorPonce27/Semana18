#include<iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

#include "Funko.h"

int main(){

    std::ifstream inFile("funkos.txt"); 
    std::vector<Funko> collection; 
    std::string name, fandom, trivia, data;
    std::string option = "0";
    if(inFile.is_open()){
        while(getline(inFile,data)){
        std::stringstream ss(data); 
        getline(ss,data, ','); 
        name = data;
        getline(ss, data, ',');
        fandom = data;
        getline(ss, data, ',');
        trivia = data;

        Funko temp(trivia, fandom, fandom, name); 
        collection.push_back(temp); 
        }
    }

    while(stoi(option) != 4){
        std::cout << "Bienvenido: Usuario" << std::endl;
        std::cout << "Que gustaria hacer" << std::endl;
        std::cout << "1- mostrar coleccion" << std::endl;
        std::cout << "2- filtara coleccion" << std::endl;
        std::cout << "3- ver trivia" << std::endl;
        std::cout << "4- salir" << std::endl;

        std::cin >> option;
        switch (stoi(option)){
            case  1:{
                int index = 1; 
                for(auto i: collection){
                    std::cout<< index<< "- "<< i.display() << std::endl;
                }
            break;
            }
            case 2: {
                std::vector<Funko> filteredCollection; 
                std::string filter; 
                std::string subOption; 
                std::cout<<"que fandom quieres filtara"<<std::endl;
                cin >> filter; 
                
                int takeOff = filter.find("_"); 
                if(takeOff > 0){
                    filter.replace(takeOff,1," ");
                }

                for(auto i : collection){
                    if(i.filter(filter)){
                        filteredCollection.push_back(i); 
                    }
                }
                if(filteredCollection.size() == 0){
                    std::cout<<"you don't have anything in this collection"<<endl;
                    break;
                }
                else{
                    std::cout << "1- ver trivia de la collecion" << std::endl;
                    std::cout << "2- regresar" << std::endl;
                    std::cin >> subOption; 

                    while (stoi(subOption) !=2){
                        if(stoi(subOption) == 1){
                            for(auto i : filteredCollection){
                                i.print(); 
                            }
                            break;
                        }
                        else{
                            std::cout << "opcion invalida favor de introducir opcion de nuevo" << std::endl;
                            std::cout << "1- ver trivia de la collecion" << std::endl;
                            std::cout << "2- regresar" << std::endl;
                            std::cin >> subOption;
                        }
                    }
                }
                break;
            }
            case 3:{
                for(auto i: collection){
                   i.print(); 
                }
            break; 
            }
            default:
                std::cout << "opcion invalida favor de introducir opcion de nuevo" << std::endl;
                std::cout << "Que gustaria hacer" << std::endl;
                std::cout << "1- mostrar coleccion" << std::endl;
                std::cout << "2- filtara coleccion" << std::endl;
                std::cout << "3- ver trivia" << std::endl;
                std::cout << "4- salir" << std::endl;

                std::cin >> option;     
            break;
        }
    }
}


