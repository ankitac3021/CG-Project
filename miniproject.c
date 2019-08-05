#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<GL/glut.h>

static GLfloat spin=360.0; /*fan rotation variable angle=360*/
static GLfloat u=0.45; //color variable
static GLfloat v=0.45; //color variable
static GLfloat w=0.45; //color variable
static GLfloat b=0.45;
static GLfloat c=0.00;
static GLfloat d=0.00;
static GLfloat e=0.00;
static GLfloat a=-40; /*clouds translation variable*/
static int z=0;
GLfloat x=0;
GLfloat y=0;
int m,n;

void *currentfont;

void setFont(void *font)
{
	currentfont=font;
}
void declare(char *string)
{
     while(*string)
        glutBitmapCharacter(GLUT_BITMAP_8_BY_13, *string++);
}
void init()
{
	glClearColor(1.0,1.0,1.0,1.0);
	glShadeModel(GL_FLAT);
}


void title()
{
     glColor3f(u,v,w);
	 glRasterPos2f(-8,25);
     declare("POWER GENERATION");
     glRasterPos2f(2,13);
     declare(" POWER HOUSES");
	 glRasterPos2f(21,13);
     declare("    FAN HOUSE");
}

void drawstring(float x,float y,float z,char *string)
{
	char *c;
	glRasterPos3f(x,y,z);
 
	for(c=string;*c!='\0';c++)
	{	glColor3f(0.0,0.0,0.0);
		glutBitmapCharacter(currentfont,*c);
	}
}

void title1()
{

	setFont(GLUT_BITMAP_HELVETICA_18);
glClearColor(0.15,0.1,0.09,0);/*background for cover page*/
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1,0,0);
drawstring(-11.0,26.0,0.0,"BNM INSTITUTE OF TECHNOLOGY ");
glColor3f(0.7,0,1);
drawstring(-20,20,0.0,"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
glColor3f(1,0.5,0);
drawstring(-14,15,0.0,"A MINI PROJECT ON WINDMILL ENERGY SYSTEM");
glColor3f(0.7,0.5,0);
drawstring(-10,10,0.0,"BY:ANKITA CHATTERJEE");
glColor3f(0.9,0.2,0.7);
drawstring(-8,5,0.0,"USN:1BG16CS126");
glColor3f(1,0.5,0);
drawstring(-10,-5,0.0,"UNDER THE GUIDANCE OF:");
glColor3f(1,1,1);
drawstring(-8,-10,0.0,"Ms.RANJANA CHAKRASALLI");
glColor3f(1,1,1);
drawstring(-8,-15,0.0,"Ms.USHA CR");
glFlush();

}


void stars(float a,float b)
{
	glBegin(GL_LINES);
	glVertex2f(a-0.75,b); //for horizontal line
	glVertex2f(a+0.75,b); //for horizontal line
	glVertex2f(a-0.5,b+0.5);
	glVertex2f(a+0.5,b-0.5);
	glVertex2f(a-0.5,b-0.5);
	glVertex2f(a+0.5,b+0.5);
	glVertex2f(a,b+0.75); //for vertical line
	glVertex2f(a,b-0.75); //for vertical line
	glEnd();

}

