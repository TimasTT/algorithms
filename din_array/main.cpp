#include <iostream>

class array {
    int *data;
    size_t size;
    int capacity;
public:
    explicit array(size_t s = 0, int c = 0, int *a = nullptr):size(s), capacity(c), data(a) {};

    explicit array(int size) {
        this->size = size;
        this->capacity = size;
        if (size != 0) {
            data = new int(size);
        } else {
            data = nullptr;
        }
    }

    ~array() {
            delete [] data;
    }

    void resize(int size) {
        if (size > capacity) {
            capacity += 10;
            int *new_data = new int(size);
            for (int i = 0; i < this->size; ++i) {
                new_data[i] = data[i];
            }
            delete [] data;
            data = new_data;
            this->size = size;
        }
        this->size = size;
    }

    void push_back(int item) {
        resize(this->size + 1);
        data[this->size - 1] = item;
    }

    void show() {
        for (int i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }

    int show_size() {
        return size;
    }

    int& operator[] (const int i) {
        return data[i];
    }
};

std::ostream& operator << (std::ostream & out, int *data) {
    out << *data;
    return out;
}

int main() {
    array a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.show();
    std::cout << a[2];
    return 0;
}
