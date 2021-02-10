#include <iostream>

struct tree {
    tree* left;
    tree* right;
    int numb;
    tree(int n = 0, tree* l = nullptr, tree* r = nullptr): left(l), right(r), numb(n) {};
};

class bin_tree {
    tree *node;

public:
    bin_tree() {
        node = nullptr;
    }

    void add_node(tree *&nd, int n);
    void add_item(int n);
    void show(tree *&t);
    void show_tree();
};

void bin_tree::add_node(tree *&nd, int n) {
    if (nd == nullptr) {
        nd = new tree(n);
    } else {
        if (n < nd->numb) {
            add_node(nd->left, n);
        } else if (n > nd->numb) {
            add_node(nd->right, n);
        } else if (n == nd->numb) {
            return;
        }
    }
}

void bin_tree::show(tree *&t) {
    if(t != nullptr) {
        show(t->left);
        std::cout << t->numb << " ";
        show(t->right);
    }
}


void bin_tree::add_item(int n) {
    add_node(node, n);
}

void bin_tree::show_tree() {
    show(node);
}

int main() {
    bin_tree BT;

    int k = 0;
    std::cin >> k;
    int a[k];
    for (int i = 0; i < k; ++i) {
        std::cin >> a[k];
        BT.add_item(a[k]);
    }

    BT.show_tree();

    return 0;
}

