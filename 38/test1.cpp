#include<iostream>
#include <iomanip>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"char.h"
#include"string.h"
#include <GL/glut.h>
#pragma comment (lib,"opengl32.lib")
#pragma comment (lib,"glu32.lib")
#pragma comment (lib,"glut32.lib")	
#include"dohoa.h"
#include"in.h"
#include"nhap.h"//
#include"timkiem.h"
#include"chucnang.h"
#include"quanly.h"
#include"quanlydohoa.h"
int w1 = 0;
int h1 = 0;
GLuint texture=0;
GLuint texture1=0;
char a[100],b[100],c[100],d[100],sp[100];
int i=0,bi=0,ci=0,di=0,spi=0,lp=0,lg=0,tt=1,kts=0;
int X,Y;
int k=0,chay,tam[50];								
int kt1=0,kt2=0,kt3=0,kt4=0;
int test=0;
int slp[3]={0,0,0};
int slg[6]={0,0,0,0,0,0};
void reshape(int w, int h)
{
    w1 = w;
    h1 = h;
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION); 
    glLoadIdentity(); 
    gluOrtho2D(0,w,h,0); 
    glMatrixMode(GL_MODELVIEW); 
    glLoadIdentity(); 
}

//GLuint texture = LoadTexture("anh.bmp",1920,1080);

void display (void) {
   // glClearColor (1.0,0.0,0.0,1.0);
    glClear (GL_COLOR_BUFFER_BIT );
    glLoadIdentity();
    texture = LoadTexture("Anh/anh.bmp",1920,1080);
    glEnable( GL_TEXTURE_2D );
    background(texture,1300,700,-15,0,w1,h1);
	glLoadIdentity();	
	FreeTexture(texture );
	if (test!=0) chenmuiten(w1,h1);
	glColor3f(1,0,0);
	drawStrokeText("Pham mem quan ly khach san",300,40,0);

	if(test==1){menu1(X,Y,test);}
	if(test==2){menu2(X,Y,test);}	
	if(test==21){doanhthudh(X,Y,test);}	
	if(test==3){taophong(X,Y,i,bi,ci,di,spi,kt4,sp,a,lp,lg,tt,test);}		 
	if(test==20){giaphongdh(X,Y,test);}
	if(test==4){suaphongdh(X,Y,i,bi,ci,di,spi,kt4,sp,a,lp,lg,tt,test,kts);}
	if(test==5){xoaphongdh(X,Y,i,bi,ci,di,spi,kt4,sp,a,lp,lg,tt,test,kts);}
	if(test==6){inphongdh(X,Y,test);xoaphongdh(X,Y,i,bi,ci,di,spi,kt4,sp,a,lp,lg,tt,test,kts);}
	if(test==7){timphongdh(X,Y,test,kts,slp,slg);}
	if(test==11){chonphongdh(X,Y,test,kts,slp,slg,k,tam);}
	if(test==12){datphongdh(X,Y,i,bi,ci,di,spi,kt1,kt2,kt3,kt4,a,b,c,d,sp,test);}
	if(test==9){traphongdh(X,Y,i,bi,ci,di,spi,kt1,kt2,kt3,kt4,a,b,c,d,sp,test);}
	if(test==10){inkhdh(X,Y,test);timkhdh(X,Y,i,bi,ci,di,spi,kt1,kt2,kt3,kt4,a,b,c,d,sp,test);}
	if(test==0){menu0(X,Y,test);}
//

}

