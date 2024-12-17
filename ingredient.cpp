#include "ingredient.h"

Ingredient::Ingredient(const string& name, int cookTime) : name(name), cookTime(cookTime) {}

bool Ingredient::operator<(const Ingredient& other) const {
    return cookTime > other.cookTime; 
}
