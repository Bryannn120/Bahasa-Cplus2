#include <GL/glut.h>
#include <math.h>

float arrowX = -0.9f; // Posisi awal X panah
float arrowY = 0.0f;  // Posisi awal Y panah
float targetX = 0.8f; // Posisi X sasaran
float targetY = 0.0f; // Posisi Y sasaran
float arrowSpeed = 0.02f; // Kecepatan panah

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Gambar panah
    glColor3f(1.0f, 0.0f, 0.0f); // Warna merah
    glBegin(GL_TRIANGLES);
        glVertex2f(arrowX, arrowY);              // Ujung panah
        glVertex2f(arrowX - 0.05f, arrowY - 0.02f); // Kiri bawah
        glVertex2f(arrowX - 0.05f, arrowY + 0.02f); // Kiri atas
    glEnd();
    
    // Gambar sasaran
    glColor3f(0.0f, 0.0f, 1.0f); // Warna biru
    glBegin(GL_QUADS);
        glVertex2f(targetX - 0.05f, targetY - 0.1f); // Kiri bawah
        glVertex2f(targetX + 0.05f, targetY - 0.1f); // Kanan bawah
        glVertex2f(targetX + 0.05f, targetY + 0.1f); // Kanan atas
        glVertex2f(targetX - 0.05f, targetY + 0.1f); // Kiri atas
    glEnd();
    
    glutSwapBuffers();
}

void update(int value) {
    // Pergerakan panah ke arah target
    if (arrowX < targetX) {
        arrowX += arrowSpeed;
    }
    
    glutPostRedisplay();
    glutTimerFunc(10, update, 0);
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
}

void shoot() {
    arrowX = -0.9f; // Kembalikan panah ke posisi awal
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case ' ': // Tombol spasi
            shoot(); // Panggil fungsi shoot() untuk menembak
            break;
    }
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Panah Menembak Sasaran");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(10, update, 0);
    glutKeyboardFunc(keyboard); // Callback untuk menangani input keyboard
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Warna background putih
    glutMainLoop();
    return 0;
}

