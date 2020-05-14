#ifndef REN_T
#define REN_T
#include <SDL2/SDL>

typedef struct SDL_instace
{
    SDL_Window *window;
    SDL_Render *renderer;
}instance;

void draw_stuff(SDL_Instance instance)
int init_instance(SDL_Instace *);
#endif