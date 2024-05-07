#include <GL/glut.h>

void Tampilan(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Background kuning
    glClearColor(1.0, 1.0, 0.0, 1.0); // Set warna background menjadi kuning
    
    // Gambar 10 titik dengan warna coklat
    glColor3f(0.6, 0.3, 0.0); // Warna coklat
    glPointSize(5.0); // Ukuran titik
    
    glBegin(GL_POINTS);
        // Titik 1
        glVertex2f(-0.9, 0.8);
        // Titik 2
        glVertex2f(-0.9, 0.6);
        // Titik 3
        glVertex2f(-0.5, 0.4);
        // Titik 4
        glVertex2f(-0.5, 0.2);
        // Titik 5
        glVertex2f(-0.2, 0.0);
        // Titik 6
        glVertex2f(0.2, 0.0);
        // Titik 7
        glVertex2f(0.4, 0.4);
        // Titik 8
        glVertex2f(0.4, 0.6);
        // Titik 9
        glVertex2f(0.6, 0.9);
        // Titik 10
        glVertex2f(0.6, 0.8);
    glEnd();
    
    glFlush();
    glutSwapBuffers();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(400, 100);
    glutInitWindowSize(500, 300);
    glutCreateWindow("10 Titik di Latar Belakang Kuning dengan Warna Coklat");
    glutDisplayFunc(Tampilan);
    glutMainLoop();
    return 0;
}

