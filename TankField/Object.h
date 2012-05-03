#ifndef _Object_H
#define _Object_H
#include "Texture.h"
#include "Vector2D.h"
#include "Animation.h"


class Object{


public:

	Vector2D position;
	float speed;
	Texture *texture;
	
	Object(Texture *texture);
	//~Object();
	

	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();

	void render();
};


#endif