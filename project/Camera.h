#include "gameObject.h"

class Camera : public GameObject {

public:

	void update(const float _dt, int _windowWidth, int _windowHeight) override;
	int windowWidth;
	int windowHeight;
};