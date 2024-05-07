#include <GL/glut.h>

void Tampilan(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    // Gambar trapesium berwarna abu-abu
    glColor3f(0.5, 0.5, 0.5); // Warna abu-abu dengan nilai R = G = B = 0.5
    glBegin(GL_QUADS);
        glVertex2f(0.2, -0.2); // Titik A
        glVertex2f(0.8, -0.2); // Titik B
        glVertex2f(0.6, 0.2);  // Titik C
        glVertex2f(0.4, 0.2);  // Titik D
    glEnd();
    glFlush();
    glutSwapBuffers();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(400, 100);
    glutInitWindowSize(500, 300);
    glutCreateWindow("Gambar Trapesium Abu-Abu");
    glutDisplayFunc(Tampilan);
    glutMainLoop();
    return 0;
}

