#include <SDL/SDL.h>

void initBack(Background * b);

void afficherBack(Background b, SDL_Surface * screen);

void animerBackground( Background * e);

int collisionPP( Personne p, SDL_Surface * Masque);

void scrolling (background * b, int direction, int pasAvancement); soit void scrolling (SDL_Rect * b, int direction ,int pasAvancement);
