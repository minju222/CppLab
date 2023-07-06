#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Product {
protected:
    std::string id;
    int price;
    std::string name;
public:
    Product(std::string id, int price, std::string name) : id(id), price(price), name(name) {}
    Product(const Product& product) {
        id = product.id;
        price = product.price;
        name = product.name;
    }
    std::string getId() const {
        return id;
    }
    int getPrice() const {
        return price;
    }
    std::string getName() const {
        return name;
    }
    void setId(std::string id) {
        this->id = id;
    }
    void setPrice(int price) {
        this->price = price;
    }
    void setName(std::string name) {
        this->name = name;
    }

    friend std::ostream& operator<<(std::ostream& os, const Product& product) {
        os << "ID: " << product.id << ", Name: " << product.name << ", Price: " << product.price;
        return os;
    }
};

class TV : public Product {
private:
    std::string resolution;

public:
    TV(const std::string& id, int price, const std::string& name, const std::string& resolution)
        : Product(id, price, name), resolution(resolution) {}

    std::string getResolution() const { return resolution; }

    friend std::ostream& operator<<(std::ostream& os, const TV& tv) {
        os << "ID: " << tv.id << ", Name: " << tv.name << ", Price: " << tv.price << ", Resolution: " << tv.resolution;
        return os;
    }
};

class Computer : public Product {
private:
    std::string processor;

public:
    Computer(const std::string& id, int price, const std::string& name, const std::string& processor)
        : Product(id, price, name), processor(processor) {}

    std::string getProcessor() const { return processor; }

    friend std::ostream& operator<<(std::ostream& os, const Computer& computer) {
        os << "ID: " << computer.id << ", Name: " << computer.name << ", Price: " << computer.price << ", Processor: " << computer.processor;
        return os;
    }
};


class ProductManager {
private:
    std::vector<Product*> products;
    ProductManager() {}
public:
    static ProductManager& getInstance() {
        static ProductManager instance;
        return instance;
    }

    void addProduct(Product* product) {
        products.push_back(product);
    }

    void deleteProduct(const std::string& productId) {
        auto it = std::find_if(products.begin(), products.end(), [&](const Product* product) {
            return product->getId() == productId;
            });

        if (it != products.end()) {
            delete* it;
            products.erase(it);
            std::cout << "Product with ID " << productId << " deleted." << std::endl;
        }
        else {
            std::cout << "Product with ID " << productId << " not found." << std::endl;
        }
    }

    void updateProduct(const std::string& productId, int newPrice, const std::string& newName) {
        auto it = std::find_if(products.begin(), products.end(), [&](const Product* product) {
            return product->getId() == productId;
            });

        if (it != products.end()) {
            (*it)->setPrice(newPrice);
            (*it)->setName(newName);
            std::cout << "Product with ID " << productId << " updated." << std::endl;
        }
        else {
            std::cout << "Product with ID " << productId << " not found." << std::endl;
        }
    }

    void selectProduct(const std::string& productId) const {
        auto it = std::find_if(products.begin(), products.end(), [&](const Product* product) {
            return product->getId() == productId;
            });

        if (it != products.end()) {
            std::cout << "Selected Product: " << **it << std::endl;
        }
        else {
            std::cout << "Product with ID " << productId << " not found." << std::endl;
        }
    }

    void displayProducts() const {
        for (const auto& product : products) {
            std::cout << *product << std::endl;
        }
    }

    ~ProductManager() {
        for (auto product : products) {
            delete product;
        }
    }
};

int main() {
    ProductManager& manager = ProductManager::getInstance();
    TV* tv1 = new TV("P1", 1000, "TV 1", "1080p");
    manager.addProduct(tv1);
    Computer* computer1 = new Computer("P2", 1500, "Computer 1", "Intel Core i7");
    manager.addProduct(computer1);
    manager.displayProducts();
    manager.updateProduct("P2", 2000, "New Computer 1");
    manager.selectProduct("P1");
    manager.deleteProduct("P2");
    manager.displayProducts();

    return 0;
}