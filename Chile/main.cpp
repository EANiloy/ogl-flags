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
    //Red Part
    {
     glBegin(GL_POLYGON);//the flag base
    glColor3ub(213,43,30);
    glVertex2f(10.0,100.0);
    glVertex2f(10.0,200.0);
    glVertex2f(390.0,200.0);
    glVertex2f(390.0,100.0);
    glEnd();
    }
    //White Part
    {
     glBegin(GL_POLYGON);//the flag base
    glColor3ub(255,255,255);
    glVertex2f(10.0,200.0);
    glVertex2f(10.0,300.0);
    glVertex2f(390.0,300.0);
    glVertex2f(390.0,200.0);
    glEnd();
    }

    //Blue Part
    {
     glBegin(GL_POLYGON);//the flag base
    glColor3ub(0,57,166);
    glVertex2f(10.0,200.0);
    glVertex2f(10.0,300.0);
    glVertex2f(120.0,300.0);
    glVertex2f(120.0,200.0);
    glEnd();
    }

    //Star
    {
    glColor3ub(255,255,255);
    //1stTriangle
    glBegin(GL_TRIANGLES);
    glVertex2f(65,285);
    glVertex2f(57,260);
    glVertex2f(73,260);
    glEnd();
    //2nd Triangle
    glBegin(GL_TRIANGLES);
    glVertex2f(35,260);
    glVertex2f(85,225);
    glVertex2f(73,260);
    glEnd();
    //3rd Triangle
    glBegin(GL_TRIANGLES);
    glVertex2f(45,225);
    glVertex2f(95,260);
    glVertex2f(57,260);
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

    glutCreateWindow("Chile Flag");
    glOrtho(0.0,400.0,0.0,400.0,-1,1);
    glutDisplayFunc(flag);
    glutMainLoop();

    return EXIT_SUCCESS;
}
