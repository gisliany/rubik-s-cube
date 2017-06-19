#include <GL/gl.h>
#include <GL/glu.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <unistd.h>

GLuint theCube;
static int top[2][2] = {{0, 0}, {0, 0}},
           right[2][2] = {{1, 1}, {1, 1}},
           front[2][2] = {{2, 2}, {2, 2}},
           back[2][2] = {{3, 3}, {3, 3}},
           bottom[2][2] = {{4, 4}, {4, 4}},
           left[2][2] = {{5, 5}, {5, 5}},
           temp[2][2];

GLfloat color[][3] = {
    {0.0, 1.0, 1.0}, //azul
    {1.0, 0.0, 0.0}, //vermelho
    {1.0, 1.0, 1.0}, //branco
    {1.0, 1.0, 0.0}, //amarelo
    {0.0, 1.0, 0.0}, //verde
    {1.0, 0.0, 1.0}  //rosa
};

int rotation = 0, inverse = 0;
int i;
float theta = 360;

void colorcube1()
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

    glColor3fv(color[front[0][0]]);
    glBegin(GL_POLYGON);
    glVertex3f(-1.0, 0.0, 1.0);
    glVertex3f(0.0, 0.0, 1.0);
    glVertex3f(0.0, 1.0, 1.0);
    glVertex3f(-1.0, 1.0, 1.0);
    glEnd();

    //  TOP
    //quad 3
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-1.0, 1.0, 1.0);
    glVertex3f(0.0, 1.0, 1.0);
    glVertex3f(0.0, 1.0, 0.0);
    glVertex3f(-1.0, 1.0, 0.0);
    glEnd();

    glColor3fv(color[top[1][0]]);
    glBegin(GL_POLYGON);
    glVertex3f(-1.0, 1.0, 1.0);
    glVertex3f(0.0, 1.0, 1.0);
    glVertex3f(0.0, 1.0, 0.0);
    glVertex3f(-1.0, 1.0, 0.0);
    glEnd();

    //LEFT
    //quad2
    //quad 2
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-1.0, 0.0, 0.0);
    glVertex3f(-1.0, 0.0, 1.0);
    glVertex3f(-1.0, 1.0, 1.0);
    glVertex3f(-1.0, 1.0, 0.0);
    glEnd();

    glColor3fv(color[left[0][1]]);
    glBegin(GL_POLYGON);
    glVertex3f(-1.0, 0.0, 0.0);
    glVertex3f(-1.0, 0.0, 1.0);
    glVertex3f(-1.0, 1.0, 1.0);
    glVertex3f(-1.0, 1.0, 0.0);
    glEnd();
}

void colorcube2()
{
    //FRONT
    //quad 2
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.0, 0.0, 1.0);
    glVertex3f(1.0, 0.0, 1.0);
    glVertex3f(1.0, 1.0, 1.0);
    glVertex3f(0.0, 1.0, 1.0);
    glEnd();

    glColor3fv(color[front[0][1]]);
    glBegin(GL_POLYGON);
    glVertex3f(0.0, 0.0, 1.0);
    glVertex3f(1.0, 0.0, 1.0);
    glVertex3f(1.0, 1.0, 1.0);
    glVertex3f(0.0, 1.0, 1.0);
    glEnd();

    //TOP
    //quad 4
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.0, 1.0, 1.0);
    glVertex3f(1.0, 1.0, 1.0);
    glVertex3f(1.0, 1.0, 0.0);
    glVertex3f(0.0, 1.0, 0.0);
    glEnd();

    glColor3fv(color[top[1][1]]);
    glBegin(GL_POLYGON);
    glVertex3f(0.0, 1.0, 1.0);
    glVertex3f(1.0, 1.0, 1.0);
    glVertex3f(1.0, 1.0, 0.0);
    glVertex3f(0.0, 1.0, 0.0);
    glEnd();

    //RIGHT
    //quad1
    //quad 1
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(1.0, 1.0, 1.0);
    glVertex3f(1.0, 1.0, 0.0);
    glVertex3f(1.0, 0.0, 0.0);
    glVertex3f(1.0, 0.0, 1.0);
    glEnd();

    glColor3fv(color[right[0][0]]);
    glBegin(GL_POLYGON);
    glVertex3f(1.0, 1.0, 1.0);
    glVertex3f(1.0, 1.0, 0.0);
    glVertex3f(1.0, 0.0, 0.0);
    glVertex3f(1.0, 0.0, 1.0);
    glEnd();
}

