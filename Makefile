NAME = doom-nukem
SRC = src/*.c TgaReader/*.c src/menu/*.c src/render/*.c src/control/*.c src/map/*.c src/editor/*.c
OBJ = $(SRC:.c = .o)
MATH = -lm
ifeq ($(shell uname -s), Linux)
INC = -I includes -I TgaReader/includes -I src/menu/includes -I src/editor/includes
SDL = -lSDL2 -lSDL2_mixer -lSDL2_ttf
else ifeq($(OS), Windows_NT)
INC = -I includes -I TgaReader/includes -I frameworks/Windows/include/SDL2 -I frameworks/Windows/Mixer/include/SDL2 -I frameworks/Windows/ttf/include/SDL2
SDL = -L./frameworks/Windows/lib -lSDL2 -L./frameworks/Windows/Mixer/lib -lSDL2_mixer -L./frameworks/Windows/ttf/lib -lSDL2_ttf
else
INC = -I includes -I TgaReader/includes -I src/menu/includes \
		-I frameworks/SDL2_mixer.framework/Versions/A/Headers \
		-I frameworks/SDL2.framework/Versions/A/Headers \
		-I frameworks/SDL2_ttf.framework/Versions/A/Headers \
		-I src/editor/includes
SDL = -F frameworks/ -framework SDL2 -F frameworks/ -framework SDL2_mixer -F frameworks/ -framework SDL2_ttf
endif
CC = gcc
$(NAME): $(OBJ)
	$(CC) $(OBJ) $(INC) $(MATH) $(SDL) -o $(NAME)
all: $(NAME)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
