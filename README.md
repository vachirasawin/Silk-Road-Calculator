# Silk-Road-Calculator

## Data structure
```cpp
struct Product {
    int purchase_price;
    int selling_price;
    int cost_price;
    int profit;
    string product_name;
    int city;
    int dist;
};
```
- `purchase_price` is an integer variable that stores the purchase price of the product.
- `selling_price` is an integer variable that stores the selling price of the product.
- `cost_price` is an integer variable that stores the cost price of an item, which is the `purchase_price` of that item in the city where the user is located.
- `profit` is an integer variable that stores the profit value of a product. It starts at -1 and will be calculated later.
- `product_name` is a string variable that stores the name of a product.
- `city` is an integer variable that stores the location of a city, for example, `Tyre = 1` and `Damascus = 2`.
- `dist` is an integer variable that stores the distance between the cities where the goods are purchased.

## Add data
```cpp
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
```
- We need to enter the values ​​that match those in the Data Structure section.
- We will always set `profit = -1` and `dist = 0`.

## Input
```cpp
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
```
- `curr_city` is an integer variable that stores the user's current city location.
- `curr_budget` is an integer variable that stores the amount of money the user currently has.
- `curr_capacity` is an integer variable that stores the maximum amount of items the user can currently hold in their inventory.

## Increase profits from product sales
```cpp
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
```
- We'll go through every item in `products` and replace it with `curr_product`.
- If the city of `curr_product` matches `curr_city`.
- We'll go through every item in `products` and replace it with `next_product`.
- If the city of `next_product` does not match `curr_city` and it is the same product and `selling_price` of `next_product` is higher than the `purchase_price` of `curr_product`.
- We'll represent the `profit` of `next_product` as the difference between the `selling_price` of `next_product` and the `purchase_price` of `curr_product`.
- We'll represent the `cost_price` of `next_product` as the `purchase_price` of `curr_product`.
- We'll represent the `dist` of `next_product` as the difference between the `city` of `next_product` and the `curr_city`.
