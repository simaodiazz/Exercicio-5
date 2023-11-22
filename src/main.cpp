#include <iostream>
#include <string>

using namespace std;

struct Node {
    string name;
    Node *next;
};

struct List {
private:
    int index;
    Node* root;
public:
    List() : index(0), root(nullptr) { }

    void add(string name) {
        Node* node = new Node;
        node->name = name;
        node->next = nullptr;

        if (this->root == nullptr) {
            this->root = node;
            return;
        }

        Node* current = this->root;
        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = node;

        this->index++;

        return;
    }

    void get() {
        Node* current = this->root;
        for (int i = 0; i <= this->index; i++) {
            cout << current->name << endl;
            current = current->next;
        }
    }
};

int main() {
    List list;
    list.add("Hello, World");
    list.add("Hello, C++");
    list.add("Hello, NodeJS");
    list.add("Hello, PHP");
    
    list.get();
}