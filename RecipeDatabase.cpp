#include "RecipeDatabase.h"
#include <fstream>
#include <sstream>
#include <algorithm>

void RecipeDatabase::loadRecipes(const std::string& filename) {
    std::ifstream file(filename);
    std::string line, name, ingredients, instructions, nutritionalInfo;
    int calories;

    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::getline(iss, name, '|');
        std::getline(iss, ingredients, '|');
        std::getline(iss, instructions, '|');
        std::getline(iss, nutritionalInfo, '|');
        iss >> calories;
        recipes.emplace_back(name, ingredients, instructions, nutritionalInfo, calories);
    }
}

std::vector<Recipe> RecipeDatabase::recommendRecipes(const std::vector<std::string>& ingredients, const std::vector<std::string>& allergies) const {
    std::vector<Recipe> recommended;
    for (const auto& recipe : recipes) {
        bool canMake = std::all_of(ingredients.begin(), ingredients.end(), [&](const std::string& ingredient) {
            return recipe.getIngredients().find(ingredient) != std::string::npos;
            });
        if (canMake && !recipe.containsAllergen(allergies)) {
            recommended.push_back(recipe);
        }
    }
    return recommended;
}