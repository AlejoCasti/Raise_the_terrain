#include "header.h"

int init_instance(SDL_Instance *inst)
{
    if (SDL_init(SDL_INIT_VIDEO) != 0)
    {
        fprintf(stderr,"error");
        return (1);
    }
    inst->window = SDL_CreateWindow("SDL2 \\o/", SDL_WINDOWSPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, 1260, 720, 0);
    if (inst->window == NULL)
    {
        fprintf(stderr, "SDL_CreateWindow Error: ");
        SDL_Quit();
        return (1);
    }
    inst->render = SDL_CreateRenderer(instance->window, -1,
        SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (inst->renderer == NULL)
    {
        SDL_DestroyWindow(instance->window);
        fprintf(stderr,"Error");
        SDL_Quit();
        return (1);
    }
    return (0);
}

void draw_stuff(SDL_Instance instance)
{
    SDL_SetRenderDrawColor(instance.renderer, 0xFF, 0xFF, 0xFF, 0xFF);
    SDL_RenderDrawLine(instance.renderer, 10, 10, 100, 100);
}