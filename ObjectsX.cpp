//ObjectsX.cpp
#include "ObjectsX.hpp"
#define updateWindowShape(window, object) window.draw(object);

//For convenience. Only for this file!!!
#define forThisFileUpdateWindowShape window.draw(rectangle);

//Class constructor

				 //x y				  //rect size x y,	 //with(out) outline
ArtObjects::NewArtO::NewArtO(sf::Vector2f xy_pos, sf::Vector2f size, bool outline, int NumberInOrder) : xy_pos(xy_pos), size(size), outline(outline), NumberInOrder(0)
{
	//TODO: Make the size of the figure parts relative to the window size 
	

	//TODO: Implement resetting along the Y-axis and shifting to the right along the X-axis from the last square
	NumberInOrder++;
};
//Get the sequential number of the object
int ArtObjects::NewArtO::getNumberInOrder() const {
	return NumberInOrder;
}
//Draw the letter "L"
void ArtObjects::NewArtO::L_draw(sf::RectangleShape& rectangle, sf::RenderWindow& window) const {
	//Prepare the square
	rectangle.setFillColor(sf::Color::Black);
	rectangle.setSize(size);
	//Set the position of the starting square
	rectangle.setPosition(xy_pos);

	//Starting square
	updateWindowShape(window, rectangle);
	//Start drawing the next squares relative to the first one 
	rectangle.setPosition({ yOffsetDown(rectangle) });	updateWindowShape(window, rectangle);
	rectangle.setPosition({ yOffsetDown(rectangle) });	updateWindowShape(window, rectangle);
	rectangle.setPosition({ xOffsetRight(rectangle) });	updateWindowShape(window, rectangle);
	rectangle.setPosition({ xOffsetRight(rectangle) });	updateWindowShape(window, rectangle);


}
//Draw the letter "P"
void ArtObjects::NewArtO::P_draw(sf::RectangleShape& rectangle, sf::RenderWindow& window) const {
	//Prepare the square
	rectangle.setFillColor(sf::Color::Black);
	rectangle.setSize(size);

	//Set the position of the starting square
	rectangle.setPosition(xy_pos);

	//Starting square
	updateWindowShape(window, rectangle);
	//Start drawing the next squares relative to the first one 
	rectangle.setPosition({ xOffsetRight(rectangle) });	forThisFileUpdateWindowShape
	rectangle.setPosition({ yOffsetDown(rectangle) });	forThisFileUpdateWindowShape
	rectangle.setPosition({ xOffsetLeft(rectangle) });	forThisFileUpdateWindowShape
	rectangle.setPosition({ yOffsetDown(rectangle) });	forThisFileUpdateWindowShape
}