void background()
{
	int a,b;
	glColor3f(0.0,0.2,0.0);
	glBegin(GL_POLYGON);//green ground
	glVertex2i(-250.0,-250.0);
	glVertex2i(250.0,-250.0);
	glVertex2i(250.0,0.0);
	glVertex2i(-250.0,0.0);
	glEnd();
	glColor3f(0.0 ,0.0,0.2);
	glBegin(GL_POLYGON);// blue sky
	glVertex2i(-250.0,0.0);
	glVertex2i(-250.0,250.0);
	glVertex2i(250.0,250.0);
	glVertex2i(250.0,0.0);
	glEnd();
	glColor3f(1.0,1.0,0.2);
	glPointSize(2.0);

	//--------------------------------------
	// Right side
	//--------------------------------------
	//row1
	stars(22,-5);
	stars(34,-5);
	stars(26,-5);
	stars(18,-5);
	stars(30,-5);
	stars(14,-5);

	//row2
	stars(21,-10);
	stars(33,-10);
	stars(25,-10);
	stars(17,-10);
	stars(29,-10);

	//row3
	stars(22,-15);
	stars(34,-15);
	stars(26,-15);
	//stars(18,-15);
	stars(30,-15);
	//stars(14,-15);

	//row4
	//stars(22,-20);
	stars(34,-20);
	stars(26,-20);
	//stars(18,-20);
	stars(30,-20);
	//stars(14,-15);

	//row5
	stars(34,-25);
	stars(30,-25);

	//row6
	stars(34,-30);

	//--------------------------------------
	// Left side
	//--------------------------------------

	//row1

	stars(3,-5);
	stars(-1,-5);
	stars(-5,-5);
	//stars(-9,-5);
	//stars(-13,-5);
	//stars(-17,-5);
	stars(-21,-5);
	stars(-25,-5);
	stars(-29,-5);
	stars(-33,-5);

	//row2
	stars(7,-10);
	stars(3,-10);
	stars(-1,-10);
	//stars(-5,-10);
	//stars(-9,-10);
	//stars(-13,-10);
	//stars(-17,-10);
	stars(-21,-10);
	stars(-25,-10);
	stars(-29,-10);
	stars(-33,-10);

	//row3
	stars(11,-15);
	stars(7,-15);

	stars(3,-15);
	stars(-1,-15);
	//stars(-5,-15);
	//stars(-9,-15);
	//stars(-13,-15);
	//stars(-17,-15);
	stars(-21,-15);
	stars(-25,-15);
	stars(-29,-15);
	stars(-33,-15);

	//row4
	stars(15,-20);
	stars(11,-20);
	stars(7,-20);

	stars(3,-20);
	stars(-1,-20);
	//stars(-5,-20);
	//stars(-9,-20);
	//stars(-13,-20);
	stars(-17,-20);
	stars(-21,-20);
	stars(-25,-20);
	stars(-29,-20);
	stars(-33,-20);

	//row5
	stars(19,-25);
	stars(15,-25);
	stars(11,-25);
	stars(7,-25);

	stars(3,-25);
	stars(-1,-25);
	stars(-5,-25);
	stars(-9,-25);
	stars(-13,-25);
	stars(-17,-25);
	stars(-21,-25);
	stars(-25,-25);
	stars(-29,-25);
	stars(-33,-25);

	//row6
	stars(23,-30);
	stars(19,-30);
	stars(15,-30);
	//stars(11,-30);
	//stars(7,-30);

	//stars(3,-30);
	//stars(-1,-30);
	stars(-5,-30);
	stars(-9,-30);
	stars(-13,-30);
	//stars(-17,-30);
	//stars(-21,-30);
	//stars(-25,-30);
	//stars(-29,-30);
	stars(-33,-30);

	//row7
	stars(27,-35);
	stars(23,-35);
	stars(19,-35);
	//stars(15,-35);
	//stars(11,-35);
	//stars(7,-35);

	//stars(3,-35);
	//stars(-1,-35);
	stars(-5,-35);
	stars(-9,-35);
	stars(-13,-35);
	//stars(-17,-35);
	//stars(-21,-35);
	//stars(-25,-35);
	//stars(-29,-35);
	stars(-33,-35);

	//row8
	
	stars(31,-40);
	stars(27,-40);
	stars(23,-40);
	stars(19,-40);
	//stars(15,-40);
	//stars(11,-40);
	//stars(7,-40);

	//stars(3,-40);
	//stars(-1,-40);
	stars(-5,-40);
	stars(-9,-40);
	stars(-13,-40);
	//stars(-17,-40);
	//stars(-21,-40);
	//stars(-25,-40);
	//stars(-29,-40);
	stars(-33,-40);
}
void fan1()
{
	glPushMatrix();
	glLoadIdentity();
	glColor3f(1,1,1);
	glTranslatef (-8.0,20.0, 2.0);/*rotation about fixed point*/
	glRotatef(spin,0.0,0.0,1.0);
	glTranslatef (8.0,-20.0, -2.0);
	glBegin(GL_TRIANGLES);/*1st fan*/
	glVertex3f(-8.0,20.0,2.0);
	glVertex3f(-12.0,16.0,3.0);
	glVertex3f(-12.0,18.0,4.0);
	glVertex3f(-8.0,20.0,2.0);
	glVertex3f(-4.0,24.0,3.0);
	glVertex3f(-4.0,22.0,4.0);
	glEnd();
	glPopMatrix();
}
void fan2()
{
	glPushMatrix();
	glLoadIdentity();
	glTranslatef (-20.0, 20.0, 2.0);/*rotation about fixed point*/
	glRotatef(spin,0.0,0.0,1.0);
	glTranslatef (20.0, -20.0,-2.0);
	glColor3f(1,1,1);
	glBegin(GL_TRIANGLES);/*2nd fan*/
	glVertex3f(-20.0,20.0,2.0);
	glVertex3f(-25.0,17.0,3.0);
	glVertex3f(-25.0,19.0,4.0);
	glVertex3f(-20.0,20.0,2.0);
	glVertex3f(-15.0,23.0,3.0);
	glVertex3f(-15.0,21.0,4.0);
	glEnd();
	glPopMatrix();
}
void fan3()
{
	glPushMatrix();
	glLoadIdentity();
	glTranslatef (-32.0, 20.0, 2.0);/*rotation about fixed point*/
	glRotatef(spin,0.0,0.0,1.0);
	glTranslatef (32.0, -20.0, -2.0);
	glColor3f(1,1,1);
	glBegin(GL_TRIANGLES);/*2nd fan*/
	glVertex3f(-32.0,20.0,2.0);
	glVertex3f(-36.0,16.0,3.0);
	glVertex3f(-36.0,18.0,4.0);
	glVertex3f(-32.0,20.0,2.0);
	glVertex3f(-28.0,24.0,3.0);
	glVertex3f(-28.0,22.0,4.0);
	glEnd();
	glPopMatrix();
}
void fan4()
{
	glPushMatrix();
	glLoadIdentity();
	glColor3f(1,1,1);
	glTranslatef (28.0,25.0, 2.0);/*rotation about fixed point*/
	glRotatef(spin,0.0,0.0,1.0);
	glTranslatef (-28.0,-25.0, -2.0);
	glBegin(GL_TRIANGLES);/*4th fan*/
	glVertex3f(28.0,25.0,2.0);
	glVertex3f(24.0,21.0,3.0);
	glVertex3f(24.0,23.0,4.0);
	glVertex3f(28.0,25.0,2.0);
	glVertex3f(32.0,29.0,3.0);
	glVertex3f(32.0,27.0,4.0);
	glEnd();
	glPopMatrix();
}
void wires()
{
	glColor3f(.7,.5,.7);
	glEnable(GL_LINE_STIPPLE);
	glLineStipple(1,0x00FF);
	glBegin(GL_LINES);
	glVertex2f(-8.0,7.0);
	glVertex2f(-32.0,7.0);
	glVertex2f(-8.0,10.0);
	glVertex2f(1.5,10.0);
	glVertex2f(26.5,7.0);
	glEnd();
	glDisable(GL_LINE_STIPPLE);

}
void powerstation()
{
	GLint ax=1.5,ay=8;
	glColor3f(0.7,0.0,0.0);
	glBegin(GL_POLYGON);//from tip(anti clkwise)
	glVertex2i(ax,ay);//a
	glVertex2i(ax-2,ay-2);//b
	glVertex2i(ax-2,ay-8);//c
	glVertex2i(ax+2,ay-8);//d
	glVertex2i(ax+2,ay-2);//e
	glEnd();
	glColor3f(0.7,0.5,0.3);
	glBegin(GL_POLYGON);//roof (from a)
	glVertex2i(ax,ay+3);//a
	glVertex2i(ax-3,ay-3);//b
	glVertex2i(ax+3,ay-3);//e
	glEnd();
	glColor3f(v,v,w);
	glBegin(GL_POLYGON);/* door */
	glVertex2i(ax-1,ay-5.0);//top left
	glVertex2i(ax-1.0,ay-8.0);//bottom left
	glVertex2i(ax+1.0,ay-8.0);// bottom right
	glVertex2i(ax+1.0,ay-5.0);//top right
	glEnd();
}


