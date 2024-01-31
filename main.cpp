//main.cpp
#include "main.hpp"
// Include the necessary header file

// console is not a bug, but a feature
// The main function, the entry point of the program
int main() {

    // Create a window with specified dimensions and title
    sf::RenderWindow window(sf::VideoMode(800, 700, 32U), "SFMLTutorial");

    // Create a rectangle shape and an instance of the NewArtO class representing the letter 'L'
    sf::RectangleShape rectangle;
    ArtObjects::NewArtO l_letter(
        { 0.f,0.f },            // Initial position
        { 100.f, 100.f },        // Size of the letter 'L'
        true,                   // feature in future
        0                        // Initial order number
    );

    // Main event loop
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Check if the window is closed
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Clear the window with a white color
        window.clear(sf::Color::White);

        // Draw the letter 'P' using the P_draw method of the NewArtO class
        l_letter.P_draw(rectangle, window);

        // Display the contents of the window
        window.display();
    }

    // End of the program
    return 0;

}