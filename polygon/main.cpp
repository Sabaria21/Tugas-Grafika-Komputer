// PROGRAM MENGGAMBAR GARIS

#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
void mydisplay(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 1.0, 0.0);

 glBegin(GL_POLYGON);
  glVertex2f(0.5, 0.2);
  glVertex2f(0.6, 0.1);
  glVertex2f(0.8, 0.3);
  glVertex2f(0.7, 0.6);
  glVertex2f(0.4, 0.8);
 glEnd();
 glFlush();
}

int main(int argc, char** argv){
 glutCreateWindow("Polygon");
 glutDisplayFunc(mydisplay);
 glutMainLoop();
}
