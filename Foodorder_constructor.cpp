#include <iostream>
using namespace std;

struct OrderData {
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(OrderData data) {
        orderId = data.orderId;
        restaurantName = data.restaurantName;
        isDelivered = data.isDelivered;
    }

    void display() {
        cout << "Order ID: " << orderId << endl;
        cout << "Restaurant: " << restaurantName << endl;
        cout << "Delivered: " << isDelivered << endl;
    }
};

int main() {
    OrderData data = {202, "Burger King", false};

    FoodOrder order(data);

    order.display();

    return 0;
}
