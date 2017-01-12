void vevien(int x,int y,int dx,int dy){						/* ve vien chu nhat toa do goc tren ben trai la (x,y) */
	glColor3f(0,1,0);										/*	dx,dy:chieu dai,rong */
 	glBegin(GL_POLYGON);
		glVertex3f(x,y,0);
		glVertex3f(x,y+5,0);
		glVertex3f(x+dx,y+5,0);
		glVertex3f(x+dx,y,0);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex3f(x,y+dy,0);
		glVertex3f(x,y+dy-5,0);
		glVertex3f(x+dx,y+dy-5,0);
		glVertex3f(x+dx,y+dy,0);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex3f(x+dx,y,0);
		glVertex3f(x+dx-5,y,0);
		glVertex3f(x+dx-5,y+dy,0);
		glVertex3f(x+dx,y+dy,0);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex3f(x,y,0);
		glVertex3f(x+5,y,0);
		glVertex3f(x+5,y+dy,0);
		glVertex3f(x,y+dy,0);
	glEnd();
}
int ktra1(int x,int y,int a,int b,int c,int d){						/*kiem tra toa do click chuot */
	if(a<x && x<b && c<y && y<d)return 1;
	else return 0;
}

void menu0(int &X,int &Y,int &test){
	glColor3f(0,0,1);
	glBegin(GL_POLYGON);							/* o quan ly phong */
		glVertex3f(300,250,0.0f);
		glVertex3f(1100,250,0.0f);
		glVertex3f(1100,100,0.0f);
		glVertex3f(300,100,0.0f);
	glEnd();	
	glBegin(GL_POLYGON);							/* o quan ly khach hang */
		glVertex3f(300,300,0.0f);
		glVertex3f(1100,300,0.0f);
		glVertex3f(1100,450,0.0f);
		glVertex3f(300,450,0.0f);
	glEnd();	
	glBegin(GL_POLYGON);							/* o bao cao doanh thu */
		glVertex3f(300,500,0.0f);
		glVertex3f(1100,500,0.0f);
		glVertex3f(1100,650,0.0f);
		glVertex3f(300,650,0.0f);
	glEnd();	
	glColor3f(1,0,0);
		drawStrokeText("1.Quan ly phong",500,200,0);
		drawStrokeText("2.Quan ly khach hang",500,400,0);
		drawStrokeText("3.Bao cao,doanh thu",500,600,0);
	
	if(300<X && X<1100 && 100<Y && 250>Y){X=100;Y=0;test=1;}			/*1.Quan ly phong*/
	if(300<X && X<1100 && 300<Y && 450>Y){X=100;Y=0;test=2;}			/*2.Quan ly khach hang*/
	if(300<X && X<1100 && 500<Y && 650>Y){X=100;Y=0;test=21;}			/*3.Ba cao,doanh thu*/ 					
	glColor3f(1,1,1);
	glutSwapBuffers();
}
void menu1(int &X,int &Y,int &test){
	
	glColor3f(0,0,1);
	glBegin(GL_POLYGON);												/* o Them phong */
		glVertex3f(300,200,0.0f);
		glVertex3f(1100,200,0.0f);
		glVertex3f(1100,100,0.0f);
		glVertex3f(300,100,0.0f);
	glEnd();		
	glBegin(GL_POLYGON);												/* o Gia phong */
		glVertex3f(300,350,0.0f);
		glVertex3f(1100,350,0.0f);
		glVertex3f(1100,250,0.0f);
		glVertex3f(300,250,0.0f);
	glEnd();			
	glBegin(GL_POLYGON);												/* o Hien thi thong tin cac phong */
		glVertex3f(300,400,0.0f);
		glVertex3f(1100,400,0.0f);
		glVertex3f(1100,500,0.0f);
		glVertex3f(300,500,0.0f);
	glEnd();
	glColor3f(1,0,0);
		drawStrokeText("1.Them phong",500,150,0);
		drawStrokeText("2.Gia phong",500,300,0);
		drawStrokeText("3.Hien thong tin cac phong",350,450,0);
		
	if(300<X && X<1100 && 100<Y && 200>Y){X=100;Y=0;test=3;}		/*1.Them phong*/
	if(300<X && X<1100 && 250<Y && 350>Y){X=100;Y=0;test=20;}		/*2.Gia phong*/
	if(300<X && X<1100 && 400<Y && 500>Y){X=100;Y=0;test=6;}		/*3.Hien thi thong tin cac phong*/
	if(0<X && X<50 && 0<Y && Y<50){X=100;Y=0;test=0;}				/*Quay lai menu0*/
	glColor3f(1,1,1);
	glutSwapBuffers();
}

void menu2(int &X,int &Y,int &test){
	
	glColor3f(0,0,1);
	glBegin(GL_POLYGON);											/* o Dat phong */
		glVertex3f(300,200,0.0f);
		glVertex3f(1100,200,0.0f);
		glVertex3f(1100,100,0.0f);
		glVertex3f(300,100,0.0f);
	glEnd();
	glBegin(GL_POLYGON);											/* o Tra phong*/
		glVertex3f(300,350,0.0f);
		glVertex3f(1100,350,0.0f);
		glVertex3f(1100,250,0.0f);
		glVertex3f(300,250,0.0f);
	glEnd();	
	glBegin(GL_POLYGON);											/* o Xem thong tin khach hang*/
		glVertex3f(300,400,0.0f);
		glVertex3f(1100,400,0.0f);
		glVertex3f(1100,500,0.0f);
		glVertex3f(300,500,0.0f);
	glEnd();
	glColor3f(1,0,0);
		drawStrokeText("1.Dat phong",500,150,0);
		drawStrokeText("2.Tra phong",500,300,0);
		drawStrokeText("3.Xem thong tin khach hang",350,450,0);
		
	if(300<X && X<1100 && 100<Y && 200>Y){X=100;Y=0;test=7;}		/*Dat phong*/
	if(300<X && X<1100 && 250<Y && 350>Y){X=100;Y=0;test=9;}		/*Tra phong*/
	if(300<X && X<1100 && 400<Y && 500>Y){X=100;Y=0;test=10;}		/*Xem thong tin khach hang*/
	if(0<X && X<50 && 0<Y && Y<50){X=100;Y=0;test=0;}				/*Quay lai menu0*/
	glColor3f(1,1,1);
	glutSwapBuffers();
}

void chenmuiten(int w1,int h1){										/* chen anh mui ten vao goc trai */
	GLuint  texture = LoadTexture("Anh/muiten.bmp",300,248);
	glLoadIdentity();
    glEnable( GL_TEXTURE_2D );
    background(texture,50,50,0,650,w1,h1);
	glLoadIdentity();		
	FreeTexture(texture );
}