void powerstation1()
{
	GLint ax=8.5,ay=8;
	glColor3f(0.7,0.0,0.0);
	glBegin(GL_POLYGON);//from tip(anti clkwise)
	glVertex2i(ax,ay);//a
	glVertex2i(ax-2,ay-2);//b
	glVertex2i(ax-2,ay-8);//c
	glVertex2i(ax+2,ay-8);//d
	glVertex2i(ax+2,ay-2);//e
	glEnd();
	glColor3f(0.7,0.5,0.3);
	glBegin(GL_POLYGON);//roof (from a)
	glVertex2i(ax,ay+3);//a
	glVertex2i(ax-3,ay-3);//b
	glVertex2i(ax+3,ay-3);//e
	glEnd();
	glColor3f(v,v,w);
	glBegin(GL_POLYGON);/* door */
	glVertex2i(ax-1,ay-5.0);//top left
	glVertex2i(ax-1.0,ay-8.0);//bottom left
	glVertex2i(ax+1.0,ay-8.0);// bottom right
	glVertex2i(ax+1.0,ay-5.0);//top right
	glEnd();
}

void powerstation2()
{
	GLint ax=15.5,ay=8;
	glColor3f(0.7,0.0,0.0);
	glBegin(GL_POLYGON);//from tip(anti clkwise)
	glVertex2i(ax,ay);//a
	glVertex2i(ax-2,ay-2);//b
	glVertex2i(ax-2,ay-8);//c
	glVertex2i(ax+2,ay-8);//d
	glVertex2i(ax+2,ay-2);//e
	glEnd();
	glColor3f(0.7,0.5,0.3);
	glBegin(GL_POLYGON);//roof (from a)
	glVertex2i(ax,ay+3);//a
	glVertex2i(ax-3,ay-3);//b
	glVertex2i(ax+3,ay-3);//e
	glEnd();
	glColor3f(v,v,w);
	glBegin(GL_POLYGON);/* door */
	glVertex2i(ax-1,ay-5.0);//top left
	glVertex2i(ax-1.0,ay-8.0);//bottom left
	glVertex2i(ax+1.0,ay-8.0);// bottom right
	glVertex2i(ax+1.0,ay-5.0);//top right
	glEnd();
}


