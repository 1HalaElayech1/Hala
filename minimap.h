<<<<<<< HEAD
#include <SDL/SDL.h>

void initminimap( minimap * m);

void MAJMinimap(perso p , minimap * m, SDL_Rect camera, int redimensionnement);

void afficherminimap (minimap m, SDL_Surface * screen);
=======
struct minimap
{
	SDL_Surface* mini_map;
	SDL_Rect pos_minimap;
	SDL_Surface* mini_hero;
	SDL_Rect pos_minihero;
	
	
};
typedef struct minimap minimap; 


void init_minimap(minimap* mp);
void blit_minimap( minimap* mp,SDL_Surface *screen);
void dep_mini_hero (SDL_Rect* pos_perso,minimap mp , SDL_Rect camera,int redimensionnement,int sens);
void free_minimap(minimap* mp);

>>>>>>> f5e2f9e081bf0c7236515e901c7b8a351a66c817
