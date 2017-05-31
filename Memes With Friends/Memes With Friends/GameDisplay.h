#pragma once

#include <stdio.h>
#include <allegro5/allegro.h>
#include <tuple>

class GameDisplay
{
private:
	const int SCREEN_W = 1920;
	const int SCREEN_H = 1080;
	ALLEGRO_COLOR BACKGROUND_COLOR;
	ALLEGRO_DISPLAY_MODE disp_data;
	ALLEGRO_DISPLAY *display = NULL;
public:
	GameDisplay();
	~GameDisplay();
	bool valid_display();
	ALLEGRO_DISPLAY *get_display();
	void set_background_color(ALLEGRO_COLOR color);
	ALLEGRO_COLOR get_background_color();
	void clear_display();
	std::tuple<int, int> convert_coordinates(int x, int y);
};
