/*
DADANG S                10108433
SIGMA REFFANZA DWIJAYA  10108440
ALI YAPI                10108456
DANI HARDIANTO SETIAWAN 10108457
 */

#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <stdlib.h>

using namespace std;

static int spin = 0;
static float lampu = 0.0;

void keyboard(unsigned char, int, int);

void display(void) {
    int i, j;
    glutSwapBuffers();
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColorMaterial(GL_FRONT, GL_SPECULAR);

    //papan score
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(0, 2.31, 0.56);
    glScalef(1, 0.01, 0.15);
    glutSolidCube(2.0);
    glPopMatrix();
    //score kiri 0
    glPushMatrix();
    glColor3f(1, 0, 0);
    glTranslatef(-0.3, 2.30, 0.55);
    glRotated(-90, 0.1, 0, 0);
    glutSolidTorus(0.01, 0.05, 3, 20);
    glPopMatrix();
    //score kanan 0
    glPushMatrix();
    glColor3f(1, 0, 0);
    glTranslatef(0.3, 2.30, 0.55);
    glRotated(-90, 0.1, 0, 0);
    glutSolidTorus(0.01, 0.05, 3, 20);
    glPopMatrix();
    //score strip
    glPushMatrix();
    glColor3f(1, 0, 0);
    glTranslatef(0, 2.30, 0.55);
    glRotated(-90, 0.1, 0, 0);
    glScalef(0.05, 0.01, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();

    // TRIBUN
    //atas
    //tribun atas 1
    glPushMatrix();
    glColor3f(0.9, 1, 1);
    glTranslatef(0, 1.5, 0.02);
    glScalef(3.2, 0.05, 0.03);
    glutSolidCube(2.0);
    glPopMatrix();
    //tribun atas 2
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glTranslatef(0, 1.59, 0.04);
    glScalef(3.3, 0.05, 0.05);
    glutSolidCube(2.0);
    glPopMatrix();
    //tribun atas 3
    glPushMatrix();
    glColor3f(0.9, 1, 1);
    glTranslatef(0, 1.68, 0.06);
    glScalef(3.4, 0.05, 0.07);
    glutSolidCube(2.0);
    glPopMatrix();
    //tribun atas 4
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glTranslatef(0, 1.77, 0.08);
    glScalef(3.5, 0.05, 0.09);
    glutSolidCube(2.0);
    glPopMatrix();
    //tribun atas 5
    glPushMatrix();
    glColor3f(0.9, 1, 1);
    glTranslatef(0, 1.86, 0.1);
    glScalef(3.6, 0.05, 0.11);
    glutSolidCube(2.0);
    glPopMatrix();
    //tribun atas 6
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glTranslatef(0, 1.95, 0.12);
    glScalef(3.7, 0.05, 0.13);
    glutSolidCube(2.0);
    glPopMatrix();
    //tribun atas 7
    glPushMatrix();
    glColor3f(0.9, 1, 1);
    glTranslatef(0, 2.04, 0.14);
    glScalef(3.8, 0.05, 0.15);
    glutSolidCube(2.0);
    glPopMatrix();
    //tribun atas 8
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glTranslatef(0, 2.13, 0.16);
    glScalef(3.9, 0.05, 0.17);
    glutSolidCube(2.0);
    glPopMatrix();
    //tribun atas 9
    glPushMatrix();
    glColor3f(0.9, 1, 1);
    glTranslatef(0, 2.22, 0.18);
    glScalef(4.0, 0.05, 0.21);
    glutSolidCube(2.0);
    glPopMatrix();
    //tribun atas 10
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glTranslatef(0, 2.31, 0.2);
    glScalef(4.1, 0.05, 0.21);
    glutSolidCube(2.0);
    glPopMatrix();

    //Bawah
    //tribun Bawah 1
    glPushMatrix();
    glColor3f(0.9, 1, 1);
    glTranslatef(0, -1.5, 0.02);
    glScalef(3.2, 0.05, 0.03);
    glutSolidCube(2.0);
    glPopMatrix();
    //tribun Bawah 2
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glTranslatef(0, -1.59, 0.04);
    glScalef(3.3, 0.05, 0.05);
    glutSolidCube(2.0);
    glPopMatrix();
    //tribun Bawah 3
    glPushMatrix();
    glColor3f(0.9, 1, 1);
    glTranslatef(0, -1.68, 0.06);
    glScalef(3.4, 0.05, 0.07);
    glutSolidCube(2.0);
    glPopMatrix();
    //tribun Bawah 4
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glTranslatef(0, -1.77, 0.08);
    glScalef(3.5, 0.05, 0.09);
    glutSolidCube(2.0);
    glPopMatrix();
    //tribun Bawah 5
    glPushMatrix();
    glColor3f(0.9, 1, 1);
    glTranslatef(0, -1.86, 0.1);
    glScalef(3.6, 0.05, 0.11);
    glutSolidCube(2.0);
    glPopMatrix();
    //tribun Bawah 6
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glTranslatef(0, -1.95, 0.12);
    glScalef(3.7, 0.05, 0.13);
    glutSolidCube(2.0);
    glPopMatrix();
    //tribun Bawah 7
    glPushMatrix();
    glColor3f(0.9, 1, 1);
    glTranslatef(0, -2.04, 0.14);
    glScalef(3.8, 0.05, 0.15);
    glutSolidCube(2.0);
    glPopMatrix();
    //tribun Bawah 8
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glTranslatef(0, -2.13, 0.16);
    glScalef(3.9, 0.05, 0.17);
    glutSolidCube(2.0);
    glPopMatrix();
    //tribun Bawah 9
    glPushMatrix();
    glColor3f(0.9, 1, 1);
    glTranslatef(0, -2.22, 0.18);
    glScalef(4.0, 0.05, 0.21);
    glutSolidCube(2.0);
    glPopMatrix();

    // TRACK LARI
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glScalef(2, 1.5, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();
    //track lari KANAN
    //lingkaran kanan1
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(1.6, 0, 0);
    glutSolidTorus(0.02, 1.5, 5, 100);
    glPopMatrix();
    //lingkaran kanan1
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(1.6, 0, 0);
    glutSolidTorus(0.02, 1.46, 5, 100);
    glPopMatrix();
    //lingkaran kanan1
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(1.6, 0, 0);
    glutSolidTorus(0.02, 1.42, 5, 100);
    glPopMatrix();
    //lingkaran kanan1
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(1.6, 0, 0);
    glutSolidTorus(0.02, 1.38, 5, 100);
    glPopMatrix();
    //lingkaran kanan1
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(1.6, 0, 0);
    glutSolidTorus(0.02, 1.34, 5, 100);
    glPopMatrix();
    //lingkaran kanan1
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(1.6, 0, 0);
    glutSolidTorus(0.02, 1.30, 5, 100);
    glPopMatrix();
    //lingkaran kanan1
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(1.6, 0, 0);
    glutSolidTorus(0.02, 1.26, 5, 100);
    glPopMatrix();
    //lingkaran kanan1
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(1.6, 0, 0);
    glutSolidTorus(0.02, 1.22, 5, 100);
    glPopMatrix();
    //lingkaran kanan1
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(1.6, 0, 0);
    glutSolidTorus(0.02, 1.18, 5, 100);
    glPopMatrix();
    //lingkaran kanan1
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(1.6, 0, 0);
    glutSolidTorus(0.02, 1.14, 5, 100);
    glPopMatrix();
    //lingkaran kanan1
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(1.6, 0, 0);
    glutSolidTorus(0.02, 1.10, 5, 100);
    glPopMatrix();

    //track lari KIRI
    //lingkaran KIRI1
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(-1.6, 0, 0);
    glutSolidTorus(0.02, 1.5, 5, 100);
    glPopMatrix();
    //lingkaran KIRI2
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(-1.6, 0, 0);
    glutSolidTorus(0.02, 1.46, 5, 100);
    glPopMatrix();
    //lingkaran KIRI3
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(-1.6, 0, 0);
    glutSolidTorus(0.02, 1.42, 5, 100);
    glPopMatrix();
    //lingkaran KIRI4
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(-1.6, 0, 0);
    glutSolidTorus(0.02, 1.38, 5, 100);
    glPopMatrix();
    //lingkaran KIRI4
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(-1.6, 0, 0);
    glutSolidTorus(0.02, 1.34, 5, 100);
    glPopMatrix();
    //lingkaran KIRI6
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(-1.6, 0, 0);
    glutSolidTorus(0.02, 1.30, 5, 100);
    glPopMatrix();
    //lingkaran KIRI7
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(-1.6, 0, 0);
    glutSolidTorus(0.02, 1.26, 5, 100);
    glPopMatrix();
    //lingkaran KIRI8
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(-1.6, 0, 0);
    glutSolidTorus(0.02, 1.22, 5, 100);
    glPopMatrix();
    //lingkaran KIRI9
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(-1.6, 0, 0);
    glutSolidTorus(0.02, 1.18, 5, 100);
    glPopMatrix();
    //lingkaran KIRI9
    glPushMatrix();
    glColor3f(0.8, 0.5, 0);
    glTranslatef(-1.6, 0, 0);
    glutSolidTorus(0.02, 1.14, 5, 100);
    glPopMatrix();

    // LAPANGAN
    glPushMatrix();
    glColor3f(0, 1, 0);
    glScalef(2, 1, 0.019);
    glutSolidCube(2.0);
    glPopMatrix();
    //tiang
    //tiang atas kanan
    glPushMatrix();
    glColor3f(0.8, 0.8, 0.8);
    glTranslatef(1.5, 0, 0.15);
    glScalef(0.01, 0.15, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();
    //tiang atas kiri
    glPushMatrix();
    glColor3f(0.8, 0.8, 0.8);
    glTranslatef(-1.5, 0, 0.15);
    glScalef(0.01, 0.15, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();
    //tiang kiri bawah
    glPushMatrix();
    glColor3f(0.8, 0.8, 0.8);
    glTranslatef(-1.5, -0.16, 0.09);
    glScalef(0.01, 0.01, 0.07);
    glutSolidCube(2.0);
    glPopMatrix();
    //tiang kiri bawah1
    glPushMatrix();
    glColor3f(0.8, 0.8, 0.8);
    glTranslatef(-1.5, 0.16, 0.09);
    glScalef(0.01, 0.01, 0.07);
    glutSolidCube(2.0);
    glPopMatrix();
    //tiang kanan bawah
    glPushMatrix();
    glColor3f(0.8, 0.8, 0.8);
    glTranslatef(1.5, -0.16, 0.09);
    glScalef(0.01, 0.01, 0.07);
    glutSolidCube(2.0);
    glPopMatrix();
    //tiang kanan bawah1
    glPushMatrix();
    glColor3f(0.8, 0.8, 0.8);
    glTranslatef(1.5, 0.16, 0.09);
    glScalef(0.01, 0.01, 0.07);
    glutSolidCube(2.0);
    glPopMatrix();
    //bendera
    //pojok kiri atas
    glPushMatrix();
    glColor3f(1, 0, 1);
    glTranslatef(-1.5, 0.8, 0.05);
    glScalef(0.001, 0.01, 0.03);
    glutSolidCube(2.0);
    glPopMatrix();
    //pojok kanan atas
    glPushMatrix();
    glColor3f(1, 0, 1);
    glTranslatef(1.5, 0.8, 0.05);
    glScalef(0.001, 0.01, 0.03);
    glutSolidCube(2.0);
    glPopMatrix();
    //pojok kiri bawah
    glPushMatrix();
    glColor3f(1, 0, 1);
    glTranslatef(-1.5, -0.8, 0.05);
    glScalef(0.001, 0.01, 0.03);
    glutSolidCube(2.0);
    glPopMatrix();
    //pojok kiri atas
    glPushMatrix();
    glColor3f(1, 0, 1);
    glTranslatef(1.5, -0.8, 0.05);
    glScalef(0.001, 0.01, 0.03);
    glutSolidCube(2.0);
    glPopMatrix();
    //garis
    //garis bawah
    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslatef(0, -0.8, 0.01);
    glScalef(1.5, 0.01, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();
    //garis atas
    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslatef(0, 0.8, 0.01);
    glScalef(1.5, 0.01, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();
    //garis kanan
    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslatef(1.5, 0, 0.01);
    glScalef(0.01, 0.81, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();
    //garis kiri
    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslatef(-1.5, 0, 0.01);
    glScalef(0.01, 0.81, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();
    //garis tengah
    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslatef(0, 0, 0.01);
    glScalef(0.01, 0.81, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();
    //garis kanan kiper luar
    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslatef(1, 0, 0.01);
    glScalef(0.01, 0.45, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();
    //garis kanan kiper dalam
    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslatef(1.25, 0, 0.01);
    glScalef(0.01, 0.25, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();
    //garis kiri kiper luar
    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslatef(-1, 0, 0.01);
    glScalef(0.01, -0.45, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();
    //garis kiri kiper dalam
    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslatef(-1.25, 0, 0.01);
    glScalef(0.01, -0.25, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();
    //garis kiper kanan atas luar
    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslatef(1.25, 0.45, 0.01);
    glScalef(0.26, 0.01, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();
    //garis kiper kiri atas luar
    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslatef(-1.25, 0.45, 0.01);
    glScalef(-0.26, 0.01, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();
    //garis kiper kanan bawah luar
    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslatef(1.25, -0.45, 0.01);
    glScalef(-0.26, 0.01, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();
    //garis kiper kiri bawah luar
    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslatef(-1.25, -0.45, 0.01);
    glScalef(-0.26, 0.01, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();
    //garis kiper kanan atas dalam
    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslatef(1.38, 0.24, 0.01);
    glScalef(0.13, 0.01, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();
    //garis kiper kanan bawah dalam
    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslatef(1.38, -0.24, 0.01);
    glScalef(0.13, 0.01, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();
    //garis kiper kiri atas dalam
    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslatef(-1.38, 0.24, 0.01);
    glScalef(0.13, 0.01, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();
    //garis kiper kiri bawah dalam
    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslatef(-1.38, -0.24, 0.01);
    glScalef(0.13, 0.01, 0.01);
    glutSolidCube(2.0);
    glPopMatrix();
    //lingkaran tengah
    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslatef(0, 0, 0.02);
    glutSolidTorus(0.01, 0.25, 3, 20);
    glPopMatrix();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(10, 0);
    glVertex2i(-10, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(0, 10);
    glVertex2i(0, -10);
    glEnd();

    glPopMatrix();
    glFlush();
    glutPostRedisplay();
}

void init(void) {

    /*
   glClearColor(1.0, 1.0, 1.0, 0.0);
   glEnable(GL_DEPTH_TEST);
   glLoadIdentity();
   glMatrixMode(GL_PROJECTION);
   gluPerspective(40.0, 1.0, 1.0, 20.0);
   glMatrixMode(GL_MODELVIEW);

   gluLookAt(0.0, 0, 8.0, // melihat pada
           0.0, 0.0, 0.0, // center pada (0,0,0)
           0.0, 1.0, 0.0); // arah Y
   GLfloat mat_specular[] = {0.2, 0.2, 0.2, 0.2};
   GLfloat light_position[] = {5, 1.0, 1.0, 0.0};
   glShadeModel(GL_SMOOTH);
   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
   glLightfv(GL_LIGHT0, GL_POSITION, light_position);
   //glEnable(GL_LIGHTING);
   //glEnable(GL_LIGHT0);
   glEnable(GL_DEPTH_TEST);
     */
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glEnable(GL_DEPTH_TEST);
    glLoadIdentity();
    glMatrixMode(GL_PROJECTION);
    gluPerspective(40.0, 1.0, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);

    gluLookAt(0.0, 0, 8.0, // melihat pada 
            0.0, 0.0, 0.0, // center pada (0,0,0)
            0.0, 1.0, 0.0); // arah Y
    
    GLfloat ambientColor[] = {0.3f, 0.3f, 0.3f, 1.0f};
     glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientColor);
     GLfloat lightColor0[] = {1.0f, 1.0f, 1.0f, 1.0f};
     GLfloat lightPos0[] = {1.0f, 1.0f, 1.0f, 1.0f};
     glLightfv(GL_LIGHT0, GL_DIFFUSE, lightColor0);
     glLightfv(GL_LIGHT0, GL_POSITION, lightPos0);        
    

}

int main(int argc, char *argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Kelompok 1 IF-9");
    init();
    //glRotatef(20.0,1.0f,0.0f,0.0f);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}

void keyboard(unsigned char key, int x, int y) {
    /*
    control keyboards
     */
    switch (key) {
        case 'w':
        case 'W':
        {
            glRotatef(3.0, 1.0, 0.0, 0.0); /* rotate up */
            y = 0;
        }
            break;
        case 's':
        case 'S':
            glRotatef(-3.0, 1.0, 0.0, 0.0); /* rotate down */
            break;
        case 'a':
        case 'A':
            glRotatef(-1.0, 0.0, 0.0, 1.0); /* rotate left */
            break;
        case 'd':
        case 'D':
            glRotatef(1.0, 0.0, 0.0, 1.0); /* rotate right */
            break;
        case '-':
        case 'o':
            glScalef(0.9, 0.9, 0.9); /* ZOOM OUT */
            break;
        case '+':
        case 'i':
            glScalef(1.1, 1.1, 1.1); /* ZOOM IN */
            break;
        case 'z':
            glEnable(GL_LIGHT1);
            lampu = lampu + 0.4;
            glutPostRedisplay();
            break;
        case 'x':
            glDisable(GL_LIGHT1);
            lampu = lampu - 0.4;
            glutPostRedisplay();
            break;

    }
    display(); /* repaint the window */
}
/**********************************************************************/
