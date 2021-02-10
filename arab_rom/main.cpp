#include <iostream>

struct node {
    char key;
    int value;
    node* next;
    node(char k = 0, int value = 0, node* next = 0): key(k), value(value), next(next) {};
};

class map {
    node *node;
public:
    map() {
        node = nullptr;
    }

    void add(struct node*& node, char k, int v) {
        if (node == nullptr) {
            node = new struct node(k,v);
        } else {
            add(node->next, k, v);
        }
    }

    void additem(char k, int v) {
        add(node, k, v);
    }

    void show(struct node*& node) {
        if (node != nullptr) {
            show(node->next);
            std::cout << node->key << " : " << node->value << std::endl;
        }
    }

    void show_map() {
        show(node);
    }

    struct node* get() {
       return node;
    }

    int operator[] (const char key) {
        for (struct node* tmp = node; tmp != nullptr;) {
            if (tmp->key == key) {
                return tmp->value;
            }
            tmp = tmp->next;
        }
        return 0;
    }
};

struct str {
    char* string;
    int length;
    str(char* s = 0, int l = 0): string(s), length(l) {};
};

int rom_to_arab(str* s, map map) {
    int res = 0, tmp = 0;
    for (int i = 0; i < s->length; ++i) {
        if (tmp == 0) {
            tmp = map[s->string[i]];
            continue;
        }

        if (tmp >= map[s->string[i]]) {
            res += tmp + map[s->string[i]];
            tmp = 0;
            continue;
        }

        if (tmp < map[s->string[i]]) {
            res = map[s->string[i]] - tmp;
            tmp = 0;
        }
    }
    return res + tmp;
}

int main() {
    char rom_str[] = "IXX";
    str string(rom_str, 5);
    map my_map;
    my_map.additem('X', 10);
    my_map.additem('I', 1);
    my_map.show_map();
    std::cout << std::endl;
    std::cout << rom_to_arab(&string, my_map);
    return 0;
}
