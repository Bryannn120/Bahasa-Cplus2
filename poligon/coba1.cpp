#include <GL/glut.h>

void Tampilan(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    // Gambar segi enam tidak beraturan dengan warna coklat
    glColor3f(0.8, 0.4, 0.0); // Warna coklat
    glBegin(GL_POLYGON);
        glVertex2f(-0.3, -0.5); // A
        glVertex2f(0.3, -0.5);  // B
        glVertex2f(0.5, 0.0);   // C
        glVertex2f(0.2, 0.4);   // D
        glVertex2f(-0.2, 0.4);  // E
        glVertex2f(-0.5, 0.0);  // F
    glEnd();

    // Gambar garis yang mengikuti bentuk poligon dengan warna biru dan ketebalan 3.0
    glLineWidth(3.0); // Ketebalan garis
    glColor3f(0.0, 0.0, 1.0); // Warna biru
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.3, -0.5); // A
        glVertex2f(0.3, -0.5);  // B
        glVertex2f(0.5, 0.0);   // C
        glVertex2f(0.2, 0.4);   // D
        glVertex2f(-0.2, 0.4);  // E
        glVertex2f(-0.5, 0.0);  // F
    glEnd();

    // Gambar wajik di tengah poligon
    glColor3f(0.0, 0.5, 1.0); // Warna biru
    glBegin(GL_POLYGON);
        glVertex2f(-0.15, -0.1); // G
        glVertex2f(0.0, 0.1);   // H
        glVertex2f(0.15, -0.1);  // I
        glVertex2f(0.0, -0.3);   // J
    glEnd();
    
     // Gambar garis yang mengikuti bentuk wajik dengan warna biru dan ketebalan 3.0
    glLineWidth(3.0); // Ketebalan garis
    glColor3f(0.0, 0.0, 1.0); // Warna biru
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.15, -0.1); // G
        glVertex2f(0.0, 0.1);   // H
        glVertex2f(0.15, -0.1);  // I
        glVertex2f(0.0, -0.3);   // J
    glEnd();

    // Gambar garis vertikal di sebelah kanan
    glLineWidth(3.0); // Ketebalan garis
    glColor3f(0.0, 0.0, 1.0); // Warna biru
    
    // Gambar garis horizontal di ujung garis vertikal
    glBegin(GL_LINES);
        glVertex2f(0.5, 0.0);  // Vertex atas
        glVertex2f(0.7, 0.0);  // Vertex kanan
    glEnd();
    
    glBegin(GL_LINES);
        glVertex2f(0.7, 0.0); // Vertex bawah
        glVertex2f(0.7, 0.4);  // Vertex atas
    glEnd();

    // Gambar garis horizontal di ujung garis vertikal
    glBegin(GL_LINES);
        glVertex2f(0.7, 0.4);  // Vertex atas
        glVertex2f(0.8, 0.4);  // Vertex kanan
    glEnd();
    
    // Gambar segitiga warna merah di ujung garis horizontal
    glColor3f(1.0, 0.0, 0.0); // Warna merah
    glBegin(GL_TRIANGLES);
        glVertex2f(0.8, 0.4);  // Vertex atas
        glVertex2f(0.7, -0.5);  // Vertex kanan
        glVertex2f(0.9, -0.5);  // Vertex kiri
    glEnd();
    
         // Gambar garis yang mengikuti bentuk segitiga dengan warna biru dan ketebalan 3.0
    glLineWidth(2.0); // Ketebalan garis
    glColor3f(0.0, 0.0, 1.0); // Warna biru
    glBegin(GL_LINE_LOOP);
        glVertex2f(0.8, 0.4);  // Vertex atas
        glVertex2f(0.7, -0.5);  // Vertex kanan
        glVertex2f(0.9, -0.5);  // Vertex kiri
    glEnd();


    glFlush();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Segi Enam Tidak Beraturan dengan Wajik dan Garis Vertikal di Sisi Kanan");
    
    // Set warna background menjadi putih
    glClearColor(1.0, 1.0, 1.0, 1.0);

    glutDisplayFunc(Tampilan);
    glutMainLoop();
    return 0;
}

