#include<math.h>
#include <windows.h>
#include <GL/glut.h>
void Draw()
{

glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3ub(255.0,255.0,51.0);
    glVertex2f(0.0,300.0) ;
    glVertex2f(300.0,300.0) ;
    glVertex2f(300.0,200.0);
    glVertex2f(0.0,200.0) ;
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0.0, 0.0, 255.0);
    glVertex2f(0.0,200.0) ;
    glVertex2f(300.0,200.0) ;
    glVertex2f(300.0,100.0);
    glVertex2f(0.0,100.0) ;
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 0.0, 0.0);
    glVertex2f(0.0,100.0) ;
    glVertex2f(300.0,100.0) ;
    glVertex2f(300.0,0.0);
    glVertex2f(0.0,0.0) ;
    glEnd();

        glColor3ub(255,255,255);

    for(int ii = 0; ii <252; ii++)
    {
        if(ii%35==0)
        {
        float theta = 2.0f * 3.1415926f * float(ii) / float(500);//get the current angle

        float x = 50 * cosf(theta);//calculate the x component
        float y = 65 * sinf(theta);//calculate the y component

        glBegin(GL_TRIANGLES);
        glVertex2f(x+150,y+130);
        glVertex2f(x+152,y+120);
        glVertex2f(x+148,y+120);
        glEnd();
        //Second Triangle
        glBegin(GL_TRIANGLES);
        glVertex2f(x+143,y+120);
        glVertex2f(x+150,y+120);
        glVertex2f(x+155,y+105);
        glEnd();
        //Third Triangle
        glBegin(GL_TRIANGLES);
        glVertex2f(x+145,y+105);
        glVertex2f(x+150,y+120);
        glVertex2f(x+157,y+120);
        glEnd();

        }
    }
   glFlush();
}
void Initialize()
{
    glClearColor(0, 0, 0, 0);
    glOrtho(0.0,300.0,0.0,300.0,-1,1);
}
int main(int Argc, char** Argv)
{
    glutInit(&Argc, Argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 400);
    glutInitWindowPosition(250, 250);
    glMatrixMode(GL_MODELVIEW);
    glutCreateWindow("Venezuela Flag");
    Initialize();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}

