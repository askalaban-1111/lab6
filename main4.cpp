#include <iostream>

using namespace std;

int bookingFee(int tickets, int price = 20, int service = 3) {
    int result;
    if (tickets < 0 || price < 0 || service < 0) {
        cout<<"неверные значения"<<endl;
        return 1;
    } else if (tickets == 0) {
        result = 0;
    } else {
        result = tickets * price + service;
    }
    return result;
}

int main() {
    cout << bookingFee(100, 30, 100) << endl;
}