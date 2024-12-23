#ifndef RECIPE_H
#define RECIPE_H

#include <string>
#include <vector>

class Recipe {
public:
    Recipe(const std::string& name, const std::string& ingredients, const std::string& instructions, const std::string& nutritionalInfo, int calories);

    std::string getName() const;
    std::string getIngredients() const;
    std::string getInstructions() const;
    std::string getNutritionalInfo() const;
    int getCalories() const;
    bool containsAllergen(const std::vector<std::string>& allergies) const;

private:
    std::string name;
    std::string ingredients;
    std::string instructions;
    std::string nutritionalInfo;
    int calories;
};

#endif