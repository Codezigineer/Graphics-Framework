#ifndef GRAPHICS_H
#define GRAPHICS_H

namespace graphics // Graphics Namespace.
{
	int numPixels = 0; // Number Of Pixels On Screen.

	uint_fast8_t turnOnPixelWithColor(uint_fast8_t red, uint_fast8_t green, uint_fast8_t blue, uint_fast8_t alpha, uint_fast8_t flags) // To be Able To Turn on A Pixel. 
	{
		flags |= (red, green, blue, alpha);

		return flags;
	}

	uint_fast8_t turnOffPixel(uint_fast8_t red, uint_fast8_t green, uint_fast8_t blue, uint_fast8_t alpha, uint_fast8_t flags) // The Arguments Are Masks For The Bits To Put Them In order. Same with function "turnOnPixelWithColor".
	{
		flags &= ~(red, green, blue, alpha);

		return flags;
	}
}

#endif