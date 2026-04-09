# Silk-Road-Calculator

## Data Structure
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
- selling_price is an integer variable that stores the selling price of the product.
- cost_price is an integer variable that stores the cost price of an item, which is the purchase_price of that item in the city where the user is located.
- profit is an integer variable that stores the profit value of a product. It starts at -1 and will be calculated later.
- product_name is a string variable that stores the name of a product.
- city is an integer variable that stores the location of a city, for example, Tyre = 1 and Damascus = 2.
