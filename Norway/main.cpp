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
   //Red Base
   {
       glColor3ub(239,39,41);
       glBegin(GL_POLYGON);
       glVertex2f(50,100);
       glVertex2f(50,300);
       glVertex2f(350,300);
       glVertex2f(350,100);
       glEnd();
   }
   //White Stripes
   {
       //Left to Right
       glColor3ub(255,255,255);
       glBegin(GL_POLYGON);
       glVertex2f(50,175);
       glVertex2f(50,225);
       glVertex2f(350,225);
       glVertex2f(350,175);
       glEnd();

       //Top to Bottom
       glBegin(GL_POLYGON);
       glVertex2f(125,300);
       glVertex2f(175,300);
       glVertex2f(175,100);
       glVertex2f(125,100);
       glEnd();
   }
   //Blue Stripes
   {
       //left to Right
       glColor3ub(0,35,104);
       glBegin(GL_POLYGON);
       glVertex2f(50,183);
       glVertex2f(50,217);
       glVertex2f(350,217);
       glVertex2f(350,183);
       glEnd();
       //Top to Bottom
       glBegin(GL_POLYGON);
       glVertex2f(135,300);
       glVertex2f(165,300);
       glVertex2f(165,100);
       glVertex2f(135,100);
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

    glutCreateWindow("Flag of Norway");
    glOrtho(0.0,400.0,0.0,400.0,-1,1);
    glutDisplayFunc(flag);
    glutMainLoop();

    return EXIT_SUCCESS;
}
