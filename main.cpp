/*
DADANG SASMITA          10108433
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

void keyboard(unsigned char, int, int);

void display(void){
int  i,j;     
    glutSwapBuffers();
    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColorMaterial(GL_FRONT,GL_SPECULAR);
    //glRotatef(1.0,0.5,0.0,0);
     glPushMatrix();
/*
*/                    
// LAPANGAN
                    glPushMatrix();
                                         glColor3f(0,1,0);
                                         glScalef(2,1,0.01);
                                         glutSolidCube(2.0);
                    glPopMatrix();
/*
*/
//garis
                    //garis bawah
                    glPushMatrix();
                                         glColor3f(1,1,1);
                                         glTranslatef(0,-0.8,0.01);
                                         glScalef(1.5,0.01,0.01);
                                         glutSolidCube(2.0);
                    glPopMatrix();
                    //garis atas
                    glPushMatrix();
                                         glColor3f(1,1,1);
                                         glTranslatef(0,0.8,0.01);
                                         glScalef(1.5,0.01,0.01);
                                         glutSolidCube(2.0);
                    glPopMatrix();
                    //garis kanan
                    glPushMatrix();
                                         glColor3f(1,1,1);
                                         glTranslatef(1.5,0,0.01);
                                         glScalef(0.01,0.81,0.01);
                                         glutSolidCube(2.0);
                    glPopMatrix();
                    //garis kiri
                    glPushMatrix();
                                         glColor3f(1,1,1);
                                         glTranslatef(-1.5,0,0.01);
                                         glScalef(0.01,0.81,0.01);
                                         glutSolidCube(2.0);
                    glPopMatrix();
                    //garis tengah
                    glPushMatrix();
                                         glColor3f(1,1,1);
                                         glTranslatef(0,0,0.01);
                                         glScalef(0.01,0.81,0.01);
                                         glutSolidCube(2.0);
                    glPopMatrix();
                    //garis kanan kiper luar
                    glPushMatrix();
                                         glColor3f(1,1,1);
                                         glTranslatef(1,0,0.01);
                                         glScalef(0.01,0.45,0.01);
                                         glutSolidCube(2.0);
                    glPopMatrix();
                    //garis kanan kiper dalam
                     glPushMatrix();
                                         glColor3f(1,1,1);
                                         glTranslatef(1.25,0,0.01);
                                         glScalef(0.01,0.25,0.01);
                                         glutSolidCube(2.0);
                    glPopMatrix();
                    //garis kiri kiper luar
                      glPushMatrix();
                                         glColor3f(1,1,1);
                                         glTranslatef(-1,0,0.01);
                                         glScalef(0.01,-0.45,0.01);
                                         glutSolidCube(2.0);
                    glPopMatrix();
                    //garis kiri kiper dalam
                     glPushMatrix();
                                         glColor3f(1,1,1);
                                         glTranslatef(-1.25,0,0.01);
                                         glScalef(0.01,-0.25,0.01);
                                         glutSolidCube(2.0);
                    glPopMatrix();
                     //garis kiper kanan atas luar
                    glPushMatrix();
                                         glColor3f(1,1,1);
                                         glTranslatef(1.25,0.45,0.01);
                                         glScalef(0.26,0.01,0.01);
                                         glutSolidCube(2.0);
                    glPopMatrix();
                     //garis kiper kiri atas luar
                    glPushMatrix();
                                         glColor3f(1,1,1);
                                         glTranslatef(-1.25,0.45,0.01);
                                         glScalef(-0.26,0.01,0.01);
                                         glutSolidCube(2.0);
                    glPopMatrix();
                    //garis kiper kanan bawah luar
                    glPushMatrix();
                                         glColor3f(1,1,1);
                                         glTranslatef(1.25,-0.45,0.01);
                                         glScalef(-0.26,0.01,0.01);
                                         glutSolidCube(2.0);
                    glPopMatrix();
                    //garis kiper kiri bawah luar
                    glPushMatrix();
                                         glColor3f(1,1,1);
                                         glTranslatef(-1.25,-0.45,0.01);
                                         glScalef(-0.26,0.01,0.01);
                                         glutSolidCube(2.0);
                    glPopMatrix();
                    //garis kiper kanan atas dalam
                    glPushMatrix();
                                         glColor3f(1,1,1);
                                         glTranslatef(1.38,0.24,0.01);
                                         glScalef(0.13,0.01,0.01);
                                         glutSolidCube(2.0);
                    glPopMatrix();
                    //garis kiper kanan bawah dalam
                    glPushMatrix();
                                         glColor3f(1,1,1);
                                         glTranslatef(1.38,-0.24,0.01);
                                         glScalef(0.13,0.01,0.01);
                                         glutSolidCube(2.0);
                    glPopMatrix();
                    //garis kiper kiri atas dalam
                    glPushMatrix();
                                         glColor3f(1,1,1);
                                         glTranslatef(-1.38,0.24,0.01);
                                         glScalef(0.13,0.01,0.01);
                                         glutSolidCube(2.0);
                    glPopMatrix();
                    //garis kiper kiri bawah dalam
                    glPushMatrix();
                                         glColor3f(1,1,1);
                                         glTranslatef(-1.38,-0.24,0.01);
                                         glScalef(0.13,0.01,0.01);
                                         glutSolidCube(2.0);
                    glPopMatrix();
//lingkaran tengah
                      glPushMatrix();
                                         glColor3f(1,1,1);
                                         glTranslatef(0,0,0.01);
                                         glutSolidTorus(0.01,0.25,3,20);
                    glPopMatrix();
                    
                    glBegin(GL_LINES);
                    glColor3f(0,0,0);
                        glVertex2i(10,0);
                        glVertex2i(-10,0);
                    glEnd();
                    
                     glBegin(GL_LINES);
                     glColor3f(0,0,0);
                        glVertex2i(0,10);
                        glVertex2i(0,-10);
                    glEnd();
                    
     glPopMatrix();
    glFlush ();
    glutPostRedisplay();
}
void init(void){
    glClearColor(1.0,1.0,1.0, 0.0);
    glEnable(GL_DEPTH_TEST);
    glLoadIdentity();
    glMatrixMode(GL_PROJECTION);
    gluPerspective(40.0,1.0,1.0,20.0);
    glMatrixMode(GL_MODELVIEW);
    
    gluLookAt(0.0, 0, 8.0, // melihat pada 
    0.0, 0.0, 0.0, // center pada (0,0,0)
    0.0, 1.0, 0.0); // arah Y
    GLfloat mat_specular[] = { 0.2, 0.2, 0.2, 0.2 };
    GLfloat light_position[] = { 2,1.0,1.0, 0.0 };
    glShadeModel (GL_SMOOTH);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    //glEnable(GL_LIGHTING);
    //glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);    
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition (50, 50);
    glutCreateWindow("banner");
    init();
    //glRotatef(20.0,1.0f,0.0f,0.0f);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard); 
    glutMainLoop();
    return 0;
}

void keyboard(unsigned char key, int x, int y)
{
/*
control keyboards
*/
switch (key)
       {
            case 'w':
            case 'W':
                 {
            glRotatef(3.0, 1.0, 0.0, 0.0); /* rotate up */
            y=0;
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
            case 'O':
            glScalef(0.9, 0.9, 0.9); /* ZOOM OUT */
            break;
            case '+':
            case 'I':
            glScalef(1.1, 1.1, 1.1); /* ZOOM IN */          
       }
display(); /* repaint the window */
}
/**********************************************************************/