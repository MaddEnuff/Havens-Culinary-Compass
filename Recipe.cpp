#include "Recipe.h"
#include <algorithm>

Recipe::Recipe(const std::string& name, const std::string& ingredients, const std::string& instructions, const std::string& nutritionalInfo, int calories)
    : name(name), ingredients(ingredients), instructions(instructions), nutritionalInfo(nutritionalInfo), calories(calories) {
}

std::string Recipe::getName() const {
    return name;
}

std::string Recipe::getIngredients() const {
    return ingredients;
}

std::string Recipe::getInstructions() const {
    return instructions;
}

std::string Recipe::getNutritionalInfo() const {
    return nutritionalInfo;
}

int Recipe::getCalories() const {
    return calories;
}

bool Recipe::containsAllergen(const std::vector<std::string>& allergies) const {
    return std::any_of(allergies.begin(), allergies.end(), [this](const std::string& allergy) {
        return ingredients.find(allergy) != std::string::npos;
        });
}