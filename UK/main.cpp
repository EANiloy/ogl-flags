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
    //White Background
    {
     glBegin(GL_POLYGON);//the flag base
    glColor3ub(255,255,255);
    glVertex2f(5.0,50.0);
    glVertex2f(5.0,150.0);
    glVertex2f(195.0,150.0);
    glVertex2f(195.0,50.0);
    glEnd();
    }

    //Blue Triangles
    {
    //Left side
    glColor3ub(0,36,124);
    glBegin(GL_TRIANGLES);
    glVertex2f(5.0,65.0);
    glVertex2f(5.0,135.0);
    glVertex2f(62.0,100.0);
    glEnd();

    //Right Side
    glBegin(GL_TRIANGLES);
    glVertex2f(195.0,65.0);
    glVertex2f(195.0,135.0);
    glVertex2f(138.0,100.0);
    glEnd();

    //Top
    glBegin(GL_TRIANGLES);
    glVertex2f(168,150.0);
    glVertex2f(32.0,150.0);
    glVertex2f(103.0,113.0);
    glEnd();

    //Bottom
    glBegin(GL_TRIANGLES);
    glVertex2f(168,50.0);
    glVertex2f(32.0,50.0);
    glVertex2f(103.0,87.0);
    glEnd();
    }
    //Red Crosses
    {
    //Left bottom to Right Top
    glColor3ub(208,20,45);
    glBegin(GL_POLYGON);
    glVertex2f(5.0,50.0);
    glVertex2f(20.0,50.0);
    glVertex2f(85.0,85.0);
    glVertex2f(70.0,85.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(195.0,150.0);
    glVertex2f(180.0,150.0);
    glVertex2f(120.0,115.0);
    glVertex2f(135.0,115.0);
    glEnd();


    //Right Bottom to Left Top
    glBegin(GL_POLYGON);
    glVertex2f(5.0,150.0);
    glVertex2f(5.0,141.0);
    glVertex2f(52.0,113.0);
    glVertex2f(67.0,113.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(195.0,50.0);
    glVertex2f(195.0,59.0);
    glVertex2f(152.0,85.0);
    glVertex2f(137.0,85.0);
    glEnd();

    }



    //White Strips
    {
    //Left to Right
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(5.0,115.0);
    glVertex2f(195.0,115.0);
    glVertex2f(195.0,85.0);
    glVertex2f(5.0,85.0);
    glEnd();
    //Top to Bottom
    glBegin(GL_POLYGON);
    glVertex2f(87,150);
    glVertex2f(117,150);
    glVertex2f(117,50);
    glVertex2f(87,50);
    glEnd();
    }
    //Red Strips
    {
    //Top to Bottom
    glColor3ub(208,20,45);
    glBegin(GL_POLYGON);
    glVertex2f(92,150);
    glVertex2f(112,150);
    glVertex2f(112,50);
    glVertex2f(92,50);
    glEnd();
    //Left to Right
    glBegin(GL_POLYGON);
    glVertex2f(5.0,110.0);
    glVertex2f(195.0,110.0);
    glVertex2f(195.0,90.0);
    glVertex2f(5.0,90.0);
    glEnd();
    }
    glFlush();
}
void init()
{
    glClearColor(0.0,0.0,0.0,0.0);

}

/* Program entry point */

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);

    glutCreateWindow("UK Flag");
    init();
    glOrtho(0.0,200.0,0.0,200.0,-1,1);
    glutDisplayFunc(flag);
    glutMainLoop();

    return EXIT_SUCCESS;
}
