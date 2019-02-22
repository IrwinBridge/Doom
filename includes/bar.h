#ifndef BAR_H
# define BAR_H

# include "definitions.h"

# define BAR			t_bar
# define BAR_FONT		doom->bar.bar_font
# define BAR_FONT_SIZE	doom->bar.font_size
# define BAR_HEALTH		doom->bar.health_icon
# define BAR_AMMO		doom->bar.ammo_icon
# define BAR_COLOR		doom->bar.color
# define BAR_HS			doom->bar.health_string
# define BAR_AS			doom->bar.ammo_string

typedef	struct			s_bar
{
	IMAGE				*health_icon;
	IMAGE				*ammo_icon;
	TTF_Font			*bar_font;
	char				health_string[4];
	char				ammo_string[4];
	SDL_Color			color;
	U8					font_size;
}						t_bar;

#endif