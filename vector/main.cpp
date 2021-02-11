#include <iostream>

template <typename T>
class vector {
    T *data;
    size_t size;
    int capacity;
public:
    explicit vector(size_t s = 0, int c = 0, T *a = nullptr):size(s), capacity(c), data(a) {};

    explicit vector(int size) {
        this->size = size;
        this->capacity = size;
        if (size != 0) {
            data = new T(size);
        } else {
            data = nullptr;
        }
    }

    ~vector() {
        delete [] data;
    }

    void resize(int size) {
        if (size > capacity) {
            capacity += 10;
            T *new_data = new T(size);
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

    T& operator[] (const int i) {
        return data[i];
    }
};

std::ostream& operator << (std::ostream & out, int *data) {
    out << *data;
    return out;
}

int main() {
    vector<char> a;
    a.push_back('A');
    a.push_back('B');
    a.push_back('b');
    a.push_back('C');
    a.push_back('D');
    a.show();
    std::cout << a[2];
    return 0;
}
