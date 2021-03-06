/*
 * Palette.cpp
 *
 *  Created on: Dec 16, 2013
 *      Author: pieter
 */

#include "Palette.h"
#include <iostream>

void createPalette()  {
	std::cout << "Palette of 256 colors: " << std::endl;

	int R[] = { 0, 12, 24, 36, 48, 60 };
	int G[] = { 0, 12, 24, 36, 48, 60 };
	int B[] = { 0, 10, 20, 30, 40, 50, 60 };

	int index = 0;
	for (int r = 0; r < 6; r++) {
		for (int g = 0; g < 6; g++) {
			for (int b = 0; b < 7; b++) {
				// In total: 6*6*7 = 252 colors

				std::cout << "RGB " << index << " = " << *(R + r) << " " << G[g] << " " << B[b] << std::endl;
				index++;
			}
		}
	}
}

/**
 * Easier implementation for the assembly language. The output is the same as "createPalette".
 */
void createPaletteBis() {
	std::cout << "Palette of 256 colors: " << std::endl;
	for (int r = 0; r <= 60; r = r + 12) {
		for (int g = 0; g <= 60; g = g + 12) {
			for (int b = 0; b <= 60; b = b + 10) {
				// In total: 6*6*7 = 252 colors

				std::cout << "RGB = " << r << " " << g << " " << b << std::endl;
			}
		}
	}
}

/**
 * Initalisies the palette and displays also the correspoding YUB values.
 */
void createPaletteTris() {
	std::cout << "Palette of 256 colors: " << std::endl;
	for (int r = 0; r <= 60; r = r + 12) {
		for (int g = 0; g <= 60; g = g + 12) {
			for (int b = 0; b <= 60; b = b + 10) {
				// In total: 6*6*7 = 252 colors

				std::cout << "RGB = " << r << " " << g << " " << b << " 	In YCbCr = " << getY(r, g, b) << getCb(r, g, b) << getCr(r, g, b) << std::endl;
			}
		}
	}
}

int getY(int R, int G, int B) {

}
int getCb(int R, int G, int B) {

}
int getCr(int R, int G, int B) {

}
