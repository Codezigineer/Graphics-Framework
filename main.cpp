#include <iostream>
#include <cstdint>
#include "graphics/graphics.h"

int main()
{
	uint_fast8_t somePixel = graphics::turnOnPixelWithColor(0b100010, 0b1000011, 0b1000111, 0b1001111, 0b111111);

	graphics::numPixels = 978;
}