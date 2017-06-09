#include <GL/gl.h>
#include <GL/glu.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#include <stdlib.h>

GLuint theCube;

/* Draw a cube */
static void cube(int numc, int numt)
{
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

    glColor3f(0.0, 1.0, 1.0);
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

    glColor3f(0.0, 1.0, 1.0);
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

    glColor3f(0.0, 1.0, 1.0);
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

    glColor3f(0.0, 1.0, 1.0);
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

    glColor3f(1.0, 0.0, 1.0);
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

    glColor3f(1.0, 0.0, 1.0);
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

    glColor3f(1.0, 0.0, 1.0);
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

    glColor3f(1.0, 0.0, 1.0);
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
        glVertex3f(-1.0, 0.0, -1.0);
        glVertex3f(0.0, 0.0, -1.0);
        glVertex3f(0.0, 1.0, -1.0);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f(-1.0, 1.0, -1.0);
        glVertex3f(-1.0, 0.0, -1.0);
        glVertex3f(0.0, 0.0, -1.0);
        glVertex3f(0.0, 1.0, -1.0);
    glEnd();

    //quad 2
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(0.0, 1.0, -1.0);
        glVertex3f(1.0, 1.0, -1.0);
        glVertex3f(1.0, 0.0, -1.0);
        glVertex3f(0.0, 0.0, -1.0);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f(0.0, 1.0, -1.0);
        glVertex3f(1.0, 1.0, -1.0);
        glVertex3f(1.0, 0.0, -1.0);
        glVertex3f(0.0, 0.0, -1.0);
    glEnd();

    //quad 3
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(-1.0, 0.0, -1.0);
        glVertex3f(0.0, 0.0, -1.0);
        glVertex3f(0.0, -1.0, -1.0);
        glVertex3f(-1.0, -1.0, -1.0);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f(-1.0, 0.0, -1.0);
        glVertex3f(0.0, 0.0, -1.0);
        glVertex3f(0.0, -1.0, -1.0);
        glVertex3f(-1.0, -1.0, -1.0);
    glEnd();

    //quad 4
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(0.0, 0.0, -1.0);
        glVertex3f(1.0, 0.0, -1.0);
        glVertex3f(1.0, -1.0, -1.0);
        glVertex3f(0.0, -1.0, -1.0);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f(0.0, 0.0, -1.0);
        glVertex3f(1.0, 0.0, -1.0);
        glVertex3f(1.0, -1.0, -1.0);
        glVertex3f(0.0, -1.0, -1.0);
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

    glColor3f(1.0, 0.0, 0.0);
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
        glVertex3f(1.0, 0.0, -1.0);
        glVertex3f(1.0, 0.0, 0.0);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f(1.0, 1.0, 0.0);
        glVertex3f(1.0, 1.0, -1.0);
        glVertex3f(1.0, 0.0, -1.0);
        glVertex3f(1.0, 0.0, 0.0);
    glEnd();

    //quad 3
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(1.0, 0.0, 1.0);
        glVertex3f(1.0, 0.0, 0.0);
        glVertex3f(1.0, -1.0, 0.0);
        glVertex3f(1.0, -1.0, 1.0);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f(1.0, 0.0, 1.0);
        glVertex3f(1.0, 0.0, 0.0);
        glVertex3f(1.0, -1.0, 0.0);
        glVertex3f(1.0, -1.0, 1.0);
    glEnd();

    //quad 4
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
        glVertex3f(1.0, 0.0, 0.0);
        glVertex3f(1.0, 0.0, -1.0);
        glVertex3f(1.0, -1.0, -1.0);
        glVertex3f(1.0, -1.0, 0.0);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
       glVertex3f(1.0, 0.0, 0.0);
        glVertex3f(1.0, 0.0, -1.0);
        glVertex3f(1.0, -1.0, -1.0);
        glVertex3f(1.0, -1.0, 0.0);
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

    glColor3f(0.0, 1.0, 0.0);
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

    glColor3f(0.0, 1.0, 0.0);
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

    glColor3f(0.0, 1.0, 0.0);
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

    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f(0.0, -1.0, 0.0);
        glVertex3f(1.0, -1.0, 0.0);
        glVertex3f(1.0, -1.0, -1.0);
        glVertex3f(0.0, -1.0, -1.0);
    glEnd();
}

/* Create display list with Cube and initialize state*/
static void init(void)
{
   theCube = glGenLists (1);
   glNewList(theCube, GL_COMPILE);
   cube(8, 25);
   glEndList();

   glShadeModel(GL_FLAT);
   glClearColor(0.0, 0.0, 0.0, 0.0);
}

void display(void)
{
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   glColor3f (1.0, 1.0, 1.0);
   glCallList(theCube);
   glFlush();
}

void reshape(int w, int h)
{
   glViewport(0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if (w <= h)
        glOrtho(-5.0, 5.0, -5.0*(GLfloat)h/(GLfloat)w, 
                5.0*(GLfloat)h/(GLfloat)w, -5.0, 5.0);
    else
        glOrtho(-5.0*(GLfloat)w/(GLfloat)h, 
                5.0*(GLfloat)w/(GLfloat)h, -5.0, 5.0, -5.0, 5.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

/* Rotate about x-axis when "x" typed; rotate about y-axis
   when "y" typed; "i" returns cube to original view */
void keyboard(unsigned char key, int x, int y)
{
   switch (key) {
    case 'q':
    case 'Q':
        break;
    case 'w':
    case 'W':
        break;
    case 'e':
    case 'E':
        break;
    case 'a':
    case 'A':
        break;
    case 's':
    case 'S':
        break;
    case 'd':
    case 'D':
        break;
    case 27:
        exit(0);
        break;
    }
}

void keyboardSpecialKeys(int key, int x, int y) {
    if (key == GLUT_KEY_DOWN) { 
        glRotatef(15.,1.0,0.0,0.0);
        glutPostRedisplay();
    } else if (key == GLUT_KEY_UP) { 
        glRotatef(-15.,1.0,0.0,0.0);
        glutPostRedisplay();
    } else if (key == GLUT_KEY_LEFT) { 
        glRotatef(-15.,0.0,1.0,0.0);
        glutPostRedisplay();
    } else if (key == GLUT_KEY_RIGHT) { 
        glRotatef(15.,0.0,1.0,0.0);
        glutPostRedisplay();
    }
}

int main(int argc, char **argv)
{
   glutInitWindowSize(200, 200);
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
   glutCreateWindow(argv[0]);
   init();
   glutReshapeFunc(reshape);
   glutKeyboardFunc(keyboard);
   glutSpecialFunc(keyboardSpecialKeys);
   glutDisplayFunc(display);
   glEnable(GL_DEPTH_TEST);
   glutMainLoop();
   return 0;
}