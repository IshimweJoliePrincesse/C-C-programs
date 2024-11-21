
#include<iostream>


using namespace std;
namespace nspace{
int amount=2000;
int duplicateAmount(){
return  amount *2;
}
}
int amout=5000;
int main (){
int amount=3000;
cout<<"The local amount is " <<amount<<endl;
cout<<"The global amount is " <<::amout<<endl;
cout<<"The amount from nspace is " <<nspace ::amount<<endl;
return 0;
}
