//ET1
void initPerso(Personne *p);
void afficherPerso(Personne p, SDL_Surface * screen);
void afficherPerso(Personne p, SDL_Surface * screen);
void deplacerPerso (Personne *p, , int dt);
void animerPerso (Personne* p);


//ET2
void initBack(Background * b);
void afficherBack(Background b, SDL_Surface * screen);
void animerBackground( Background * e);
int collisionPP( Personne p, SDL_Surface * Masque);
void scrolling (background * b, int direction, int pasAvancement); soit void scrolling (SDL_Rect * b, int direction ,int pasAvancement);


//ET3
void initEnnemi(Ennemi*e);
void afficherEnnemi(Ennemi e, SDL_Surface * screen);
void animerEnnemi( Ennemi * e);
void deplacer( Ennemi * e);
int collisionBB( personne p, Ennemi e) ou int collisionBB( SDL_Rect posp, SDL_Rect pose);
void deplacerIA( Ennemi * e, SDL_Rect posPerso);

//ET4
void initminimap( minimap * m);
void MAJMinimap(perso p , minimap * m, SDL_Rect camera, int redimensionnement);
void afficherminimap (minimap m, SDL_Surface * screen);


//ET5
void afficherEnigme(enigme e, SDL_Surface * screen);
void InitEnigme(enigme * e, char *nomfichier);
void animer (enigme * e);
void sauvegarder (personne p, background b, char * nomfichier) ; int charger ( personne * p, background *b , char * nomfichier);


//ET6
void InitEnigme(enigme * e, char *nomfichier);
void afficherEnigme(enigme e, SDL_Surface * screen);
void animer (enigme * e);
