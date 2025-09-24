#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::multiset<int> tickets;
    for (int i = 0; i < n; ++i) {
        int price;
        std::cin >> price;
        tickets.insert(price);
    }

    std::vector<int> customers(m);
    for (int i = 0; i < m; ++i) {
        std::cin >> customers[i];
    }

    for (int i = 0; i < m; ++i) {
        auto it = tickets.lower_bound(customers[i]);

        if (it == tickets.begin() && *it > customers[i]) {
            std::cout << "-1\n"; // If no ticket is available within the customer's price range
        } else if (it == tickets.end()) {
            --it; // If no ticket has price less than or equal to the customer's maximum price
            std::cout << *it << "\n";
            tickets.erase(it); // Remove the ticket after selling it to the customer
        } else if (*it > customers[i]) {
            --it; // If the ticket's price is greater than the customer's maximum price
            std::cout << *it << "\n";
            tickets.erase(it); // Remove the ticket after selling it to the customer
        } else {
            std::cout << *it << "\n";
            tickets.erase(it); // Remove the ticket after selling it to the customer
        }
    }

    return 0;
}
