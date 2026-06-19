#include <iostream>
using namespace std;

class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    void markDelivered() {
        isDelivered = true;
        cout << "Order Delivered Successfully!" << endl;
    }
};

int main() {
    FoodOrder order;

    order.orderId = 101;
    order.restaurantName = "Pizza Hub";
    order.isDelivered = false;

    order.markDelivered();

    return 0;
}
