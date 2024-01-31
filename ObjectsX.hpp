//ObjectsX.hpp
#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
//---------------------------------------------------
#define pos_x(object) ( object.getPosition().x )
#define pos_y(object) ( object.getPosition().y )
#define size_x(object) ( object.getSize().x )
#define size_y(object) ( object.getSize().y )

//------------------------x------------------------

// Number shift right along the abscissa axis
#define xOffsetRight(object)  \
pos_x(object) + size_x(object)\
,							  \
pos_y(object) + 0			  \
// Number shift left along the abscissa axis
#define xOffsetLeft(object)   \
pos_x(object) - size_x(object)\
,							  \
pos_y(object) + 0			  \

//------------------------y------------------------

// Number shift up along the ordinate axis
#define yOffsetUp(object)     \
pos_x(object) + 0			  \
,							  \
pos_y(object) - size_y(object)\
// Number shift down along the ordinate axis
#define yOffsetDown(object)   \
pos_x(object) + 0			  \
,							  \
pos_y(object) + size_y(object)\
//---------------------------------------------------

namespace ArtObjects {
	/*
	* The idea behind this class:
	* The constructor is called by defining an object.
	* Then, the parameters are set through the constructor arguments,
	* and the drawing of objects occurs through methods.
	*/
	class NewArtO {
		// Declaration of methods and constructors
	public:
		NewArtO(sf::Vector2f xy_pos, sf::Vector2f size, bool outline, int NumberInOrder);
		// Method to draw the letter "L"
		void L_draw(sf::RectangleShape& rectangle, sf::RenderWindow& window) const;
		// Method to draw the letter "P"
		void P_draw(sf::RectangleShape& rectangle, sf::RenderWindow& window) const;
		int getNumberInOrder() const;
	protected:
		sf::Vector2f xy_pos;
		sf::Vector2f size;
		bool outline;
		
	private:
		int NumberInOrder;
	};
	
}  // namespace ArtObjects