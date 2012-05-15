#include "Tank.h"


Tank::Tank(Texture* texture, Weapon* weapon, Vector2D tankPos, Vector2D weaponPos) : Object(texture, tankPos), health(5) {
	this->weapon = weapon;
	weaponPosition = weaponPos;
}

float Tank::getWeaponPositionX(){
	return weaponPosition.x;
}
float Tank::getWeaponPositionY(){
	return weaponPosition.y;
}

bool Tank::isDead(){
	if(this->health == 0){
		return true;
	}
	return false;
}

void Tank::fire(){
	this->weapon->fireMissile();
}

void Tank::moveUp(){
	velocity = Vector2D(0, -1) * speed;
}

void Tank::moveDown(){
	velocity = Vector2D(0, 1) * speed;
}

void Tank::moveLeft(){
	velocity = Vector2D(-1, 0) * speed;
}

void Tank::moveRight(){
	velocity = Vector2D(1, 0) * speed;
}

void Tank::stop(){
	velocity = Vector2D(0, 0);
	
}

void Tank::update(float timeSinceLastTime){

	position += velocity * timeSinceLastTime;

	texture->update(timeSinceLastTime);

	weapon->setPositionX((this->position.x - weaponPosition.x));
	weapon->setPositionY((this->position.y - weaponPosition.y));

	weapon->update(timeSinceLastTime);

}

void Tank::render(){
	this->texture->draw((int)this->position.x,(int)this->position.y);
	weapon->getTexture()->draw((int)weapon->getPositionX(),(int)weapon->getPositionY());
}

void Tank::onCollision(Object *object) {
	if (dynamic_cast<Missile*>(object) != NULL){
		this->health--;
	}
}