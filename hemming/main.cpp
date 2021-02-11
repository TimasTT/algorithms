#include <iostream>
#include <cstring>

class string {
    char *data;
    int size;
    int capacity;
public:
    explicit string(size_t s = 0, int c = 0, char *a = nullptr):size(s), capacity(c), data(a) {};

    explicit string(int size) {
        this->size = size;
        this->capacity = size;
        if (size != 0) {
            data = new char(size);
        } else {
            data = nullptr;
        }
    }

    string(const char *a) {
        char *new_data = new char(strlen(a) + 1);
        strcpy(new_data, a);
        size = strlen(a);
        capacity = strlen(a);
        delete [] data;
        data = new_data;
    }

    string& operator= (const char* a) {
        delete [] data;
        data = new char(strlen(a) + 1);
        strcpy(data,a);
        size = strlen(a);
        capacity = strlen(a);
        return *this;
    }

    ~string() {
        delete [] data;
    }

    void resize(int size) {
        if (size > capacity) {
            capacity += 10;
            char *new_data = new char(size);
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
            std::cout << data[i];
        }
        std::cout << std::endl;
    }

    int show_size() {
        return size;
    }

    char & operator[] (const int i) {
        return data[i];
    }
};

std::ostream& operator << (std::ostream & out, int *data) {
    out << *data;
    return out;
}

int hemming(string &a, string &b) {
    int cnt = 0;
    if (a.show_size() == b.show_size()) {
        for (int i = 0; i < a.show_size(); ++i) {
            if (a[i] != b[i]) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    const char b[] = "dsdsfs" ;
    string a(b);
    a.show();
    string c = "dsaaaa";
    c.show();
    std::cout << hemming(a, c) << std::endl;
    return 0;
}