#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>
#include <iostream>


void triangulos() {
    glColor3f(1.0, 0.0, 0.0); 
    glBegin(GL_TRIANGLES);
    glVertex2f(40, 60);
    glVertex2f(60, 220);
    glVertex2f(100, 160);
    glEnd(); 
    glColor3f(1.0, 1.0, 0.0); 
    glBegin(GL_TRIANGLES);
    glVertex2f(100, 160);
    glVertex2f(160, 160);
    glVertex2f(140, 100);
    glEnd();
    glColor3f(0.5, 0.5, 0.5); 
    glBegin(GL_TRIANGLES);
    glVertex2f(160, 160);
    glVertex2f(220, 260);
    glVertex2f(220, 160);
    glEnd();
    glColor3f(1.0, 0.5, 1.0); 
    glBegin(GL_TRIANGLES);
    glVertex2f(260, 260);
    glVertex2f(180, 260);
    glVertex2f(200, 300);
    glEnd();
    glColor3f(1.0, 1.5, 0.0); 
    glBegin(GL_TRIANGLES);
    glVertex2f(260, 220);
    glVertex2f(260, 240);
    glVertex2f(280, 220);
    glEnd();
    glColor3f(0.0, 0.5, 0.5); 
    glBegin(GL_TRIANGLES);
    glVertex2f(240, 220);
    glVertex2f(250, 190);
    glVertex2f(230, 190);
    glEnd();
}

void quads() {
	glColor3f(1.0, 0.5, 1.0); 
    glBegin(GL_QUADS);
    glVertex2f(100, 160);
    glVertex2f(60, 220);
    glVertex2f(120, 220);
    glVertex2f(160, 160);
    glEnd();
    glColor3f(0.0, 0.0, 0.5); 
    glBegin(GL_QUADS);
    glVertex2f(220, 220);
    glVertex2f(220, 260);
    glVertex2f(260, 260);
    glVertex2f(260, 220);
    glEnd();
    glColor3f(0.0, 0.5, 0.0); 
    glBegin(GL_QUADS);
    glVertex2f(185, 80);
    glVertex2f(195, 80);
    glVertex2f(185, 20);
    glVertex2f(195, 20);
    glEnd();


  }

void poligon(){
	glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(140, 100);
    glVertex2f(160, 160);
    glVertex2f(220, 160);
    glVertex2f(140, 100);
    glVertex2f(190, 80);
    glEnd();
}


void ovalo() {
    glColor3f(1.0, 1.0, 0.5); 
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; ++i) {
        float angle = i * 3.14159 / 180; 
        float x = 190 + cos(angle) * 50; 
        float y = 15 + sin(angle) * 15;  
        glVertex2f(x, y);
    }
    glEnd();
}

void myInit() {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 800.0, 0.0, 600.0);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    triangulos();
    glColor3f(0.0, 1.0, 0.0);
    quads(); 
    poligon();
    ovalo();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Chikenliru");
    myInit();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
