<<<<<<< HEAD
#include <SDL/SDL.h>

void initEnnemi(Ennemi*e);

void afficherEnnemi(Ennemi e, SDL_Surface * screen);

void animerEnnemi( Ennemi * e);

void deplacer( Ennemi * e);

int collisionBB( personne p, Ennemi e) ou int collisionBB( SDL_Rect posp, SDL_Rect pose);

void deplacerIA( Ennemi * e, SDL_Rect posPerso);
=======
Typedef struct ennemi
{
    SDL_Surface* image;
    int speed;
	  int dir;
	  int attack;
    SDL_Rect pos;
    SDL_Event event;
    int vie;
}Ennemi;
void initEnnemi(Ennemi* e);
void afficherEnnemi(Ennemi e, SDL_Surface* screen);
void animerEnnemi(Ennemi* e);
void deplacer(Ennemi* e);
int collisionBB(SDL_Rect posp, SDL_Rect pose);
void deplacerIA(Ennemi* e , SDL_Rect posePerso);
void libererennemi(Ennemi e);
>>>>>>> f5e2f9e081bf0c7236515e901c7b8a351a66c817