void road()
{
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-1,0);
	glVertex2f(4,0);
	glVertex2f(43,-39);
	glVertex2f(37,-40);
	glEnd();
}



void clouds()
{
	glPushMatrix();
	glColor3f (1.0, 1.0,0.7);
   glLoadIdentity ();             /* clear the matrix */
           /* viewing transformation  */
   glTranslatef(a+1, 40.0, -9.0);
   glScalef (2.0, 1.0, 1.0);  /* modeling transformation */
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a-2.0,40.0, -9.0);
   glScalef (2.0, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+7.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a-7.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+18.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+25.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+36.0,40.0, -9.0);
   glScalef (3.0, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+50.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+56.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glPopMatrix();

}
void roof(GLint rux,GLint ruy,GLint rdx,GLint rdy)
{
	glPushMatrix();
	glColor3f(1,0.25,0.1);
	glBegin(GL_LINE_STRIP);
	glVertex2i(rux,ruy);//roof up
	glVertex2i(rdx,rdy);//roof down
	glEnd();
	glPopMatrix();
}
void hut(GLint rux,GLint ruy,GLint rdx,GLint rdy)
{
	GLint blx=rdx,bly=rdy-9,brx=rdx+10,bry=rdy-9,kx=rdx-8,ky=rdy+1;
	GLfloat i;
	for(i=0;i<440;i=i+1)
		roof(rux+i/40,ruy,rdx+i/40,rdy);/* draw straws */
	glColor3f(1.0,0.45,0.2);
	glBegin(GL_POLYGON);/* front wall */
	glVertex2i(rdx,rdy);//roof left
	glVertex2i(rdx+10,rdy);//roof right
	glVertex2i(brx,bry);//base right
	glVertex2i(blx,bly);//base left
	glEnd();
	glColor3f(0.7,0.15,0.1);
	glBegin(GL_POLYGON);/* side wall */
	glVertex2i(rux,ruy);//roof up
	glVertex2i(kx,ky);//bacK
	glVertex2i(kx,ky-6);//bacK base
	glVertex2i(blx,bly);
	glVertex2i(rdx,rdy);
	glEnd();
	glColor3f(v,v,w);
	glBegin(GL_POLYGON);/* window */
	glVertex2i(kx+2,ky-2.5);//top left
	glVertex2i(kx+2,ky-5.5);//bottom left
	glVertex2i(blx-3,bly+3.5);//bottom right
	glVertex2i(blx-3,bly+6.9);//top right
	glEnd();
	glColor3f(v,v,w);
	glBegin(GL_POLYGON);/* door */
	glVertex2i(blx+3.5,bly+5);//top left
	glVertex2i(blx+3.5,bly);//bottom left
	glVertex2i(brx-3.5,bry);//bottom right
	glVertex2i(brx-3.5,bry+5);//top right
	glEnd();
}
void fanpole1()
{
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(-8.1,20.0);
	glVertex2f(-7.9,20.0);
	glVertex2f(-8.5,0.0);
	glVertex2f(-7.5,0.0);
	glEnd();
}
void fanpole2()
{
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(-20.1,20.0);
	glVertex2f(-19.9,20.0);
	glVertex2f(-20.5,0.0);
	glVertex2f(-19.5,0.0);
	glEnd();
}
void fanpole3()
{
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(-32.1,20.0);
	glVertex2f(-31.9,20.0);
	glVertex2f(-32.5,0.0);
	glVertex2f(-31.5,0.0);
	glEnd();
}
void fanhouse()
{   GLint ax=28,ay=30;
	glColor3f(0.7,0.5,0.3);
	glBegin(GL_POLYGON);//from tip(anti clkwise)
	glVertex2i(ax,ay);//a
	glVertex2i(ax-3,ay-2);//b
	glVertex2i(ax-3,ay-9);//c
	glVertex2i(ax+3,ay-9);//d
	glVertex2i(ax+3,ay-2);//e
	glEnd();
	glColor3f(0.0,0.3,0.3);
	glBegin(GL_POLYGON);//roof (from a)
	glVertex2i(ax,ay+3);//a
	glVertex2i(ax-4,ay-3);//b
	glVertex2i(ax+4,ay-3);//e
	glEnd();
	glColor3f(0.3,0.15,0.1);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(30.1,21.0);
	glVertex2f(29.9,21.0);
	glVertex2f(30.5,0.0);
	glVertex2f(29.5,0.0);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(26.1,21.0);
	glVertex2f(25.9,21.0);
	glVertex2f(26.5,0.0);
	glVertex2f(25.5,0.0);
	glEnd();
	glColor3f(0.0,0.3,0.3);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(30.0,22.0);
	glVertex2f(29.5,22.0);
	glVertex2f(29.0,19.0);
	glVertex2f(28.5,19.0);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(26.5,22.0);
	glVertex2f(26.0,22.0);
	glVertex2f(25.5,19.0);
	glVertex2f(25.0,19.0);
	glEnd();
	
}




