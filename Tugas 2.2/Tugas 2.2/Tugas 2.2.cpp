#include <GL/glut.h>                      //pemanggilan pustaka glut.h sekaligus gl.h milik OpenGL
#include <windows.h>
#include <math.h>

const double PI = 3.142857143;
int i, jari, jumlah_titik, x_tengah, y_tengah, r;

void display()                              //fungsi display() salah satu fungsi terpenting dalam program OpenGL
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 1, 0);//untuk warna lingkaran
    glBegin(GL_POLYGON);
    jari = 6;
    jumlah_titik = 60;
    x_tengah = 2;
    y_tengah = 5;
    y_tengah = r;
    r = 6;

    for (i = 0;i <= 360;i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + jari * cos(sudut);
        float y = y_tengah + jari * sin(sudut);
        glVertex2f(x / 100, y / 100);
    }
    glEnd();
    glFlush();
}

int main(int argc, char** argv)         //fungsi utama seluruh program C++
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Lingkaran");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
