#include <iostream>

int main() {
    char a[] = "dsfafs";
    char b[] = "asfafd";
    int hem_cnt = 0;

    if (sizeof (a) == sizeof (b)) {
        for (int i = 0; i < 6; ++i) {
            if (a[i] != b[i]) {
                hem_cnt += 1;
            }
        }
    }

    std::cout << hem_cnt << std::endl;

    return 0;
}
