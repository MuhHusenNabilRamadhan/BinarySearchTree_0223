#include <iostream>
using namespace std;

class Node 
{
    public :
        int info;
        Node *leftchild;
        Node *rightchild;

        //Constructor for node class
        Node()
        {
            leftchild = nullptr; // Initialize left child to null
            rightchild = nullptr; // initialize right child to null
        }
};

class BinaryTree
{
    public:
        Node *ROOT;

        BinaryTree()
        {
            ROOT = nullptr; // Initializing ROOT to null
        }

        void insert()
        {
            int x;
            cout << "Masukkan Nilai";
            cin >> x;
        }

        //Step 1 = Allocate memory for the new node
        Node *newNode = new Node();
};