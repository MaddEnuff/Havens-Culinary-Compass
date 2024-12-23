Havens' Culinary Compass
Welcome to Havens' Culinary Compass! This application helps you discover delicious recipes based on the ingredients you have at home. It also provides nutritional information and checks for potential allergens to ensure a safe and enjoyable cooking experience.

Features
Ingredient Input: Enter the ingredients you have, and the app will suggest recipes you can make.
Allergy Cautions: Input any allergies, and the app will filter out recipes containing those allergens.
Nutritional Information: Get detailed nutritional information for each recipe, including calorie counts.
Recipe Recommendations: Receive personalized recipe suggestions based on your available ingredients and dietary restrictions.
How to Use
Run the Application:

Ensure you have the necessary files (main.cpp, Recipe.cpp, Recipe.h, RecipeDatabase.cpp, RecipeDatabase.h, utils.h, and recipes.txt) in the same directory.
Compile the application using your preferred C++ compiler (e.g., g++, Visual Studio).
Input Ingredients:

When prompted, enter the ingredients you have, one at a time. Type done when you have finished entering ingredients.
Input Allergies:

When prompted, enter any allergies you have, one at a time. Type done when you have finished entering allergies.
View Recommended Recipes:

The application will display a list of recommended recipes based on your inputs, along with their ingredients, instructions, nutritional information, and calorie counts.
Example Usage
Enter ingredients you have (type 'done' to finish): 
pasta
tomato sauce
cheese
done

Enter any allergies you have (type 'done' to finish): 
peanut
done

Recommended Recipes:
1. Pasta Delight
   Ingredients: pasta, tomato sauce, cheese
   Instructions: Boil pasta. Add sauce. Top with cheese.
   Nutritional Info: Calories: 400
   Calories: 400
Project Structure
HavensCulinaryCompass/
├── main.cpp
├── Recipe.h
├── Recipe.cpp
├── RecipeDatabase.h
├── RecipeDatabase.cpp
├── utils.h
└── recipes.txt
Compilation Instructions
Using g++ (GNU Compiler Collection)
g++ -o HavensCulinaryCompass main.cpp Recipe.cpp RecipeDatabase.cpp
./HavensCulinaryCompass
Using Visual Studio
Open Visual Studio and create a new project.
Add all source and header files to the project.
Build the project (Build > Build Solution).
Run the executable from the Debug or Release folder.
Reflection
Summarize the project and what problem it was solving.
Havens' Culinary Compass is a C++ application designed to help users find recipes based on the ingredients they have at home. It also provides nutritional information and checks for potential allergens. The problem it solves is the common dilemma of not knowing what to cook with available ingredients while ensuring the meal is safe and nutritious.

What did you do particularly well?
I particularly excelled at implementing the recipe recommendation algorithm, ensuring it efficiently matches available ingredients with recipes while filtering out those containing allergens. The user input handling and data processing were also well-executed, providing a smooth user experience.

Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
The code could be enhanced by:

Optimizing the Recommendation Algorithm: Using more advanced data structures to improve the efficiency of ingredient matching.
Improving Security: Adding input validation to prevent potential security vulnerabilities from user inputs.
Enhancing User Interface: Developing a graphical user interface (GUI) for a more user-friendly experience.
These improvements would make the code more efficient, secure, and user-friendly.

Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
The most challenging part was implementing the allergy filtering in the recommendation algorithm. I overcame this by thoroughly testing different scenarios and using debugging tools to trace and fix issues. Adding resources like online forums, documentation, and peer reviews to my support network was crucial in resolving these challenges.

What skills from this project will be particularly transferable to other projects or coursework?
Skills that are transferable include:

Problem-Solving: Tackling complex issues and finding effective solutions.
Programming Languages: Proficiency in C++ and understanding of its applications.
Code Documentation: Writing clear and comprehensive documentation.
Collaboration: Working with others and integrating feedback.
How did you make this program maintainable, readable, and adaptable?
To ensure the program is maintainable, readable, and adaptable, I:

Used Clear Naming Conventions: This makes the code easier to understand.
Added Comprehensive Comments: Explaining the purpose and functionality of code sections.
Modular Design: Breaking down the program into smaller, reusable components.
Consistent Formatting: Following a consistent coding style throughout the project.
These practices help in maintaining the code, making it easier for others (and my future self) to understand and modify.

Contributing
We welcome contributions to improve Havens' Culinary Compass! Feel free to fork the repository and submit pull requests with your enhancements.

License
This project is licensed under the MIT License. See the LICENSE file for details.

Enjoy cooking with Havens' Culinary Compass! 🍽️😊
