#include <iostream>

using namespace std;

bool sellSeats(int& freeSeats, int count) {
    if (count > 0 && freeSeats >= count) {
        freeSeats -= count;
        return true;
    }
    return false;
}

int main() {
    int seats = 10;

    if (sellSeats(seats, 4)) {
        std::cout << "Успешно продано 4 места. Осталось: " << seats << "\n"; // Осталось: 6
    }

    if (!sellSeats(seats, 8)) {
        std::cout << "Недостаточно мест для продажи 8 билетов. Осталось: " << seats << "\n"; // Осталось: 6
    }

    return 0;

}