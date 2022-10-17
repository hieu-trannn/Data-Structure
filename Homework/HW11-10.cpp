#include <iostream>
#include <string>
#include <ostream>
using namespace std;
struct Foods
{
    std::string name;
    //weight in kilograms
    float weight;
    float calos;
    void PrintStructure()
    {
        cout << "Name: " << name<<endl;
        cout << "Weight: " << weight<<endl ;
        cout << "Calos: " << calos<<endl;
    }
};
// ostream& operator<<(ostream& os, const Foods& Food) {
//     return os << "name: " << Food.name << std::endl
//               << "weight: " << Food.weight << std::endl
//               << "calos: " << Food.calos << std::endl;
// }
int main(){
    Foods Foody[7];
    // for (int i = 0; i < 7; i++)
    // {
    //     std::cout<<i+1<<"th foods"<<std::endl;
    //     std::cin>>Foody[i].name;
    //     std::cin>>Foody[i].weight;
    //     std::cin>>Foody[i].calos;
    // }

    // std::cout<<"1st food"<<std::endl;
    Foody[0].name = "Potatoes";
    Foody[0].weight = 800;
    Foody[0].calos = 1501600;
    // std::cout<<"2nd food"<<std::endl;
    Foody[1].name = "Wheat flour";
    Foody[1].weight = 400;
    Foody[1].calos = 1444000;
    // std::cout<<"3rd food"<<std::endl;
    Foody[2].name = "Rice";
    Foody[2].weight = 300;
    Foody[2].calos = 1122000;
    // std::cout<<"4th food"<<std::endl;
    Foody[3].name = "Beans (can)";
    Foody[3].weight = 300;
    Foody[3].calos = 690000;
    // std::cout<<"5th food"<<std::endl;
    Foody[4].name = "Tomatoes (can)";
    Foody[4].weight = 300 ;
    Foody[4].calos = 237000;
    // std::cout<<"6th food"<<std::endl;
    Foody[5].name = "Strawberry jam";
    Foody[5].weight = 50;
    Foody[5].calos = 130000;
    // std::cout<<"7th food"<<std::endl;
    Foody[6].name = "Peanut butter";
    Foody[6].weight = 20;
    Foody[6].calos = 117800;
    // std:: cout<<Foody[1];
    for (int i =0; i<7; i++){
        Foody[i].PrintStructure();
    }
    return 0;
    
}

