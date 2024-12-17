#include <string>
using namespace std;

class Ingredient {
public:
    string name;
    int cookTime; 

    Ingredient(const string& name, int cookTime);

    bool operator<(const Ingredient& other) const; 
};
