#include "ObjectsX.hpp"


//Конструктор класса

				 //x y				  //rect size x y,	 //with(out) outline
ArtObjects::NewArtO::NewArtO(sf::Vector2f xy_pos, sf::Vector2f size, bool outline) : xy_pos(xy_pos), size(size), outline(outline)
{
	//TODO: Сделать размер частей фигуры относительно размера окна 

}

//Определение класса
class NewArtO {
	
protected:
	//Структура фигуры
	sf::Vector2f xy_pos;
	sf::Vector2f size;
	bool outline;
	
public:
	// Определение методов
	void L_draw(sf::RectangleShape& rectangle, sf::RenderWindow& window){
		
		rectangle.setSize(size);
		rectangle.setFillColor(sf::Color::Black);
		rectangle.setPosition(xy_pos);
		window.draw(rectangle);

		rectangle.setPosition({ xOffsetRight(rectangle) });
		window.draw(rectangle);

		rectangle.setPosition({ yOffsetDown(rectangle) });
		window.draw(rectangle);

		rectangle.setPosition({ yOffsetDown(rectangle) });
		window.draw(rectangle);
	
		
		
	}

	


};
