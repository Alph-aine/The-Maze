#ifndef PLAYER_H
#define PLAYER_H


void draw_player(game_instance *sdl, player *player);
void rotate_player(player *player, SDL_Point *mouse);
SDL_Point move_player(player *player);
void slide_on_wall(player *player);
int quadrant_of_angle(int angle, int *resulting_angle);

#endif