void display(void)
{
	int b=0;
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	if(z<50)
	{
		for(z=0;z<1700;z++)
		{
			title1();
			glutPostRedisplay();
			glutSwapBuffers();
			glFlush();
			}
	}
	else
	{
	background();
	fanhouse();
	title();
	road();
	hut(-29,-26,-24,-33); //left down hut
	hut(-19,-4,-14,-11);//middle up
	hut(-0,-26,5,-33); //right bottom
	clouds();

	powerstation();
	powerstation1();
	powerstation2();
	wires();

	fanpole1();
	fanpole2();
	fanpole3();

	fan1();
	fan2();
	fan3();
	fan4();
	glutSwapBuffers();
	glFlush();
	}
	
}

void spinclockwise()
{
	w=0.3;u=0;v=1;b=0.5;c=1;d=1;e=0;
	 a=a+0.1;
          if(a>40)
	 a-=100.0;
	 spin=spin-1.0;
	 if(spin<0)
	spin=spin+360.0;

	 

	glutPostRedisplay();


 }

void anticlockwise()
{
	u=0;w=.3;v=1;b=0.5;c=1;d=1,e=0;
	 if(a==40)
	 a=40;
	 a=a-0.1;
         if(a<-100)
	 a+=100.0;
         if(spin==360.0)
	spin=spin-360;
	spin=spin+1.0;
	if(spin>360.0)
         spin=spin-360.0;
	glutPostRedisplay();


}
void spinclockwisefast()
{
	u=0;w=.4;v=1;b=1;c=0.0;d=e=1;
	 a=a+0.3;
	if(a>40)
	 a-=100.0;
	spin=spin-10.0;
	if(spin<0)
          spin=spin+360.0;
	glutPostRedisplay();



}
void anticlockwisefast()
{
	u=0;w=.4;v=1;b=1;c=0.0;d=e=1;
	 if(a==40)
	 a=40;
	  a=a-0.3;
   if(a<-100)
	   a+=100.0;
   if(spin==360.0)
	   spin=spin-360;
	spin=spin+10.0;
	if(spin>360.0)
		spin=spin-360.0;
	glutPostRedisplay();


}
void reshape(int w, int h)
{
glViewport(0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-35.0, 35.0, -45.0, 45.0, -20.0, 20.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
}
void menu(int id )
{
	switch(id)
	{
	case 1: u=v=w=b=0.45;c=d=e=1;
			glutIdleFunc(display);
			break;
	case 2: glutIdleFunc(spinclockwise);
			break;
	case 3: glutIdleFunc(anticlockwise);
			break;
	case 4: glutIdleFunc(spinclockwisefast);
			break;
	case 5: glutIdleFunc(anticlockwisefast);
			break;
	case 6:exit(0);
	}
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(800,600);
	glutInitWindowPosition(0,0);
	glutCreateWindow("WIND ENERGY");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutCreateMenu(menu);
	glutAddMenuEntry("No Wind",1);
	glutAddMenuEntry("Clockwise wind",2);
	glutAddMenuEntry("Anti Clockwise wind",3);
	glutAddMenuEntry ("High speed Clockwise wind",4);
	glutAddMenuEntry("High speed Anti Clockwise wind",5);
	glutAddMenuEntry("Quit",6);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutMainLoop();
	return 0;
}


