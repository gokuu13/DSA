#include<iostream>
#include<queue>
using namespace std;


class Animal{
    int order;
    string name;
    public:
        Animal(string n){
            name = n;    
        }
        void setOrder(int order){
            this->order = order;
        }
        int getOrder(){
            return this->order;
        }

        virtual bool isOlderThan() = 0;
        
};

class Dog: public Animal{
    public:
        Dog(string n) : Animal(n){
        }
};

class Cat: public Animal{
    public:
        Cat(string n): Animal(n){}
};



class AnimalQueue{
    queue<Dog*> dogs;
    queue<Cat*> cats;
    int order = 0;
    public:
        void enqueue(Animal* a){
            a->setOrder(order);
            order++;

            if(Dog* dog = dynamic_cast<Dog*>(a)){
                dogs.push(dog);
            }else if(Cat* cat = dynamic_cast<Cat*>(a)){
                cats.push(cat);
            }

        }

};

int main(){
    return 0;
}