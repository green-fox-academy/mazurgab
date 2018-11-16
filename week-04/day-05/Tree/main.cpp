#include <iostream>
#include <SDL.h>
#include <SDL2_gfxPrimitives.h>
#include<math.h>

//Screen dimension constants
const int SCREEN_WIDTH = 720;
const int SCREEN_HEIGHT = 720;

//Draws geometry on the canvas
void draw();

//Starts up SDL and creates window
bool init();

//Frees media and shuts down SDL
void close();

//The window we'll be rendering to
SDL_Window* gWindow = nullptr;

//The window renderer
SDL_Renderer* gRenderer = nullptr;

void draw(int x1, int y1, int x2, int y2, int length, int depth)
{

    if(depth ==2){
        return;
    }

    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0x00, 0xFF );
    SDL_RenderDrawLine(gRenderer, x1, y1, x2, y2);

    int a = x2;
    int b = y2;

    draw(a, b, x2, a-length, length-10, depth + 1);

    int origCoordX = x2;
    y2 = a-length;
    int origCoordY = y2;

    int lengthX = origCoordX - a;
    int lengthY = origCoordY - b;
    draw(a, b, int (a+(origCoordX*cos(0.26))-(lengthY*sin(0.26))), int (b+(lengthX*sin(0.26))+lengthY*cos(0.26)), length-10, depth+1);

    /*alfa = X * pi / 180

    pont1: x1,y1; -eredeti pont
    pont2: x2,y2 -e körül forgatjuk
    forgatás szöge: alfa;

    x=x1-x2;
    y=y1-y2;
    ujx=x2+(x*cos(alfa)-y*sin(alfa));
    ujy=y2+(x*sin(alfa)+y*cos(alfa));*/
}

bool init()
{
    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create window
    gWindow = SDL_CreateWindow( "Tree", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
    if( gWindow == nullptr )
    {
        std::cout << "Window could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create renderer for window
    gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
    if( gRenderer == nullptr )
    {
        std::cout << "Renderer could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Initialize renderer color
    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

    return true;
}

void close()
{
    //Destroy window
    SDL_DestroyRenderer( gRenderer );
    SDL_DestroyWindow( gWindow );
    gWindow = nullptr;
    gRenderer = nullptr;

    SDL_Quit();
}

int main( int argc, char* args[] )
{
    //Start up SDL and create window
    if( !init() )
    {
        std::cout << "Failed to initialize!" << std::endl;
        close();
        return -1;
    }

    //Main loop flag
    bool quit = false;

    //Event handler
    SDL_Event e;

    //While application is running
    while( !quit ) {
        //Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            //User requests quit
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        //Clear screen
        SDL_SetRenderDrawColor(gRenderer, 0, 51, 60, 0xFF);
        SDL_RenderClear(gRenderer);

        draw(360, 600, 360, 500, 100, 0);

        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}
