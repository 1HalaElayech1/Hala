#include <SDL/SDL.h>

void initPerso(Personne *p);

void afficherPerso(Personne p, SDL_Surface * screen);

void deplacerPerso (Personne *p, , int dt);

void animerPerso (Personne* p);

void saut (Personne* p);
