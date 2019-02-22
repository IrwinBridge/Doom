#include "doom_nukem.h"

void		init_bar(ENGINE *doom)
{
	BAR_FONT = TTF_OpenFont("fonts/14611.otf", BAR_FONT_SIZE);
	SDL_itoa(100, BAR_HS, 10);
	SDL_itoa(16, BAR_AS, 10);
}

void		close_bar(ENGINE *doom)
{
	TTF_CloseFont(BAR_FONT);
	free_image(BAR_HEALTH);
	free_image(BAR_AMMO);
	if (BAR_HS)
		free(BAR_HS);
	if (BAR_AS)
		free(BAR_AS);
}

static void	set_bar_color(ENGINE *doom)
{
	if (HEALTH > 70)
	{
		BAR_COLOR.r = 0;
		BAR_COLOR.g = 213;
		BAR_COLOR.b = 0;
	}
	else if (HEALTH > 35)
	{
		BAR_COLOR.r = 220;
		BAR_COLOR.g = 189;
		BAR_COLOR.b = 0;
	}
	else
	{
		BAR_COLOR.r = 148;
		BAR_COLOR.g = 23;
		BAR_COLOR.b = 0;	
	}
	
}

void		set_bar_params(ENGINE *doom, U8 *health, U8 *ammo)
{
	if (health)
		SDL_itoa(*health, BAR_HS, 10);
	if (ammo)
		SDL_itoa(*ammo, BAR_AS, 10);

}

void		show_bar(ENGINE *doom)
{
	BAR_FONT_SIZE = WINDOW_HEIGHT / 40;
	set_bar_color(doom);
	

		
}

