#include <iostream>
#include<cmath>
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void flag()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //Blue base
    {
        glColor3ub(2,79,162);
        glBegin(GL_POLYGON);
        glVertex2f(0,100);
        glVertex2f(0,300);
        glVertex2f(400,300);
        glVertex2f(400,100);
        glEnd();
    }
    //White Borders
    {
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
        glVertex2f(0,140);
        glVertex2f(0,260);
        glVertex2f(400,260);
        glVertex2f(400,140);
        glEnd();
    }

    //Red Border
    {
        glColor3ub(237,28,39);
        glBegin(GL_POLYGON);
        glVertex2f(0,150);
        glVertex2f(0,250);
        glVertex2f(400,250);
        glVertex2f(400,150);
        glEnd();
    }

    //White Circle
    {
        glColor3ub(255,255,255);
        glBegin(GL_TRIANGLE_FAN);
    for(int ii = 0; ii < 500; ii++)
    {
        float theta = 2.0f * 3.1415926f * float(ii) / float(500);//get the current angle

        float x = 35 * cosf(theta);//calculate the x component
        float y = 35 * sinf(theta);//calculate the y component

        glVertex2f(x + 120, y + 200);//output vertex

    }
    glEnd();
    }
    //Red Star
    {
        //First Triangle
        glColor3ub(237,28,39);
        glBegin(GL_TRIANGLES);
        glVertex2f(119,235);
        glVertex2f(128,210);
        glVertex2f(110,210);
        glEnd();
        //Second Triangle
        glBegin(GL_TRIANGLES);
        glVertex2f(87,210);
        glVertex2f(128,210);
        glVertex2f(140,170);
        glEnd();
        //Third Triangle
        glBegin(GL_TRIANGLES);
        glVertex2f(98,170);
        glVertex2f(112,210);
        glVertex2f(153,210);
        glEnd();

    }

glFlush();

}



int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);

    glutCreateWindow("Flag of North Korea");
    glOrtho(0.0,400.0,0.0,400.0,-1,1);
    glutDisplayFunc(flag);
    glutMainLoop();

    return EXIT_SUCCESS;
}
