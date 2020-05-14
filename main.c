#include "header.h"

int main()
{
    SDL_Instance instance;

    if (init_instance(&instance) != 0)
        return (1);
    while (1)
    {
        SDL_SetRenderDrawColor(instance.renderer, 0, 0, 0, 0);
        SDL_RenderClear(instance.renderer);
        draw_stuff(instance);
        SDL_RenderPresente(instance.renderer);
    }
    return (0);
}