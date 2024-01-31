#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
//---------------------------------------------------
#define pos_x(object) ( object.getPosition().x )
#define pos_y(object) ( object.getPosition().y )
#define size_x(object) ( object.getSize().x )
#define size_y(object) ( object.getSize().y )

//number shift right along the abscissa axis
#define xOffsetRight(object)  \
pos_x(object) + size_x(object)\
,							  \
pos_y(object) +	0			  \
//number shift left along the abscissa axis
#define xOffsetLeft(object)   \
pos_x(object) - size_x(object)\
,							  \
pos_y(object) + 0			  \
//number shift up along the ordinate axis
#define yOffsetUp(object)     \
pos_x(object) + 0			  \
,							  \
pos_y + size_y				  \
//number shift down along the ordinate axis
#define yOffsetDown(object)   \
pos_x(object) + 0			  \
,							  \
pos_y(object) - size_y(object)\
//---------------------------------------------------


namespace ArtObjects {
/*
* ���� ����� ������ ����� :
* ���������� ����������� ����� ����������� �������
* ����� ����� ��������� ������������ ������������ ��������� � ���������� ��������� �������� ����� ������
*/
class NewArtO {
//���������� ������� � �������������
public:
	NewArtO(sf::Vector2f xy_pos, sf::Vector2f size, bool outline);
	//����� ��������� ����� "L"
	void L_draw(sf::RectangleShape& rectangle, sf::RenderWindow& window);
protected:
	sf::Vector2f xy_pos;
	sf::Vector2f size;
	bool outline;
};
}