#include <windows.h>
#include <GL/glut.h>



//adjust position to center the flag
const int rx=5;
const int ry=50;
//draw flag
void draw(){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);//the flag base
    glColor3ub(0,20,137);
    glVertex2f(0+rx,0+ry);
    glVertex2f(0+rx,100+ry);
    glVertex2f(190+rx,100+ry);
    glVertex2f(190+rx,0+ry);
    glEnd();

    //Yellow Triangle
    glColor3ub(255,213,33);
    glBegin(GL_TRIANGLES);
    glVertex2f(53.0,150);
    glVertex2f(153.0,150);
    glVertex2f(153.0,50);
    glEnd();
 //draw star
 //Top Half Star
     glColor3ub(255,255,255);
 glBegin(GL_TRIANGLES);
    glVertex2f(35,150);
    glVertex2f(42,150);
    glVertex2f(46,144);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(35,144);
    glVertex2f(46,150);
     glVertex2f(39,150);
    glEnd();
    //Bottom Half Star
 glBegin(GL_POLYGON);
    glVertex2f(129,52);
    glVertex2f(143,52);
    glVertex2f(139,50);
    glVertex2f(133,50);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(134,52);
    glVertex2f(138,52);
     glVertex2f(136,56);
    glEnd();


    //Rest of the Stars
 float y=0;
 for(int x=0;x<=80;x+=12.9)
{


    //1stTriangle
    glBegin(GL_TRIANGLES);
    glVertex2f(51.5+x,142-y);
    glVertex2f(49.5+x,139-y);
    glVertex2f(53.5+x,139-y);
    glEnd();
    //2nd Triangle
    glBegin(GL_TRIANGLES);
    glVertex2f(44.5+x,139-y);
    glVertex2f(56.5+x,133-y);
    glVertex2f(52.5+x,139-y);
    glEnd();
    //3rd Triangle
    glBegin(GL_TRIANGLES);
    glVertex2f(58.5+x,139-y);
    glVertex2f(49.5+x,139-y);
    glVertex2f(46.5+x,133-y);
    glEnd();
y+=12.5;
}
glFlush();
}
void init()
{
    glClearColor(0.0,0.0,0.0,0.0);

}


int main(int argc,char **argv) {
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
    glutInitWindowSize(600,600);
    glutCreateWindow("The Flag of Bosnia and Herzegovina");
    init();
    glOrtho(0.0,200.0,0.0,200.0,-1,1);
    glutDisplayFunc(draw);
    glutMainLoop();

    return 0;
}
