#include<iostream>
using namespace std;

template <typename T, typename Q>
class Tree{
    private:
        class Node{
            private:
                Q value;
                Node* left;
                Node* right;
            public:
                Node(Q value){
                    this->value = value;
                }
        };

        Node *root;
    public:
        Tree():root(nullptr){}
};

int main(){
    return 0;
}