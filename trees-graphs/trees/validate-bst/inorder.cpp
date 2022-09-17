#include<iostream>
using namespace std;

template <typename T, typename Q>
class BinaryTree{
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
                void setValue(Q value){
                    this->value = value;
                }
                void setLeft(Node* left){
                    this->left = left;
                }
        };
        Node* root;
    public:
        BinaryTree():root(nullptr){}
};

int main(){
    return 0;
}