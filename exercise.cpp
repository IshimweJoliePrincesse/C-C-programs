
#include<iostream>


using namespace std;
namespace userDefined{
int quantity=20;
int MyGlobalCount(){
    return quantity;

}


}
int myGlobal=30;
int globalCount(){
return myGlobal* myGlobal;
}
int main(){

    int cout=15;

std::cout << "The local variable count in main is "<<cout<<endl;
std::cout<<"The variable in userdefined namespace is: "<< userDefined:: quantity<<endl;
std::cout <<"The value of myGlobal is" <<::myGlobal<<endl;
std::cout <<"The value of global count() is " << globalCount()<<endl;
return 0;
}
