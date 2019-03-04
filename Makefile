TARGET = doom-nukem

SEARCH_WILDCARD =	dependencies/TgaReader/*.c \
					engine/window/src/*.c \
					engine/scene_manager/src/*.c \
				  	engine/data_structures/vector/src/*.c \
					engine/data_structures/queue/src/*.c \
					engine/timer/src/*.c \
					engine/events/src/*.c \
				  	engine/io/src/*.c \
					engine/audio/src/*.c \
					engine/graphics/drawer/src/*.c \
				  	engine/graphics/textures/src/*.c \
				  	engine/graphics/render/src/*.c \
					engine/map/src/*c \
					engine/entity/src/*.c \
					game/src/*.c \
					game/src/loop/*.c


SRCS = $(wildcard $(SEARCH_WILDCARD))
OBJ = $(SRCS:.c=.o)

HEADERS = -I dependencies/TgaReader/includes \
		  -I engine \
		  -I engine/window/include \
		  -I engine/scene_manager/include \
		  -I engine/data_structures/types \
		  -I engine/data_structures/vector/include \
		  -I engine/data_structures/queue/include \
		  -I engine/timer/include \
		  -I engine/events/include \
		  -I engine/io/include \
		  -I engine/audio/include \
		  -I engine/graphics/drawer/include \
		  -I engine/graphics/textures/include \
		  -I engine/graphics/render/include \
		  -I engine/map/include \
		  -I engine/entity/include \
		  -I game/include

ifeq ($(shell uname -s), Linux)
SDL2 =

FRAMES = -lSDL2 -lSDL2_mixer -lSDL2_ttf
else
SDL2 = -I ~/Library/Frameworks/SDL2.framework/Versions/A/Headers \
	   -I ~/Library/Frameworks/SDL2_image.framework/Versions/A/Headers \
	   -I ~/Library/Frameworks/SDL2_ttf.framework/Versions/A/Headers \
	   -I ~/Library/Frameworks/SDL2_mixer.framework/Versions/A/Headers

FRAMES = -F ~/Library/Frameworks/ -framework SDL2 \
		 -F ~/Library/Frameworks/ -framework SDL2_image \
		 -F ~/Library/Frameworks/ -framework SDL2_ttf \
		 -F ~/Library/Frameworks/ -framework SDL2_mixer
endif

FLAGS = -lm

all: $(TARGET)

$(TARGET): $(OBJ)
	gcc -o $@ $(OBJ) $(FRAMES) $(FLAGS)

%.o: %.c
	gcc -c $< -o $@ $(HEADERS) $(SDL2) $(FLAGS) -F ~/Library/Frameworks

.PHONY: clean
clean:
	rm -Rf $(OBJ)

.PHONY: fclean
fclean: clean
	rm -Rf $(TARGET)
