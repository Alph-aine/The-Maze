#ifndef TEXTURE_H
#define TEXTURE_H

void shade_walls(SDL_Color *color_ref, int orientation);
void textured_sky(game_instance *sdl, map_t *map);
void texture_walls(game_instance *sdl, double line_height, int column,
		int y_pos, uint8_t alpha);
int render_thread(void *td);
void weapon_gun(game_instance *sdl, map_t *map);


#endif
