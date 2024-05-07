#include <GL/glut.h>

void Tampilan(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    // Gambar jajargenjang
    glColor3f(1.0, 1.0, 0.0); // Warna kuning
    glBegin(GL_QUADS);
        glVertex2f(-0.75, -0.25); // A
        glVertex2f(0.25, -0.25);  // B
        glVertex2f(0.5, 0.25);    // C
        glVertex2f(-0.50, 0.25);  // D
    glEnd();

    // Gambar garis tepi jajargenjang
    glLineWidth(2.0); // Ketebalan garis
    glColor3f(0.0, 0.0, 1.0); // Warna biru
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.75, -0.25); // A
        glVertex2f(0.25, -0.25);  // B
        glVertex2f(0.5, 0.25);    // C
        glVertex2f(-0.5, 0.25);   // D
    glEnd();

    // Gambar segitiga pertama dengan arsiran biru
    glLineWidth(2.0); // Ketebalan garis
    glColor3f(1.0, 1.0, 0.0); // Warna kuning
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.25, 0.25); // E
        glVertex2f(0.625, 0.25);  // F
        glVertex2f(0.375, 0.5); // G
    glEnd();

    // Gambar garis tepi segitiga pertama
    glLineWidth(2.0); // Ketebalan garis
    glColor3f(0.0, 0.0, 1.0); // Warna biru
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.25, 0.25); // E
        glVertex2f(0.625, 0.25);  // F
        glVertex2f(0.375, 0.5); // G
    glEnd();

    // Gambar segitiga kedua dengan arsiran biru
    glLineWidth(2.0); // Ketebalan garis
    glColor3f(1.0, 1.0, 0.0); // Warna kuning
    glBegin(GL_TRIANGLES);
        glVertex2f(0.125, 0.25); // H
        glVertex2f(0.875, 0.25);  // I
        glVertex2f(0.625, 0.5); // J
    glEnd();

    // Gambar garis tepi segitiga kedua
    glLineWidth(2.0); // Ketebalan garis
    glColor3f(0.0, 0.0, 1.0); // Warna biru
    glBegin(GL_LINE_LOOP);
        glVertex2f(0.125, 0.25); // H
        glVertex2f(0.875, 0.25);  // I
        glVertex2f(0.625, 0.5); // J
    glEnd();

    glFlush();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Jajargenjang dengan Arsiran Garis dan Warna Kuning");
    
    // Set warna background menjadi putih
    glClearColor(1.0, 1.0, 1.0, 1.0);

    glutDisplayFunc(Tampilan);
    glutMainLoop();
    return 0;
}

