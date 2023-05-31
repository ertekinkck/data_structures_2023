
class Node{
    public:
        void set_left(Node*);
        void set_right(Node*);
        void get_left();
        void get_right();

    private:
        int data;
        Node* left;
        Node* right;
};

class maxheap{
    public:
        maxheap();
        ~maxheap();
        void addNode(int);
        void addIntoArray();
        void removeNode();
        void swap(Node* , Node*);
    private:
        Node* root;
};

maxheap::maxheap()
{
    this->root = nullptr;
}