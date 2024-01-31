#include "main.hpp"

#if _DEBUG
int main() {
#else
int WinMain() {
#endif
    sf::RenderWindow window(sf::VideoMode(800, 700, 32U), "SFMLTutorial");

    sf::RectangleShape rectangle;
    ArtObjects::NewArtO l_letter(
        { 0.f,0.f }, 
        { 100.f, 100.f },
        false
);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear(sf::Color::White);

        l_letter.L_draw(rectangle, window);

        window.display();
    }
    return 0;
}