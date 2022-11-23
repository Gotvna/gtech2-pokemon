#include "SpriteEntity.h"

class AnimatedSpriteEntity : public Entity
{
protected:
	size_t frameCount;
	std::vector<sf::IntRect> animationPos;
	
public:
	AnimatedSpriteEntity(const sf::Texture&, std::vector < sf::IntRect>);
	void nextAnimationSprite();
};