void colorcube3()
{
    //FRONT
    //quad 3
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-1.0, -1.0, 1.0);
    glVertex3f(0.0, -1.0, 1.0);
    glVertex3f(0.0, 0.0, 1.0);
    glVertex3f(-1.0, 0.0, 1.0);
    glEnd();

    glColor3fv(color[front[1][0]]);
    glBegin(GL_POLYGON);
    glVertex3f(-1.0, -1.0, 1.0);
    glVertex3f(0.0, -1.0, 1.0);
    glVertex3f(0.0, 0.0, 1.0);
    glVertex3f(-1.0, 0.0, 1.0);
    glEnd();

    //LEFT
    //quad 4
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-1.0, -1.0, 0.0);
    glVertex3f(-1.0, -1.0, 1.0);
    glVertex3f(-1.0, 0.0, 1.0);
    glVertex3f(-1.0, 0.0, 0.0);
    glEnd();

    glColor3fv(color[left[1][1]]);
    glBegin(GL_POLYGON);
    glVertex3f(-1.0, -1.0, 0.0);
    glVertex3f(-1.0, -1.0, 1.0);
    glVertex3f(-1.0, 0.0, 1.0);
    glVertex3f(-1.0, 0.0, 0.0);
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

    glColor3fv(color[bottom[0][0]]);
    glBegin(GL_POLYGON);
    glVertex3f(0.0, -1.0, 1.0);
    glVertex3f(-1.0, -1.0, 1.0);
    glVertex3f(-1.0, -1.0, 0.0);
    glVertex3f(0.0, -1.0, 0.0);
    glEnd();
}

void colorcube4()
{
    //FRONT
    //quad 4
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.0, -1.0, 1.0);
    glVertex3f(1.0, -1.0, 1.0);
    glVertex3f(1.0, 0.0, 1.0);
    glVertex3f(0.0, 0.0, 1.0);
    glEnd();

    glColor3fv(color[front[1][1]]);
    glBegin(GL_POLYGON);
    glVertex3f(0.0, -1.0, 1.0);
    glVertex3f(1.0, -1.0, 1.0);
    glVertex3f(1.0, 0.0, 1.0);
    glVertex3f(0.0, 0.0, 1.0);
    glEnd();

    //RIGHT
    //quad 3
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(1.0, 0.0, 1.0);
    glVertex3f(1.0, 0.0, 0.0);
    glVertex3f(1.0, -1.0, 0.0);
    glVertex3f(1.0, -1.0, 1.0);
    glEnd();

    glColor3fv(color[right[1][0]]);
    glBegin(GL_POLYGON);
    glVertex3f(1.0, 0.0, 1.0);
    glVertex3f(1.0, 0.0, 0.0);
    glVertex3f(1.0, -1.0, 0.0);
    glVertex3f(1.0, -1.0, 1.0);
    glEnd();

    //BOTTOM
    //quad 2
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(1.0, -1.0, 1.0);
    glVertex3f(0.0, -1.0, 1.0);
    glVertex3f(0.0, -1.0, 0.0);
    glVertex3f(1.0, -1.0, 0.0);
    glEnd();

    glColor3fv(color[bottom[0][1]]);
    glBegin(GL_POLYGON);
    glVertex3f(1.0, -1.0, 1.0);
    glVertex3f(0.0, -1.0, 1.0);
    glVertex3f(0.0, -1.0, 0.0);
    glVertex3f(1.0, -1.0, 0.0);
    glEnd();
}

