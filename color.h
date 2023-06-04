#ifndef COLOR_H
#define COLOR_H

typedef struct Color {
	const u8 red;
	const u8 green;
	const u8 blue;
	const u8 alpha;
} Color;

const Color HIGHLIGHT_COLOR = {0x28,0x28,0x28,0x99};
const Color WHITE_COLOR = {0xFF, 0xFF, 0xFF, 0xFF};

const Color BASE_COLORS[] = {
	{0x28, 0x28, 0x28, 0xFF},
	{0x2D, 0x99, 0x99, 0xFF},
	{0x99, 0x99, 0x2D, 0xFF},
	{0x99, 0x2D, 0x99, 0xFF},
	{0x2D, 0x99, 0x51, 0xFF},
	{0x99, 0x2D, 0x2D, 0xFF},
	{0x2D, 0x63, 0x99, 0xFF},
	{0x99, 0x63, 0x2D, 0xFF},
	{0xFF, 0xFF, 0xFF, 0xFF},
};

const Color LIGHT_COLORS[] = {
	{0x28, 0x28, 0x28, 0xFF},
	{0x44, 0xE5, 0xE5, 0xFF},
	{0xE5, 0xE5, 0x44, 0xFF},
	{0xE5, 0x44, 0xE5, 0xFF},
	{0x44, 0xE5, 0x7A, 0xFF},
	{0xE5, 0x44, 0x44, 0xFF},
	{0x44, 0x95, 0xE5, 0xFF},
	{0xE5, 0x95, 0x44, 0xFF},
	{0xFF, 0xFF, 0xFF, 0xFF},
};

const Color DARK_COLORS[] = {
	{0x28, 0x28, 0x28, 0xFF},
	{0x1E, 0x66, 0x66, 0xFF},
	{0x66, 0x66, 0x1E, 0xFF},
	{0x66, 0x1E, 0x66, 0xFF},
	{0x1E, 0x66, 0x36, 0xFF},
	{0x66, 0x1E, 0x1E, 0xFF},
	{0x1E, 0x42, 0x66, 0xFF},
	{0x66, 0x42, 0x1E, 0xFF},
	{0xFF, 0xFF, 0xFF, 0xFF},
};

const Color CLASSIC_COLORS[] = {
	{0xFF, 0x00, 0x00, 0xFF}, // red
	{0x00, 0xFF, 0x00, 0xFF}, // green
	{0x00, 0x00, 0xFF, 0xFF}, // blue
	{0xFF, 0xFF, 0x00, 0xFF}, // yellow
	{0x00, 0xFF, 0xFF, 0xFF}, // magenta
	{0xFF, 0x00, 0xFF, 0xFF}, // aqua
};

#endif
