#include <iostream>
#include <vector>
#include <string>
#include "RecipeDatabase.h"

// Function to input ingredients from the user
static void inputIngredients(std::vector<std::string>& ingredients) {
    std::string ingredient;
    std::cout << "Enter ingredients you have (type 'done' to finish): ";
    while (std::cin >> ingredient && ingredient != "done") {
        ingredients.push_back(ingredient); // Add each ingredient to the vector
    }
}

// Function to input allergies from the user
static void inputAllergies(std::vector<std::string>& allergies) {
    std::string allergy;
    std::cout << "Enter any allergies you have (type 'done' to finish): ";
    while (std::cin >> allergy && allergy != "done") {
        allergies.push_back(allergy); // Add each allergy to the vector
    }
    // Debugging: Print collected allergies to verify input
    std::cout << "Collected Allergies: ";
    for (const auto& all : allergies) {
        std::cout << all << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<std::string> ingredients; // Vector to store ingredients
    std::vector<std::string> allergies;   // Vector to store allergies

    inputIngredients(ingredients); // Collect ingredients from the user
    inputAllergies(allergies);     // Collect allergies from the user

    // Debugging: Print collected ingredients to verify input
    std::cout << "Collected Ingredients: ";
    for (const auto& ing : ingredients) {
        std::cout << ing << " ";
    }
    std::cout << std::endl;

    RecipeDatabase db; // Create an instance of RecipeDatabase
    db.loadRecipes("recipes.txt"); // Load recipes from the file

    // Get recommended recipes based on ingredients and allergies
    std::vector<Recipe> recommendedRecipes = db.recommendRecipes(ingredients, allergies);

    // Print recommended recipes
    std::cout << "Recommended Recipes:\n";
    for (const auto& recipe : recommendedRecipes) {
        std::cout << recipe.getName() << "\n";
        std::cout << "Ingredients: " << recipe.getIngredients() << "\n";
        std::cout << "Instructions: " << recipe.getInstructions() << "\n";
        std::cout << "Nutritional Info: " << recipe.getNutritionalInfo() << "\n";
        std::cout << "Calories: " << recipe.getCalories() << "\n\n";
    }

    return 0;
}