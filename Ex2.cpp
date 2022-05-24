#include <iostream>

using namespace std;

class Fruit
{
public:
    Fruit(string _name, string _color) : name(_name), color(_color) {}
    ~Fruit() {}
    string getName() { return name; }
    string getColor() { return color; }
protected:
    string name, color;
};
class Apple : public Fruit
{
public:
    Apple() : Fruit("apple", "red") {}
    Apple(string _name, string _color) : Fruit(_name , _color) {}
    ~Apple() {}
};
class Banana : public Fruit
{
public:
    Banana() : Fruit("banana", "yellow") {}
    ~Banana() {}
};
class GrannySmith : public Apple
{
public:
    GrannySmith() : Apple("Granny Smith apple", "green") {}
    ~GrannySmith() {}
};
int main()
{
    Apple a;
    Banana b;
    GrannySmith c;
    cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
}
