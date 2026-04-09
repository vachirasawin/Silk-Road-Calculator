#include <bits/stdc++.h>
using namespace std;

struct Product {
    int purchase_price;
    int selling_price;
    int cost_price;
    int profit;
    string product_name;
    int city;
    int dist;
};
vector<Product> products = {
    // Tyre
    {purchase_price, selling_price, cost_price, -1, "Linen", 1, 0},
    {purchase_price, selling_price, cost_price, -1, "Wool", 1, 0},
    {purchase_price, selling_price, cost_price, -1, "Leather", 1, 0},
    {purchase_price, selling_price, cost_price, -1, "Cotton Yarn", 1, 0},
    {purchase_price, selling_price, cost_price, -1, "Wheat", 1, 0},
    {purchase_price, selling_price, cost_price, -1, "Dried Fish", 1, 0},
    {purchase_price, selling_price, cost_price, -1, "Barley", 1, 0},
    {purchase_price, selling_price, cost_price, -1, "Olive Oil", 1, 0},
    {purchase_price, selling_price, cost_price, -1, "Sea Salt", 1, 0},
    {purchase_price, selling_price, cost_price, -1, "Iron Ingot", 1, 0},
    {purchase_price, selling_price, cost_price, -1, "Copper Ingot", 1, 0},
    {purchase_price, selling_price, cost_price, -1, "Glassware", 1, 0},
    {purchase_price, selling_price, cost_price, -1, "Earthenware", 1, 0},
    {purchase_price, selling_price, cost_price, -1, "Weapons", 1, 0},
    {purchase_price, selling_price, cost_price, -1, "Tools", 1, 0},
    
    // Damascus
    {purchase_price, selling_price, cost_price, -1, "Linen", 2, 0},
    {purchase_price, selling_price, cost_price, -1, "Wool", 2, 0},
    {purchase_price, selling_price, cost_price, -1, "Leather", 2, 0},
    {purchase_price, selling_price, cost_price, -1, "Cotton Yarn", 2, 0},
    {purchase_price, selling_price, cost_price, -1, "Wheat", 2, 0},
    {purchase_price, selling_price, cost_price, -1, "Dried Fish", 2, 0},
    {purchase_price, selling_price, cost_price, -1, "Barley", 2, 0},
    {purchase_price, selling_price, cost_price, -1, "Olive Oil", 2, 0},
    {purchase_price, selling_price, cost_price, -1, "Sea Salt", 2, 0},
    {purchase_price, selling_price, cost_price, -1, "Iron Ingot", 2, 0},
    {purchase_price, selling_price, cost_price, -1, "Copper Ingot", 2, 0},
    {purchase_price, selling_price, cost_price, -1, "Glassware", 2, 0},
    {purchase_price, selling_price, cost_price, -1, "Earthenware", 2, 0},
    {purchase_price, selling_price, cost_price, -1, "Weapons", 2, 0},
    {purchase_price, selling_price, cost_price, -1, "Tools", 2, 0},

    // Palmyra
    {purchase_price, selling_price, cost_price, -1, "Linen", 3, 0},
    {purchase_price, selling_price, cost_price, -1, "Wool", 3, 0},
    {purchase_price, selling_price, cost_price, -1, "Leather", 3, 0},
    {purchase_price, selling_price, cost_price, -1, "Cotton Yarn", 3, 0},
    {purchase_price, selling_price, cost_price, -1, "Wheat", 3, 0},
    {purchase_price, selling_price, cost_price, -1, "Dried Fish", 3, 0},
    {purchase_price, selling_price, cost_price, -1, "Barley", 3, 0},
    {purchase_price, selling_price, cost_price, -1, "Olive Oil", 3, 0},
    {purchase_price, selling_price, cost_price, -1, "Sea Salt", 3, 0},
    {purchase_price, selling_price, cost_price, -1, "Iron Ingot", 3, 0},
    {purchase_price, selling_price, cost_price, -1, "Copper Ingot", 3, 0},
    {purchase_price, selling_price, cost_price, -1, "Glassware", 3, 0},
    {purchase_price, selling_price, cost_price, -1, "Earthenware", 3, 0},
    {purchase_price, selling_price, cost_price, -1, "Weapons", 3, 0},
    {purchase_price, selling_price, cost_price, -1, "Tools", 3, 0},

    // Ctesiphon
    {purchase_price, selling_price, cost_price, -1, "Linen", 4, 0},
    {purchase_price, selling_price, cost_price, -1, "Wool", 4, 0},
    {purchase_price, selling_price, cost_price, -1, "Leather", 4, 0},
    {purchase_price, selling_price, cost_price, -1, "Cotton Yarn", 4, 0},
    {purchase_price, selling_price, cost_price, -1, "Wheat", 4, 0},
    {purchase_price, selling_price, cost_price, -1, "Dried Fish", 4, 0},
    {purchase_price, selling_price, cost_price, -1, "Barley", 4, 0},
    {purchase_price, selling_price, cost_price, -1, "Olive Oil", 4, 0},
    {purchase_price, selling_price, cost_price, -1, "Sea Salt", 4, 0},
    {purchase_price, selling_price, cost_price, -1, "Iron Ingot", 4, 0},
    {purchase_price, selling_price, cost_price, -1, "Copper Ingot", 4, 0},
    {purchase_price, selling_price, cost_price, -1, "Glassware", 4, 0},
    {purchase_price, selling_price, cost_price, -1, "Earthenware", 4, 0},
    {purchase_price, selling_price, cost_price, -1, "Weapons", 4, 0},
    {purchase_price, selling_price, cost_price, -1, "Tools", 4, 0},

    // Ecbatana
    {purchase_price, selling_price, cost_price, -1, "Linen", 5, 0},
    {purchase_price, selling_price, cost_price, -1, "Wool", 5, 0},
    {purchase_price, selling_price, cost_price, -1, "Leather", 5, 0},
    {purchase_price, selling_price, cost_price, -1, "Cotton Yarn", 5, 0},
    {purchase_price, selling_price, cost_price, -1, "Wheat", 5, 0},
    {purchase_price, selling_price, cost_price, -1, "Dried Fish", 5, 0},
    {purchase_price, selling_price, cost_price, -1, "Barley", 5, 0},
    {purchase_price, selling_price, cost_price, -1, "Olive Oil", 5, 0},
    {purchase_price, selling_price, cost_price, -1, "Sea Salt", 5, 0},
    {purchase_price, selling_price, cost_price, -1, "Iron Ingot", 5, 0},
    {purchase_price, selling_price, cost_price, -1, "Copper Ingot", 5, 0},
    {purchase_price, selling_price, cost_price, -1, "Glassware", 5, 0},
    {purchase_price, selling_price, cost_price, -1, "Earthenware", 5, 0},
    {purchase_price, selling_price, cost_price, -1, "Weapons", 5, 0},
    {purchase_price, selling_price, cost_price, -1, "Tools", 5, 0},
};

