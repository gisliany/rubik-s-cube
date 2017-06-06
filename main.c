// To compile: gcc -o main main.c -lGL -lGLU -lglut

#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
    /*  clear all pixels  */
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Limpe a tela e o Z-Buffer
    glLoadIdentity();

    //FRONT
    //quad 1
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(-1.0, 0.0, 1.0);
        glVertex3f(0.0, 0.0, 1.0);
        glVertex3f(0.0, 1.0, 1.0);
        glVertex3f(-1.0, 1.0, 1.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(-1.0, 0.0, 1.0);
        glVertex3f(0.0, 0.0, 1.0);
        glVertex3f(0.0, 1.0, 1.0);
        glVertex3f(-1.0, 1.0, 1.0);
    glEnd();

    //quad 2
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(0.0, 0.0, 1.0);
        glVertex3f(1.0, 0.0, 1.0);
        glVertex3f(1.0, 1.0, 1.0);
        glVertex3f(0.0, 1.0, 1.0);
    glEnd();


    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(0.0, 0.0, 1.0);
        glVertex3f(1.0, 0.0, 1.0);
        glVertex3f(1.0, 1.0, 1.0);
        glVertex3f(0.0, 1.0, 1.0);
    glEnd();


    //quad 3
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(-1.0, -1.0, 1.0);
        glVertex3f(0.0, -1.0, 1.0);
        glVertex3f(0.0, 0.0, 1.0);
        glVertex3f(-1.0, 0.0, 1.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(-1.0, -1.0, 1.0);
        glVertex3f(0.0, -1.0, 1.0);
        glVertex3f(0.0, 0.0, 1.0);
        glVertex3f(-1.0, 0.0, 1.0);
    glEnd();

    //quad 4
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(0.0, -1.0, 1.0);
        glVertex3f(1.0, -1.0, 1.0);
        glVertex3f(1.0, 0.0, 1.0);
        glVertex3f(0.0, 0.0, 1.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(0.0, -1.0, 1.0);
        glVertex3f(1.0, -1.0, 1.0);
        glVertex3f(1.0, 0.0, 1.0);
        glVertex3f(0.0, 0.0, 1.0);
    glEnd();

    //UP
    //quad 1
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(-1.0, 1.0, 0.0);
        glVertex3f(0.0, 1.0, 0.0);
        glVertex3f(0.0, 1.0, -1.0);
        glVertex3f(-1.0, 1.0, -1.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
         glVertex3f(-1.0, 1.0, 0.0);
        glVertex3f(0.0, 1.0, 0.0);
        glVertex3f(0.0, 1.0, -1.0);
        glVertex3f(-1.0, 1.0, -1.0);
    glEnd();

    //quad 2
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(0.0, 1.0, 0.0);
        glVertex3f(1.0, 1.0, 0.0);
        glVertex3f(1.0, 1.0, -1.0);
        glVertex3f(0.0, 1.0, -1.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(0.0, 1.0, 0.0);
        glVertex3f(1.0, 1.0, 0.0);
        glVertex3f(1.0, 1.0, -1.0);
        glVertex3f(0.0, 1.0, -1.0);
    glEnd();

//quad 3
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(-1.0, 1.0, 1.0);
        glVertex3f(0.0, 1.0, 1.0);
        glVertex3f(0.0, 1.0, 0.0);
        glVertex3f(-1.0, 1.0, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(-1.0, 1.0, 1.0);
        glVertex3f(0.0, 1.0, 1.0);
        glVertex3f(0.0, 1.0, 0.0);
        glVertex3f(-1.0, 1.0, 0.0);
    glEnd();

    //quad 4
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(0.0, 1.0, 1.0);
        glVertex3f(1.0, 1.0, 1.0);
        glVertex3f(1.0, 1.0, 0.0);
        glVertex3f(0.0, 1.0, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
       glVertex3f(0.0, 1.0, 1.0);
        glVertex3f(1.0, 1.0, 1.0);
        glVertex3f(1.0, 1.0, 0.0);
        glVertex3f(0.0, 1.0, 0.0);
    glEnd();
    
    //LEFT
    //quad 1
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(-1.0, 0.0, -1.0);
        glVertex3f(-1.0, 0.0, 0.0);
        glVertex3f(-1.0, 1.0, 0.0);
        glVertex3f(-1.0, 1.0, -1.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(-1.0, 0.0, -1.0);
        glVertex3f(-1.0, 0.0, 0.0);
        glVertex3f(-1.0, 1.0, 0.0);
        glVertex3f(-1.0, 1.0, -1.0);
    glEnd();

    //quad 2
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(-1.0, 0.0, 0.0);
        glVertex3f(-1.0, 0.0, 1.0);
        glVertex3f(-1.0, 1.0, 1.0);
        glVertex3f(-1.0, 1.0, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(-1.0, 0.0, 0.0);
        glVertex3f(-1.0, 0.0, 1.0);
        glVertex3f(-1.0, 1.0, 1.0);
        glVertex3f(-1.0, 1.0, 0.0);
    glEnd();

    //quad 3
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(-1.0, -1.0, -1.0);
        glVertex3f(-1.0, -1.0, 0.0);
        glVertex3f(-1.0, 0.0, 0.0);
        glVertex3f(-1.0, 0.0, -1.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
         glVertex3f(-1.0, -1.0, -1.0);
        glVertex3f(-1.0, -1.0, 0.0);
        glVertex3f(-1.0, 0.0, 0.0);
        glVertex3f(-1.0, 0.0, -1.0);
    glEnd();

    //quad 4
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(-1.0, -1.0, 0.0);
        glVertex3f(-1.0, -1.0, 1.0);
        glVertex3f(-1.0, 0.0, 1.0);
        glVertex3f(-1.0, 0.0, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(-1.0, -1.0, 0.0);
        glVertex3f(-1.0, -1.0, 1.0);
        glVertex3f(-1.0, 0.0, 1.0);
        glVertex3f(-1.0, 0.0, 0.0);
    glEnd();

    //BACK
    //quad 1
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(-1.0, 1.0, -1.0);
        glVertex3f(0.0, 1.0, -1.0);
        glVertex3f(-1.0, 0.0, -1.0);
        glVertex3f(0.0, 0.0, -1.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
       glVertex3f(-1.0, 1.0, -1.0);
        glVertex3f(0.0, 1.0, -1.0);
        glVertex3f(-1.0, 0.0, -1.0);
        glVertex3f(0.0, 0.0, -1.0);
    glEnd();

    //quad 2
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(0.0, 1.0, -1.0);
        glVertex3f(1.0, 1.0, -1.0);
        glVertex3f(0.0, 0.0, -1.0);
        glVertex3f(1.0, 0.0, -1.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(0.0, 1.0, -1.0);
        glVertex3f(1.0, 1.0, -1.0);
        glVertex3f(0.0, 0.0, -1.0);
        glVertex3f(1.0, 0.0, -1.0);
    glEnd();

    //quad 3
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(-1.0, 0.0, -1.0);
        glVertex3f(0.0, 0.0, -1.0);
        glVertex3f(-1.0, -1.0, -1.0);
        glVertex3f(0.0, -1.0, -1.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(-1.0, 0.0, -1.0);
        glVertex3f(0.0, 0.0, -1.0);
        glVertex3f(-1.0, -1.0, -1.0);
        glVertex3f(0.0, -1.0, -1.0);
    glEnd();

    //quad 4
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(0.0, 0.0, -1.0);
        glVertex3f(1.0, 0.0, -1.0);
        glVertex3f(0.0, -1.0, -1.0);
        glVertex3f(1.0, -1.0, -1.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(0.0, 0.0, -1.0);
        glVertex3f(1.0, 0.0, -1.0);
        glVertex3f(0.0, -1.0, -1.0);
        glVertex3f(1.0, -1.0, -1.0);
    glEnd();

    //RIGHT
    //quad 1
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(1.0, 1.0, 1.0);
        glVertex3f(1.0, 1.0, 0.0);
        glVertex3f(1.0, 0.0, 0.0);
        glVertex3f(1.0, 0.0, 1.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(1.0, 1.0, 1.0);
        glVertex3f(1.0, 1.0, 0.0);
        glVertex3f(1.0, 0.0, 0.0);
        glVertex3f(1.0, 0.0, 1.0);
    glEnd();

    //quad 2
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(1.0, 1.0, 0.0);
        glVertex3f(1.0, 1.0, -1.0);
        glVertex3f(1.0, 0.0, 0.0);
        glVertex3f(1.0, 0.0, -1.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(1.0, 1.0, 0.0);
        glVertex3f(1.0, 1.0, -1.0);
        glVertex3f(1.0, 0.0, 0.0);
        glVertex3f(1.0, 0.0, -1.0);
    glEnd();

    //quad 3
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(1.0, 0.0, 1.0);
        glVertex3f(1.0, 0.0, 0.0);
        glVertex3f(1.0, -1.0, 1.0);
        glVertex3f(1.0, -1.0, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(1.0, 0.0, 1.0);
        glVertex3f(1.0, 0.0, 0.0);
        glVertex3f(1.0, -1.0, 1.0);
        glVertex3f(1.0, -1.0, 0.0);
    glEnd();

    //quad 4
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(1.0, 0.0, 0.0);
        glVertex3f(1.0, 0.0, -1.0);
        glVertex3f(1.0, -1.0, 0.0);
        glVertex3f(1.0, -1.0, -1.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
       glVertex3f(1.0, 0.0, 0.0);
        glVertex3f(1.0, 0.0, -1.0);
        glVertex3f(1.0, -1.0, 0.0);
        glVertex3f(1.0, -1.0, -1.0);
    glEnd();

    //BOTTOM
    //quad 1
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(0.0, -1.0, 1.0);
        glVertex3f(-1.0, -1.0, 1.0);
        glVertex3f(-1.0, -1.0, 0.0);
        glVertex3f(0.0, -1.0, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
         glVertex3f(0.0, -1.0, 1.0);
        glVertex3f(-1.0, -1.0, 1.0);
        glVertex3f(-1.0, -1.0, 0.0);
        glVertex3f(0.0, -1.0, 0.0);
    glEnd();

    //quad 2
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(1.0, -1.0, 1.0);
        glVertex3f(0.0, -1.0, 1.0);
        glVertex3f(0.0, -1.0, 0.0);
        glVertex3f(1.0, -1.0, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(1.0, -1.0, 1.0);
        glVertex3f(0.0, -1.0, 1.0);
        glVertex3f(0.0, -1.0, 0.0);
        glVertex3f(1.0, -1.0, 0.0);
    glEnd();

    //quad 3
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(0.0, -1.0, 0.0);
        glVertex3f(-1.0, -1.0, 0.0);
        glVertex3f(-1.0, -1.0, -1.0);
        glVertex3f(0.0, -1.0, -1.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(0.0, -1.0, 0.0);
        glVertex3f(-1.0, -1.0, 0.0);
        glVertex3f(-1.0, -1.0, -1.0);
        glVertex3f(0.0, -1.0, -1.0);
    glEnd();
    
    //quad 4
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(0.0, -1.0, 0.0);
        glVertex3f(1.0, -1.0, 0.0);
        glVertex3f(1.0, -1.0, -1.0);
        glVertex3f(0.0, -1.0, -1.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(0.0, -1.0, 0.0);
        glVertex3f(1.0, -1.0, 0.0);
        glVertex3f(1.0, -1.0, -1.0);
        glVertex3f(0.0, -1.0, -1.0);
    glEnd();

    glFlush();
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10.0*(GLfloat)w/(GLfloat)h, 10.0*(GLfloat)w/(GLfloat)h,-10.0,10.0,-10.0,10.0);
    glMatrixMode(GL_MODELVIEW);
}




int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("hello");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}

