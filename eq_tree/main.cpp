#include <iostream>

struct node {
    node* left;
    node* right;
    int number;
    node(int n = 0, node*left = nullptr, node* right = nullptr): left(left), right(right), number(n) {};
};

class bin_tree {
    node* head;

public:
    bin_tree() {
        head = nullptr;
    }

    void add(node *&node, int n) {
        if (node == nullptr) {
            node = new struct node(n);
        } else {
            if (n > node->number) {
                add(node->right, n);
            } else {
                add(node->left, n);
            }
        }
    }

    void add_item(int n) {
        add(head, n);
    }

    void show(node *&node) {
        if (node != nullptr) {
            show(node->left);
            std::cout << node->number << " ";
            show(node->right);
        }
    }

    void show_tree() {
        show(head);
    }

    node* get_head() {
        return head;
    }
};

bool check(node* node1, node* node2) {
    if ((node1->number != node2->number) ||
        (node1->left == nullptr && node2->left != nullptr) ||
        (node1->left != nullptr && node2->left == nullptr) ||
        (node1->right == nullptr && node2->right != nullptr) ||
        (node1->right != nullptr && node2->right == nullptr)) {
        return false;
    }

    if (node1->right == nullptr && node2->right == nullptr && node1->left == nullptr && node2->left == nullptr) {
        return true;
    }

    if (node1->right == nullptr && node2->right == nullptr && node1->left != nullptr && node2->left != nullptr) {
        return check(node1->left, node2->left);
    }

    if (node1->right != nullptr && node2->right != nullptr && node1->left == nullptr && node2->left == nullptr){
        return check(node1->right, node2->right);
    }
    return (check(node1->right, node2->right) && check(node1->left, node2->left));
}

int main() {
    bin_tree BN1;
    BN1.add_item(5);
    BN1.add_item(6);
    BN1.add_item(7);
    BN1.add_item(1);
    BN1.show_tree();

    std::cout << std::endl;

    bin_tree BN2;
    BN2.add_item(5);
    BN2.add_item(6);
    BN2.add_item(7);
    BN2.add_item(1);
    BN2.show_tree();

    std::cout << std::endl;

    std::cout << check(BN1.get_head(), BN2.get_head());

    return 0;
}
