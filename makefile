game:*.c *.h
	gcc *.h *.c -o GAME -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -g
	./GAME
	xrandr --size 1792x1120

