#include "Sprite.h"
#include "Engine.h"

Sprite::Sprite(SDL_Rect src) : src(src)
{
}

Sprite::~Sprite()
{

}

void Sprite::render(SDL_FRect dst)
{
	engine::drawTexture(src, dst);
}

void Sprite::updateSrc(SDL_Rect src)
{
	this->src = src;
}
