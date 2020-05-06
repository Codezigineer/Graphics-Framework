#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <bitset> // For Using "bitset" in "std" Namespace.

namespace graphics // Graphics Namespace.
{
	int numPixels = 0; // Number Of Pixels On Screen.
	
	struct pixel // A Pixel.
	{
		std::bitset<1> red = 0b0; // The Red Part of The Pixel.
		std::bitset<1> green = 0b0; // The Green Part of The Pixel.
		std::bitset<1> blue = 0b0; // The Blue Part of The Pixel.
		std::bitset<1> alpha = 0b1; // The Saturation Part of The Pixel.
		
		std::bitset<8> flags = 0b000; // The 3 flags.
		
		flags |= (red | green | blue | alpha);
		
		std::bitset<1> pixel = (red, green, blue, alpha, flags); // The Pixel. It is Not A Constant Because The Pixel Can be Changed.
		
		pixel |= pixel;
	}
	
	uint_fast8_t turnOnPixelWithColor(std::bitset<1> red, std::bitset<1> green, std::bitset<1> blue, std::bitset<1>t alpha, std::bitset<1> flags) // To be Able To Turn on A Pixel. 
	{
		flags |= (red, green, blue, alpha);

		return flags;
	}
	
	uint_fast8_t turnOffPixel(std::bitset<1> red, std::bitset<1> green, std::bitset<1> blue, std::bitset<1>t alpha, std::bitset<1> flags) // The Arguments Are Masks For The Bits To Put Them In order. Same with function "turnOnPixelWithColor".
	{
		flags &= ~(red, green, blue, alpha);

		return flags;
	}
}

#endif