void colorcube5()
{
    //BACK
    //quad 2
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-1.0, 1.0, -1.0);
    glVertex3f(-1.0, 0.0, -1.0);
    glVertex3f(0.0, 0.0, -1.0);
    glVertex3f(0.0, 1.0, -1.0);
    glEnd();

    glColor3fv(color[back[0][1]]);
    glBegin(GL_POLYGON);
    glVertex3f(-1.0, 1.0, -1.0);
    glVertex3f(-1.0, 0.0, -1.0);
    glVertex3f(0.0, 0.0, -1.0);
    glVertex3f(0.0, 1.0, -1.0);
    glEnd();

    //TOP
    //quad 1
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-1.0, 1.0, 0.0);
    glVertex3f(0.0, 1.0, 0.0);
    glVertex3f(0.0, 1.0, -1.0);
    glVertex3f(-1.0, 1.0, -1.0);
    glEnd();

    glColor3fv(color[top[0][0]]);
    glBegin(GL_POLYGON);
    glVertex3f(-1.0, 1.0, 0.0);
    glVertex3f(0.0, 1.0, 0.0);
    glVertex3f(0.0, 1.0, -1.0);
    glVertex3f(-1.0, 1.0, -1.0);
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

    glColor3fv(color[left[0][0]]);
    glBegin(GL_POLYGON);
    glVertex3f(-1.0, 0.0, -1.0);
    glVertex3f(-1.0, 0.0, 0.0);
    glVertex3f(-1.0, 1.0, 0.0);
    glVertex3f(-1.0, 1.0, -1.0);
    glEnd();
}

void colorcube6()
{
    //BACK
    //quad 1
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.0, 1.0, -1.0);
    glVertex3f(1.0, 1.0, -1.0);
    glVertex3f(1.0, 0.0, -1.0);
    glVertex3f(0.0, 0.0, -1.0);
    glEnd();

    glColor3fv(color[back[0][0]]);
    glBegin(GL_POLYGON);
    glVertex3f(0.0, 1.0, -1.0);
    glVertex3f(1.0, 1.0, -1.0);
    glVertex3f(1.0, 0.0, -1.0);
    glVertex3f(0.0, 0.0, -1.0);
    glEnd();

    //TOP
    //quad 2
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.0, 1.0, 0.0);
    glVertex3f(1.0, 1.0, 0.0);
    glVertex3f(1.0, 1.0, -1.0);
    glVertex3f(0.0, 1.0, -1.0);
    glEnd();

    glColor3fv(color[top[0][1]]);
    glBegin(GL_POLYGON);
    glVertex3f(0.0, 1.0, 0.0);
    glVertex3f(1.0, 1.0, 0.0);
    glVertex3f(1.0, 1.0, -1.0);
    glVertex3f(0.0, 1.0, -1.0);
    glEnd();

    //RIGHT
    //quad 2
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(1.0, 1.0, 0.0);
    glVertex3f(1.0, 1.0, -1.0);
    glVertex3f(1.0, 0.0, -1.0);
    glVertex3f(1.0, 0.0, 0.0);
    glEnd();

    glColor3fv(color[right[0][1]]);
    glBegin(GL_POLYGON);
    glVertex3f(1.0, 1.0, 0.0);
    glVertex3f(1.0, 1.0, -1.0);
    glVertex3f(1.0, 0.0, -1.0);
    glVertex3f(1.0, 0.0, 0.0);
    glEnd();
}

void colorcube7()
{
    //BACK
    //quad 4
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-1.0, 0.0, -1.0);
    glVertex3f(0.0, 0.0, -1.0);
    glVertex3f(0.0, -1.0, -1.0);
    glVertex3f(-1.0, -1.0, -1.0);
    glEnd();

    glColor3fv(color[back[1][1]]);
    glBegin(GL_POLYGON);
    glVertex3f(-1.0, 0.0, -1.0);
    glVertex3f(0.0, 0.0, -1.0);
    glVertex3f(0.0, -1.0, -1.0);
    glVertex3f(-1.0, -1.0, -1.0);
    glEnd();

    //LEFT
    //quad 3
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-1.0, -1.0, -1.0);
    glVertex3f(-1.0, -1.0, 0.0);
    glVertex3f(-1.0, 0.0, 0.0);
    glVertex3f(-1.0, 0.0, -1.0);
    glEnd();

    glColor3fv(color[left[1][0]]);
    glBegin(GL_POLYGON);
    glVertex3f(-1.0, -1.0, -1.0);
    glVertex3f(-1.0, -1.0, 0.0);
    glVertex3f(-1.0, 0.0, 0.0);
    glVertex3f(-1.0, 0.0, -1.0);
    glEnd();

    //BOTTOM
    //quad 3
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.0, -1.0, 0.0);
    glVertex3f(-1.0, -1.0, 0.0);
    glVertex3f(-1.0, -1.0, -1.0);
    glVertex3f(0.0, -1.0, -1.0);
    glEnd();

    glColor3fv(color[bottom[1][0]]);
    glBegin(GL_POLYGON);
    glVertex3f(0.0, -1.0, 0.0);
    glVertex3f(-1.0, -1.0, 0.0);
    glVertex3f(-1.0, -1.0, -1.0);
    glVertex3f(0.0, -1.0, -1.0);
    glEnd();
}

