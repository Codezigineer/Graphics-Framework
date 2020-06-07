#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <bitset> // For Using "bitset" in "std" Namespace.

enum class color {
	white,
	black,
	green,
	pink,
	cyan,
	blue,
	red, 
	yellow,
	orange,
	purple,
	brown,
	lime,
	gray,
	auqa,
	silver,
	gold,
	violet,
	mauve,
	lavender,
	olive,
	indigo,
	burgundy,
	tan,
	darkblue,
	brightblack,
	brightwhite,
	brighttan,
	brightblue,
	brightolive,
	brightgold,
	brightgreen,
	brightpink,
	brightcyan,
	brightred,
	brightyellow,
	brightorange,
	brightpurple,
	brightbrown,
	brightlime,
	brightgray,
	brightauqa,
	brightsilver,
	brightviolet,
	brightmauve,
	brightlavender,
	brightindigo,
	brightburgundy,
	pixeloff // for pixels that are off.
};

bool screeninit = new bool; //Variable showing the screen is initalized.

#define nothing ((void *))

typedef struct
{
	color colorid;
	bool isactive;
} pixel;

pixel pixels[10463] = {};

void screen_init(color default_color)
{
	screeninit = true;
	
	size_t amount_of_pixels = sizeof(pixels);
	
	for (unsigned int indexNum = 0; indexNum > amount_of_pixels; indexNum++)
	{
		pixel some_pixel = pixels[indexNum];
		some_pixel.colorid = default_color;
	}
}

void screen_deinit()
{
	screeninit = false;
}

int pixNum = 0;

void make_pixel(color col)
{
	pixel apixel;
	apixel.colorid = col;
	apixel.isactive = true;
	pixels[pixNum] = apixel;
}



#endif