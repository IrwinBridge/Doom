#include "doom_nukem.h"

int		main(void)
{
	ENGINE	doom;

	run_engine(&doom);
	while (doom.mode != QUIT)
	{
		count_delta_time(&doom);
		parse_events(&doom);
		select_game_mode(&doom);
	}
	stop_engine(&doom);
	exit(OK);
}
