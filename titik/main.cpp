//PROGRAM MEMBUAT TITIK

#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <gl/glut.h>


void Draw() {
glClear(GL_COLOR_BUFFER_BIT);

glPointSize(6.0);
glBegin(GL_POINTS);             // awal kode untuk menggambar
glColor3f(1.0, 0.0, 0.0);       //Warna Merah
glVertex3f(0.5, 0.3, 0.0);

glColor3f(0.0, 1.0, 1.0);       //Warna Cyan
glVertex3f(0.8, 0.5, 0.0);

glColor3f(1.0, 1.0, 0.0);       //Warna Kuning
glVertex3f(0.2, 0.5, 0.0);

glColor3f(0.0, 1.0, 0.0);       //Warna Hijau
glVertex3f(0.8, 0.8, 0.0);

glColor3f(0.0, 0.0, 1.0);       //Warna Biru
glVertex3f(0.2, 0.8, 0.0);

glColor3f(1.0, 0.0, 1.0);       // Warna Magenta
glVertex3f(0.5, 0.95, 0.0);
glEnd();                        // akhir kode untuk menggambar
glFlush();                      // memastikan bahwa kode dieksekusi
}

void Initialize() {
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv) {
glutCreateWindow("Titik");
Initialize();
glutDisplayFunc(Draw);
glutMainLoop();
return 0;
}