void keyboard (unsigned char key, int x, int y);
void mouseClicks(int button, int state, int x, int y)
{
if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON)
{
    X =(int)x;
    Y =(int)y;
    glutPostRedisplay();
}
}
//
int main(int argc, char **argv)
{
	for(chay=0;chay<50;chay++)tam[chay]=0;
    strcpy(a,"                                                      ");
	strcpy(sp,"                                                    ");
	strcpy(b,"                                                      ");
	strcpy(c,"                                                      ");
	strcpy(d,"                                                      ");
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA |  GLUT_DOUBLE);

    glutInitWindowSize(1300,700);
    glutCreateWindow("bai tap lon");
   
    texture = LoadTexture("anh.bmp",1920,1080);
    glutDisplayFunc(display);
	glutIdleFunc(display);
    glutReshapeFunc(reshape);
    glutMouseFunc(mouseClicks);
	glutKeyboardFunc(keyboard);
    
    glutMainLoop();
    return 0;
}
void keyboard (unsigned char key, int x, int y)
{
switch (key) {
case 'q': a[i]='q';i++;
break;
case 'w': a[i]='w';i++;
break;
case 'e': a[i]='e';i++;
break;
case 'r': a[i]='r';i++;
break;
case 't': a[i]='t';i++;
break;
case 'y': a[i]='y';i++;
break;
case 'u': a[i]='u';i++;
break;
case 'i': a[i]='i';i++;
break;
case 'o': a[i]='o';i++;
break;
case 'p': a[i]='p';i++;
break;
case 'a': a[i]='a';i++;
break;
case 's': a[i]='s';i++;
break;
case 'd': a[i]='d';i++;
break;
case 'f': a[i]='f';i++;
break;
case 'g': a[i]='g';i++;
break;
case 'h': a[i]='h';i++;
break;
case 'j': a[i]='j';i++;
break;
case 'k': a[i]='k';i++;
break;
case 'l': a[i]='l';i++;
break;
case 'z': a[i]='z';i++;
break;
case 'x': a[i]='x';i++;
break;
case 'c': a[i]='c';i++;
break;
case 'v': a[i]='v';i++;
break;
case 'b': a[i]='b';i++;
break;
case 'n': a[i]='n';i++;
break;
case 'm': a[i]='m';i++;
break;
case ' ': a[i]=' ';i++;
break;
case '1': a[i]='1';i++;
break;
case '2': a[i]='2';i++;
break;
case '3': a[i]='3';i++;
break;
case '4': a[i]='4';i++;
break;
case '5': a[i]='5';i++;
break;
case '6': a[i]='6';i++;
break;
case '7': a[i]='7';i++;
break;
case '8': a[i]='8';i++;
break;
case '9': a[i]='9';i++;
break;
case '0': a[i]='0';i++;
break;
case 'Q': a[i]='Q';i++;
break;
case 'W': a[i]='W';i++;
break;
case 'E': a[i]='E';i++;
break;
case 'R': a[i]='R';i++;
break;
case 'T': a[i]='T';i++;
break;
case 'Y': a[i]='Y';i++;
break;
case 'U': a[i]='U';i++;
break;
case 'I': a[i]='I';i++;
break;
case 'O': a[i]='O';i++;
break;
case 'P': a[i]='P';i++;
break;
case 'A': a[i]='A';i++;
break;
case 'S': a[i]='S';i++;
break;
case 'D': a[i]='D';i++;
break;
case 'F': a[i]='F';i++;
break;
case 'G': a[i]='G';i++;
break;
case 'H': a[i]='H';i++;
break;
case 'J': a[i]='J';i++;
break;
case 'K': a[i]='K';i++;
break;
case 'L': a[i]='L';i++;
break;
case 'Z': a[i]='Z';i++;
break;
case 'X': a[i]='X';i++;
break;
case 'C': a[i]='C';i++;
break;
case 'V': a[i]='V';i++;
break;
case 'B': a[i]='B';i++;
break;
case 'N': a[i]='N';i++;
break;
case 'M': a[i]='M';i++;
break;
case '!': a[i]='!';i++;
break;
case '@': a[i]='@';i++;
break;
case '#': a[i]='#';i++;
break;
case '$': a[i]='$';i++;
break;
case '%': a[i]='%';i++;
break;
case '^': a[i]='^';i++;
break;
case '&': a[i]='&';i++;
break;
case '*': a[i]='*';i++;
break;
case '(': a[i]='(';i++;
break;
case ')': a[i]=')';i++;
break;
case '-': a[i]='-';i++;
break;
case '_': a[i]='_';i++;
break;
case '=': a[i]='=';i++;
break;
case '+': a[i]='+';i++;
break;
case '[': a[i]='{';i++;
break;
case '{': a[i]='{';i++;
break;
case '}': a[i]='}';i++;
break;
case ']': a[i]=']';i++;
break;
case '|': a[i]='|';i++;
break;
case ';': a[i]=';';i++;
break;
case ':': a[i]=':';i++;
break;
case '"': a[i]='"';i++;
break;
case ',': a[i]=',';i++;
break;
case '.': a[i]='.';i++;
break;
case '<': a[i]='<';i++;
break;
case '>': a[i]='>';i++;
break;
case '/': a[i]='/';i++;
break;
case '?': a[i]='?';i++;
break;
case '`': a[i]='`';i++;
break;
case '~': a[i]='~';i++;
break;
// Backspace
	case 8 :
		
		i--;
		if(i<0)i=0;
		a[i]=' ';
		break;
break;

}
glutPostRedisplay();
}
