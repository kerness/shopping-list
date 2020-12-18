//
// Created by maciek on 16.12.2020.
//

#ifndef SHOPPING_LIST_SHOPPINGLIST_H
#define SHOPPING_LIST_SHOPPINGLIST_H


#include "Product.h"
#include "ProductPieces.h"
#include "ProductWeight.h"
#include "ProductLiters.h"
#include <iostream>
#include <vector>
#include <string>




class ShoppingList {
private:
    static const int DEFAULT_CAPACITY = 10;
    int _elementsCounter;
    int _capacity;
    std::string _name;
    std::vector<Product*> _products;

public:
    // constructor
    ShoppingList(std::string& name, int cap = DEFAULT_CAPACITY);
    // copy constructor
    //ShoppingList(const ShoppingList& source);
    // overloaded '=' operator
    //ShoppingList& operator=(const ShoppingList& source);
    // destructor
    ~ShoppingList();
    std::string getShoppingListName();
    int getElementsCounter();
    int getDefaultCapacity() const;
    std::vector<Product*> getProducts();
    void addProduct(int categoryNum, const std::string& name, int quant);
    void printListContents();
    ShoppingList& operator+=(const ShoppingList& source);

    void mergeLists(ShoppingList& toMerge);
    void moveProduct(ShoppingList& destination, int productIndex);

    Product* getProdctByIndex(int index) {
        return _products[index];
    }

    bool isEmpty();

};

#endif //SHOPPING_LIST_SHOPPINGLIST_H