void colorcube8()
{
    //BACK
    //quad 3
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.0, 0.0, -1.0);
    glVertex3f(1.0, 0.0, -1.0);
    glVertex3f(1.0, -1.0, -1.0);
    glVertex3f(0.0, -1.0, -1.0);
    glEnd();

    glColor3fv(color[back[1][0]]);
    glBegin(GL_POLYGON);
    glVertex3f(0.0, 0.0, -1.0);
    glVertex3f(1.0, 0.0, -1.0);
    glVertex3f(1.0, -1.0, -1.0);
    glVertex3f(0.0, -1.0, -1.0);
    glEnd();

    //RIGHT
    //quad 4
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(1.0, 0.0, 0.0);
    glVertex3f(1.0, 0.0, -1.0);
    glVertex3f(1.0, -1.0, -1.0);
    glVertex3f(1.0, -1.0, 0.0);
    glEnd();

    glColor3fv(color[right[1][1]]);
    glBegin(GL_POLYGON);
    glVertex3f(1.0, 0.0, 0.0);
    glVertex3f(1.0, 0.0, -1.0);
    glVertex3f(1.0, -1.0, -1.0);
    glVertex3f(1.0, -1.0, 0.0);
    glEnd();

    //BOTTOM
    //quad 4
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.0, -1.0, 0.0);
    glVertex3f(1.0, -1.0, 0.0);
    glVertex3f(1.0, -1.0, -1.0);
    glVertex3f(0.0, -1.0, -1.0);
    glEnd();

    glColor3fv(color[bottom[1][1]]);
    glBegin(GL_POLYGON);
    glVertex3f(0.0, -1.0, 0.0);
    glVertex3f(1.0, -1.0, 0.0);
    glVertex3f(1.0, -1.0, -1.0);
    glVertex3f(0.0, -1.0, -1.0);
    glEnd();
}

void topc()
{
    int temp1 = back[0][1];
    int temp2 = back[0][0];

    back[0][1] = left[0][1];
    back[0][0] = left[0][0];

    left[0][1] = front[0][1];
    left[0][0] = front[0][0];

    front[0][0] = right[0][0];
    front[0][1] = right[0][1];

    right[0][0] = temp2;
    right[0][1] = temp1;

    int temp = top[0][0];
    top[0][0] = top[1][0];
    top[1][0] = top[1][1];
    top[1][1] = top[0][1];
    top[0][1] = temp;
}

void frontc()
{
    int temp1 = left[0][1];
    int temp2 = left[1][1];

    left[0][1] = bottom[0][0];
    left[1][1] = bottom[0][1];

    bottom[0][0] = right[1][0];
    bottom[0][1] = right[0][0];

    right[0][0] = top[1][0];
    right[1][0] = top[1][1];

    top[1][0] = temp2;
    top[1][1] = temp1;

    int temp = front[0][0];
    front[0][0] = front[1][0];
    front[1][0] = front[1][1];
    front[1][1] = front[0][1];
    front[0][1] = temp;
}

void rightc()
{
    int temp1 = top[0][1];
    int temp2 = top[1][1];

    top[0][1] = front[0][1];
    top[1][1] = front[1][1];

    front[0][1] = bottom[0][1];
    front[1][1] = bottom[1][1];

    bottom[0][1] = back[1][0];
    bottom[1][1] = back[0][0];

    back[1][0] = temp1;
    back[0][0] = temp2;

    int temp = right[0][0];
    right[0][0] = right[1][0];
    right[1][0] = right[1][1];
    right[1][1] = right[0][1];
    right[0][1] = temp;
}

