#include <iostream>
#include <cstdint>
#include "graphics/graphics.h"

int main()
{
	std::cout << "graphics-gpu: Starting Display...\n";
	screen_init(color::white); // Initalize thie screen.
	make_pixel(color::cyan);
	return 0;
}