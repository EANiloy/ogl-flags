#include<cmath>
#include <windows.h>
#include <GL/glut.h>

void flag()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //Green Part
    {
    glColor3ub(18,173,43);
    glBegin(GL_POLYGON);
    glVertex2f(10.0,100.0);
    glVertex2f(10.0,300.0);
    glVertex2f(390.0,300.0);
    glVertex2f(390.0,100.0);
    glEnd();
    }
    //Yellow Part
    {
     glBegin(GL_POLYGON);
    glColor3ub(255,206,0);
    glVertex2f(10.0,160.0);
    glVertex2f(10.0,240.0);
    glVertex2f(390.0,240.0);
    glVertex2f(390.0,160.0);
    glEnd();
    }

    //Red Part
    {
     glBegin(GL_TRIANGLES);
    glColor3ub(210,16,52);
    glVertex2f(10.0,100.0);
    glVertex2f(10.0,300.0);
    glVertex2f(110.0,200.0);
    glEnd();
    }

    //Stars
    {
    glColor3ub(0,0,0);
    //1stTriangle
    glBegin(GL_TRIANGLES);
    glVertex2f(195,230);
    glVertex2f(187,210);
    glVertex2f(203,210);
    glEnd();
    //2nd Triangle
    glBegin(GL_TRIANGLES);
    glVertex2f(165,210);
    glVertex2f(215,175);
    glVertex2f(203,210);
    glEnd();
    //3rd Triangle
    glBegin(GL_TRIANGLES);
    glVertex2f(175,175);
    glVertex2f(225,210);
    glVertex2f(187,210);
    glEnd();

    ///1stTriangle
    glBegin(GL_TRIANGLES);
    glVertex2f(305,230);
    glVertex2f(297,210);
    glVertex2f(313,210);
    glEnd();
    //2nd Triangle
    glBegin(GL_TRIANGLES);
    glVertex2f(275,210);
    glVertex2f(325,175);
    glVertex2f(313,210);
    glEnd();
    //3rd Triangle
    glBegin(GL_TRIANGLES);
    glVertex2f(285,175);
    glVertex2f(335,210);
    glVertex2f(297,210);
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

    glutCreateWindow("Flag of Sao Tome and Principe");
    glOrtho(0.0,400.0,0.0,400.0,-1,1);
    glutDisplayFunc(flag);
    glutMainLoop();

    return EXIT_SUCCESS;
}
