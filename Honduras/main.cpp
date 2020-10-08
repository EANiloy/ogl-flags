#include <iostream>
#include<cmath>
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void honduras()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //Base of the flag
    {
        glColor3ub(39,42,119);
        glBegin(GL_POLYGON);
        glVertex2f(0,0);
        glVertex2f(0,200);
        glVertex2f(200,200);
        glVertex2f(200,0);
        glEnd();
    }
    //White Stripe in the Middle
    {
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
        glVertex2f(0,60);
        glVertex2f(0,145);
        glVertex2f(200,145);
        glVertex2f(200,60);
        glEnd();
    }
    //Middle Star
    {
        //First Triangle
        glColor3ub(39,42,119);
        glBegin(GL_TRIANGLES);
        glVertex2f(98.5,113);
        glVertex2f(94.5,103);
        glVertex2f(102.5,103);
        glEnd();
        //Second Triangle
        glBegin(GL_TRIANGLES);
        glVertex2f(83.5,103);
        glVertex2f(103.5,103);
        glVertex2f(108.5,88);
        glEnd();
        //Third Triangle
        glBegin(GL_TRIANGLES);
        glVertex2f(113.5,103);
        glVertex2f(93.5,103);
        glVertex2f(88.5,88);
        glEnd();
    }
    //Top Left Star
    {
        //First Triangle
        glBegin(GL_TRIANGLES);
        glVertex2f(50,135);
        glVertex2f(46,125);
        glVertex2f(54,125);
        glEnd();
        //Second Triangle
        glBegin(GL_TRIANGLES);
        glVertex2f(35,125);
        glVertex2f(55,125);
        glVertex2f(60,110);
        glEnd();
        //Third Triangle
        glBegin(GL_TRIANGLES);
        glVertex2f(65,125);
        glVertex2f(45,125);
        glVertex2f(40,110);
        glEnd();
    }
    //Top Right Star
    {
        //First Triangle
        glBegin(GL_TRIANGLES);
        glVertex2f(50,95);
        glVertex2f(46,85);
        glVertex2f(54,85);
        glEnd();
        //Second Triangle
        glBegin(GL_TRIANGLES);
        glVertex2f(35,85);
        glVertex2f(55,85);
        glVertex2f(60,70);
        glEnd();
        //Third Triangle
        glBegin(GL_TRIANGLES);
        glVertex2f(65,85);
        glVertex2f(45,85);
        glVertex2f(40,70);
        glEnd();
    }

    //Top Left Star
    {
        //First Triangle
        glBegin(GL_TRIANGLES);
        glVertex2f(145,135);
        glVertex2f(141,125);
        glVertex2f(149,125);
        glEnd();
        //Second Triangle
        glBegin(GL_TRIANGLES);
        glVertex2f(130,125);
        glVertex2f(150,125);
        glVertex2f(155,110);
        glEnd();
        //Third Triangle
        glBegin(GL_TRIANGLES);
        glVertex2f(160,125);
        glVertex2f(140,125);
        glVertex2f(135,110);
        glEnd();
    }
    //Bottom Right Star
    {
        //First Triangle
        glBegin(GL_TRIANGLES);
        glVertex2f(145,95);
        glVertex2f(141,85);
        glVertex2f(149,85);
        glEnd();
        //Second Triangle
        glBegin(GL_TRIANGLES);
        glVertex2f(130,85);
        glVertex2f(150,85);
        glVertex2f(155,70);
        glEnd();
        //Third Triangle
        glBegin(GL_TRIANGLES);
        glVertex2f(160,85);
        glVertex2f(140,85);
        glVertex2f(135,70);
        glEnd();
    }
glFlush();

}



int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(800,550);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);

    glutCreateWindow("Flag of Honduras");
    glOrtho(0.0,200.0,0.0,200.0,-1,1);
    glutDisplayFunc(honduras);
    glutMainLoop();

    return EXIT_SUCCESS;
}