void leftc()
{
    int temp1 = front[0][0];
    int temp2 = front[1][0];

    front[0][0] = bottom[0][0];
    front[1][0] = bottom[1][0];

    bottom[0][0] = back[1][1];
    bottom[1][0] = back[0][1];

    back[1][1] = top[0][0];
    back[0][1] = top[1][0];

    top[0][0] = temp1;
    top[1][0] = temp2;

    int temp = left[0][0];
    left[0][0] = left[0][1];
    left[0][1] = left[1][1];
    left[1][1] = left[1][0];
    left[1][0] = temp;
}

void backc()
{
    int temp1 = top[0][0];
    int temp2 = top[0][1];

    top[0][0] = left[1][0];
    top[0][1] = left[0][0];

    left[0][0] = bottom[1][0];
    left[1][0] = bottom[1][1];

    bottom[1][0] = right[1][1];
    bottom[1][1] = right[0][1];

    right[1][1] = temp2;
    right[0][1] = temp1;

    int temp = back[0][0];
    back[0][0] = back[0][1];
    back[0][1] = back[1][1];
    back[1][1] = back[1][0];
    back[1][0] = temp;
}

void bottomc()
{
    int temp1 = front[1][0];
    int temp2 = front[1][1];

    front[1][0] = right[1][0];
    front[1][1] = right[1][1];

    right[1][0] = back[1][0];
    right[1][1] = back[1][1];

    back[1][0] = left[1][0];
    back[1][1] = left[1][1];

    left[1][0] = temp1;
    left[1][1] = temp2;

    int temp = bottom[0][0];
    bottom[0][0] = bottom[0][1];
    bottom[0][1] = bottom[1][1];
    bottom[1][1] = bottom[1][0];
    bottom[1][0] = temp;
}

void changeColors()
{
    if (rotation == 1 && inverse == 0)
    {
        frontc();
    }
    if (rotation == 1 && inverse == 1)
    {
        frontc();
        frontc();
        frontc();
    }

    if (rotation == 2 && inverse == 0)
    {
        backc();
    }
    if (rotation == 2 && inverse == 1)
    {
        backc();
        backc();
        backc();
    }
    if (rotation == 3 && inverse == 0)
    {
        topc();
    }
    if (rotation == 3 && inverse == 1)
    {
        topc();
        topc();
        topc();
    }
    if (rotation == 4 && inverse == 0)
    {
        bottomc();
    }
    if (rotation == 4 && inverse == 1)
    {
        bottomc();
        bottomc();
        bottomc();
    }
    if (rotation == 5 && inverse == 0)
    {
        leftc();
    }
    if (rotation == 5 && inverse == 1)
    {
        leftc();
        leftc();
        leftc();
    }
    if (rotation == 6 && inverse == 0)
    {
        rightc();
    }
    if (rotation == 6 && inverse == 1)
    {
        rightc();
        rightc();
        rightc();
    }
}

static void init(void)
{
    theCube = glGenLists(1);
    glPushMatrix();
    glNewList(theCube, GL_COMPILE);
    if (rotation == 0)
    {
        colorcube1();
        colorcube2();
        colorcube3();
        colorcube4();
        colorcube5();
        colorcube6();
        colorcube7();
        colorcube8();
    }
    else if (rotation == 1)
    {
        colorcube5();
        colorcube6();
        colorcube7();
        colorcube8();
        if (inverse == 0)
        {
            glRotatef(-theta, 0.0, 0.0, 1.0);
        }
        else
        {
            glRotatef(theta, 0.0, 0.0, 1.0);
        }
        colorcube1();
        colorcube2();
        colorcube3();
        colorcube4();
    }
    else if (rotation == 2)
    {
        colorcube1();
        colorcube2();
        colorcube3();
        colorcube4();
        if (inverse == 0)
        {
            glRotatef(-theta, 0.0, 0.0, 1.0);
        }
        else
        {
            glRotatef(theta, 0.0, 0.0, 1.0);
        }
        colorcube5();
        colorcube6();
        colorcube7();
        colorcube8();
    }
    else if (rotation == 3)
    {
        colorcube3();
        colorcube4();
        colorcube7();
        colorcube8();
        if (inverse == 0)
        {
            glRotatef(-theta, 0.0, 1.0, 0.0);
        }
        else
        {
            glRotatef(theta, 0.0, 1.0, 0.0);
        }
        colorcube1();
        colorcube2();
        colorcube5();
        colorcube6();
    }
    else if (rotation == 4)
    {
        colorcube1();
        colorcube2();
        colorcube5();
        colorcube6();
        if (inverse == 0)
        {
            glRotatef(-theta, 0.0, 1.0, 0.0);
        }
        else
        {
            glRotatef(theta, 0.0, 1.0, 0.0);
        }
        colorcube3();
        colorcube4();
        colorcube7();
        colorcube8();
    }
    else if (rotation == 5)
    {
        colorcube2();
        colorcube4();
        colorcube6();
        colorcube8();
        if (inverse == 0)
        {
            glRotatef(-theta, 1.0, 0.0, 0.0);
        }
        else
        {
            glRotatef(theta, 1.0, 0.0, 0.0);
        }
        colorcube1();
        colorcube3();
        colorcube5();
        colorcube7();
        
    }
    else if (rotation == 6)
    {
        colorcube1();
        colorcube3();
        colorcube5();
        colorcube7();
        if (inverse == 0)
        {
            glRotatef(-theta, 1.0, 0.0, 0.0);
        }
        else
        {
            glRotatef(theta, 1.0, 0.0, 0.0);
        }
        colorcube2();
        colorcube4();
        colorcube6();
        colorcube8();
    }

    glPopMatrix();
    glEndList();
}