int main() {
    cout << "Cities:" << endl;
    cout << "\t 1) Tyre" << endl;
    cout << "\t 2) Damascus" << endl;
    cout << "\t 3) Palmyra" << endl;
    cout << "\t 4) Ctesiphon" << endl;
    cout << "\t 5) Ecbatana" << endl;

    cout << "Current city: ";
    int curr_city; cin >> curr_city;
    cout << "Current budget: ";
    int curr_budget; cin >> curr_budget;
    cout << "Current capacity: ";
    int curr_capacity; cin >> curr_capacity;

    for (auto &curr_product : products) {
        if (curr_product.city == curr_city) {
            for (auto &next_product : products) {
                if (next_product.city != curr_city && next_product.product_name == curr_product.product_name && next_product.selling_price > curr_product.purchase_price) {
                    next_product.profit = next_product.selling_price - curr_product.purchase_price;
                    next_product.cost_price = curr_product.purchase_price;
                    next_product.dist = abs(next_product.city - curr_city);
                }
            }
        }
    }
    sort(
        products.begin(), products.end(),
        [&] (const Product &a, const Product &b) {
            if (a.profit != b.profit) return a.profit > b.profit;
            if (a.cost_price != b.cost_price) return a.cost_price < b.cost_price;

            return a.dist < b.dist;
        }
    );

    for (int next_city = 1; next_city <= 5; next_city++) {
        if (next_city == 1) cout << "Tyre" << endl;
        else if (next_city == 2) cout << "Damascus" << endl;
        else if (next_city == 3) cout << "Palmyra" << endl;
        else if (next_city == 4) cout << "Ctesiphon" << endl;
        else if (next_city == 5) cout << "Ecbatana" << endl;

        int products_list = 1;
        int temp_budget = curr_budget;
        for (auto &curr_product : products) {
            if (curr_product.profit > 0 && curr_product.cost_price <= temp_budget && curr_product.city == next_city) {
                int product_amount = min(curr_capacity, temp_budget / curr_product.cost_price);
                if (product_amount > 0) {
                    cout << "\t" << products_list++ << ") " << curr_product.product_name << ": " << product_amount << endl;
                    temp_budget -= product_amount * curr_product.cost_price;
                    curr_budget += product_amount * curr_product.profit;
                    curr_capacity -= product_amount;
                }
            }
        }
        cout << "\tRemaining budget: " << curr_budget << endl;
    }

    return 0;
};
