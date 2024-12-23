#ifndef RECIPEDATABASE_H
#define RECIPEDATABASE_H

#include <vector>
#include <string>
#include "Recipe.h"

class RecipeDatabase {
public:
    void loadRecipes(const std::string& filename);
    std::vector<Recipe> recommendRecipes(const std::vector<std::string>& ingredients, const std::vector<std::string>& allergies) const;

private:
    std::vector<Recipe> recipes;
};

#endif