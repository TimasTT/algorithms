#include <iostream>

struct list {
    list* next;
    int numb;

    list(int n = 0, list *next = nullptr): numb(n), next(next) {};
};

class forward_list {
    list *head;

public:
    forward_list() {
        head = nullptr;
    }

    void add(list *&node, int n) {
        if (node == nullptr) {
            node = new list(n);
        } else {
            add(node->next, n);
        }
    }

    list *&get() {
        return head;
    }

    void add_item(int n) {
        add(head, n);
    }

    void show(list *&node) {
        if (node != nullptr) {
            std::cout << node->numb << " ";
            show (node->next);
        }
    }

    void show_forward_list() {
        show (head);
    }

    void rev_list(list *&head) {
        list *next, *prev = nullptr;
        for (list *tmp = head; tmp;) {
            next = tmp->next;
            tmp->next = prev;
            prev = tmp;
            tmp = next;
        }
        head = prev;
    }

    void reverse_list(){
        rev_list(head);
    }

};

void rever_list(list *&head) {
    list *next, *prev = nullptr;
    for (list *tmp = head; tmp;) {
        next = tmp->next;
        tmp->next = prev;
        prev = tmp;
        tmp = next;
    }
    head = prev;
}


int main() {
    forward_list FL;
    FL.add_item(1);
    FL.add_item(2);
    FL.add_item(3);
    FL.add_item(4);
    FL.show_forward_list();
    std::cout << std::endl;
    FL.reverse_list();
    FL.show_forward_list();
    std::cout << std::endl;
    rever_list(FL.get());
    FL.show_forward_list();

    return 0;
}
