#include <iostream>

using namespace std;

int ticket(int standard, int price) {
    if (price < 0 || price <0) {
        cout << "Ошибка ввода" << endl;
        return 1;
    }
    return standard * price;
}

int ticket(int standard, int price, int vip) {
    return (standard * price) + (vip * price * 2);
}

int main() {
    cout << ticket(78, 100, 12) << endl;
}