void display(void)
{
    init();
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glCallList(theCube);

    glutSwapBuffers();
    glFlush();
}

void callInit()
{
    int j;
    theta = 0;
    for (j = 0; j <= 90; j += 10)
    {
        display();
        usleep(30000);
        theta += 10;
    }
    theta = 0;
    changeColors();
    rotation = 0;
}

void reshape(int w, int h)
{
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if (w <= h)
        glOrtho(-5.0, 5.0, -5.0 * (GLfloat)h / (GLfloat)w,
                5.0 * (GLfloat)h / (GLfloat)w, -5.0, 5.0);
    else
        glOrtho(-5.0 * (GLfloat)w / (GLfloat)h,
                5.0 * (GLfloat)w / (GLfloat)h, -5.0, 5.0, -5.0, 5.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'q':
        rotation = 3;
        inverse = 0;
        callInit();
        break;
    case 'Q':
        rotation = 3;
        inverse = 1;
        callInit();
        break;
    case 'w':
        rotation = 2;
        inverse = 0;
        callInit();
        break;
    case 'W':
        rotation = 2;
        inverse = 1;
        callInit();
        break;
    case 'e':
        rotation = 4;
        inverse = 0;
        callInit();
        break;
    case 'E':
        rotation = 4;
        inverse = 1;
        callInit();
        break;
    case 'a':
        rotation = 5;
        inverse = 0;
        callInit();
        break;
    case 'A':
        rotation = 5;
        inverse = 1;
        callInit();
        break;
    case 's':
        rotation = 1;
        inverse = 0;
        callInit();
        break;
    case 'S':
        rotation = 1;
        inverse = 1;
        callInit();
        break;
    case 'd':
        rotation = 6;
        inverse = 0;
        callInit();
        break;
    case 'D':
        rotation = 6;
        inverse = 1;
        callInit();
        break;
    case 'r':
        rotation = rand() % 6;
        inverse = rand() % 1;
        callInit();
        break;
    case 27:
        exit(0);
        break;
    default:
        break;
    }
}

void keyboardSpecialKeys(int key, int x, int y)
{
    if (key == GLUT_KEY_DOWN)
    {
        glRotatef(15., 1.0, 0.0, 0.0);
        display();
    }
    else if (key == GLUT_KEY_UP)
    {
        glRotatef(-15., 1.0, 0.0, 0.0);
        display();
    }
    else if (key == GLUT_KEY_LEFT)
    {
        glRotatef(-15., 0.0, 1.0, 0.0);
        display();
    }
    else if (key == GLUT_KEY_RIGHT)
    {
        glRotatef(15., 0.0, 1.0, 0.0);
        display();
    }
}

int main(int argc, char **argv)
{
    glutInitWindowSize(400, 400);
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow(argv[0]);

    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(keyboardSpecialKeys);
    glutDisplayFunc(display);
    glEnable(GL_DEPTH_TEST);
    glutMainLoop();
    return 0;
}