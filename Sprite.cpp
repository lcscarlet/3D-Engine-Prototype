#include "Sprite.h"

Sprite::Sprite()
{}


Sprite::~Sprite() {
	_vboID = 0;

}

void Sprite::init(int x, int y, int width, int height) {
	_x = x;
	_y = y;
	_width = width;
	_height = height;

}

void Sprite::draw();