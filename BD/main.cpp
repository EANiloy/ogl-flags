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
    //Green base
    {
        glColor3ub(0,255,0);
        glBegin(GL_POLYGON);
        glVertex2f(0,100);
        glVertex2f(0,300);
        glVertex2f(400,300);
        glVertex2f(400,100);
        glEnd();
    }



    //Red Circle
    {
        glColor3ub(255,0,0);
        glBegin(GL_TRIANGLE_FAN);
    for(int ii = 0; ii < 500; ii++)
    {
        float theta = 2.0f * 3.1415926f * float(ii) / float(500);//get the current angle

        float x = 50 * cosf(theta);//calculate the x component
        float y = 50 * sinf(theta);//calculate the y component

        glVertex2f(x + 190, y + 200);//output vertex

    }
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
