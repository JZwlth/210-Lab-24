// Goat.h

#ifndef GOAT_H
#define GOAT_H
#include <iostream>
using namespace std;

class Goat {
private:
    string name;
    int age;
    string color;
public: 
    // Constructors
    Goat() { name = ""; age = 0; color = ""; } 
    Goat(string n) : name(n), age(0), color("Unknown") {} 
    Goat(string n, int a) : name(n), age(a), color("Unknown") {}
    Goat(string n, int a, string c) : name(n), age(a), color(c) {}

    // Setters and Getters
    void set_name(string n) { name = n; }
    string get_name() const { return name; }
    void set_age(int a) { age = a; }
    int get_age() const { return age; }
    void set_color(string c) { color = c; }
    string get_color() const { return color; }

    // Overloaded < operator for std::set sorting and uniqueness
    bool operator<(const Goat &other) const {
        // Comparison based on name, then age, then color to ensure uniqueness
        if (name != other.name) return name < other.name;
        if (age != other.age) return age < other.age;
        return color < other.color;
    }

    // Display function for Goat
    void display() const {
        cout << name << " (" << age << ", " << color << ")";
    }
};

#endif
