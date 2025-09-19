#include <iostream>
using namespace std;

class B {
    public: int a ;
    int b;

    public :
    int add(){
        return a+b;

    }
    void operator+ (B &obj){
        // int value1 = this-> a ;
        // int value2 = obj.a;
        // cout<<"output"<<value2 - value1<<endl;
        cout<<"hello ashish"<<endl;
    }
    void operator() (){
        cout<<" hello ash "<<this->a <<endl;
    }

};
class Animal {
    public:
    void speak(){
        cout<< " speaking "<<endl;
    }
};

class Dog : public Animal{
    public:
    void speak(){
        cout<< "barking"<<endl;
    }

};

int main (){
    Dog obj ;
    obj.speak();

    // obj1.a = 4;
    // obj2.a = 7;

    // obj1 + obj2;
}