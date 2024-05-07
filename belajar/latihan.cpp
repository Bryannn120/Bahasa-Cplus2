#include <GL/glut.h>
 
void Tampilan(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    // Gambar segitiga sama sisi berwarna biru
    glColor3f(1, 0, 0);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(-0.25, -0.25);
    glVertex2f(0.0, 0.25);
    glVertex2f(0.25, -0.25);
    glEnd();

    // Ketebalan garis
    glLineWidth(8.0);
    // Warna biru
    glColor3f(0.0, 2.0, 2.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.25, -0.25);
    glVertex2f(0.0, 0.25);
    glVertex2f(0.25, -0.25);
    glEnd();
    
//     // Gambar segitiga sama sisi berwarna biru
//    glColor3f(0, 0, 1);
//    glBegin(GL_TRIANGLE_STRIP);
//    glVertex2f(-0.50, -0.50);
//    glVertex2f(0.5, 0.50);
//    glVertex2f(0.50, -0.50);
//    glEnd();

    // Ketebalan garis
    glLineWidth(3.0);
    // Warna biru
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.50, -0.50);
    glVertex2f(0.0, 0.50);
    glVertex2f(0.50, -0.50);
    glEnd();
    
       glLineWidth(3.0);
    // Warna biru
    glColor3f(6.0, 6.0, 6.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.50, 0.50);
    glVertex2f(0.0, -0.50);
    glVertex2f(0.50, 0.50);
    glEnd();

    glFlush();
    glutSwapBuffers();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA); // Mengubah mode tampilan menjadi GLUT_DOUBLE untuk double buffering
    glutInitWindowPosition(400, 100);
    glutInitWindowSize(500, 300);
    glutCreateWindow("Gambar 2");
    glutDisplayFunc(Tampilan);
    glutMainLoop();
    return 0;
}

