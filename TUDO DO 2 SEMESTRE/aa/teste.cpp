#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <SDL/SDL.h>

using namespace std;

// Width & Height of window
#define width 640
#define height 480

// Kill program
void endProgram(int code) {SDL_Quit();    exit(code);}

// Handle SDL keypresses
void handleKeys(SDL_keysym* keysym, bool state) {
    switch(keysym->sym) {
        case SDLK_ESCAPE:    endProgram(0); break;
    }
}

// Process SDL events
void processEvents() {
    SDL_Event event;
    while(SDL_PollEvent(&event)) {
        switch(event.type) {
            case SDL_KEYDOWN:    handleKeys(&event.key.keysym, true ); break;
            case SDL_KEYUP  : handleKeys(&event.key.keysym, false);    break;
            case SDL_QUIT   : endProgram(0); break;
        }
    }
}

void mainLoop() {
    while(true) {
        processEvents();

        glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT); // Clear color and depth buffer
        glLoadIdentity(); // Reset orientation

        // Graphical commands go here

        SDL_GL_SwapBuffers(); // Update screen

    }
}

// Setup OpenGL perspective
void setupOpengl() {
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_DEPTH_TEST);
    gluPerspective(45, (float)width/height, .1, 100);
    glMatrixMode(GL_MODELVIEW);
}

// Init everything
int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO);
    SDL_SetVideoMode(width, height, 24, SDL_OPENGL | SDL_GL_DOUBLEBUFFER);
    setupOpengl();
    mainLoop();
    return 0;
}
