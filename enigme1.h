#include <SDL/SDL.h>

void afficherEnigme(enigme e, SDL_Surface * screen);

void InitEnigme(enigme * e, char *nomfichier);

void animer (enigme * e);

void sauvegarder (personne p, background b, char * nomfichier) ; int charger ( personne * p, background *b , char * nomfichier);
