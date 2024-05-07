#include <GL/glut.h>
 
void Tampilan (void)
{
glClear(GL_COLOR_BUFFER_BIT);
//Gambarpersegi panjang berwarna orange
glColor3f(1.0, 0.5, 0.0); 
 glBegin(GL_QUADS);

glVertex2f(0.25, -0.25); // Titik A
        glVertex2f(0.25, 0.25);  // Titik B
        glVertex2f(0.85, 0.25);  // Titik C
        glVertex2f(0.85, -0.25); // Titik D

glVertex2f(1.0, 0.25); glEnd();
glFlush(); glutSwapBuffers();
}
int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA); 
glutInitWindowPosition(400,100);
glutInitWindowSize(500,300); 
glutCreateWindow("Gambar 2"); 
glutDisplayFunc(Tampilan); 
glutMainLoop();
}
