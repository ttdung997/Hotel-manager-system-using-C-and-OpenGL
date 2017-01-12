void taophong(int &X,int &Y,int &i,int bi,int ci,int di,int &spi,int &kt4,char *sp,char *a,int &lp,int &lg,int &tt,int &test){
	
	glColor3f(1,1,1);										/* o nhap so phong*/
 	glBegin(GL_POLYGON);
		glVertex3f(30,160,0);
		glVertex3f(600,160,0);
		glVertex3f(600,90,0);
		glVertex3f(30,90,0);
	glEnd();	
	if(30<X && X<600 && 90<Y && 160>Y){						/* nhap so phong*/
		vevien(30,90,570,70);
		if((i==di || i==ci || i==bi) && kt4==0){
			strcpy(a,sp);
			i=spi;
			kt4=1;
		}	
		glColor3f(1,1,1);
		strcpy(sp,a);
		spi=i;		
	}
	glColor3f(1,0,0);
	drawStrokeText("loai phong",30,200,0);
	glColor3f(0,0,1);
 	glBegin(GL_POLYGON);								/* phong gia dinh */
		glVertex3f(30,230,0);
		glVertex3f(400,230,0);
		glVertex3f(400,300,0);
		glVertex3f(30,300,0);
	glEnd(); 
	glBegin(GL_POLYGON);								/* phong doi */
		glVertex3f(450,230,0);
		glVertex3f(820,230,0);
		glVertex3f(820,300,0);
		glVertex3f(450,300,0);
	glEnd();
	glBegin(GL_POLYGON);								/* phong don */
		glVertex3f(870,230,0);
		glVertex3f(1240,230,0);
		glVertex3f(1240,300,0);
		glVertex3f(870,300,0);
	glEnd();
	if(ktra1(X,Y,30,400,230,300))lp=1;					/* phong gia dinh */
	if(ktra1(X,Y,450,820,230,300))lp=2;					/* phong doi */
	if(ktra1(X,Y,870,1240,230,300))lp=3;				/* phong don */
	if(lp==1)vevien(30,230,370,70);
	if(lp==2)vevien(450,230,370,70);
	if(lp==3)vevien(870,230,370,70);
	glColor3f(1,0,0);
	drawStrokeText("nhap so phong",30,70,0);
	drawStrokeText("phong gia dinh",70,280,0);
	drawStrokeText("phong doi",520,280,0);
	drawStrokeText("phong don",950,280,0);
	drawStrokeText("loai giuong",30,330,0);
	if(lp==1){
		glColor3f(0,0,1);
		glBegin(GL_POLYGON);							/* 2 giuong doi*/
			glVertex3f(30,350,0);
			glVertex3f(500,350,0);
			glVertex3f(500,420,0);
			glVertex3f(30,420,0);
		glEnd(); 
		glBegin(GL_POLYGON);							/* 1 giuong doi 1 giuong don */
			glVertex3f(550,350,0);
			glVertex3f(1220,350,0);
			glVertex3f(1220,420,0);
			glVertex3f(550,420,0);
		glEnd();
		glColor3f(1,0,0);
		drawStrokeText("2 giuong doi",70,400,0);
		drawStrokeText("1 giuong doi, 1 giuong don",580,400,0);
		if(ktra1(X,Y,30,500,350,420))lg=1;				/* 2 giuong doi*/
		if(ktra1(X,Y,550,1220,350,420))lg=2;			/* 1 giuong doi 1 giuong don */
		if(lg==1)vevien(30,350,470,70);
		if(lg==2)vevien(550,350,670,70);	
	}
	if(lp==2){
		glColor3f(0,0,1);
			glBegin(GL_POLYGON);						/* 1 giuong doi*/
			glVertex3f(30,350,0);
			glVertex3f(400,350,0);
			glVertex3f(400,420,0);
			glVertex3f(30,420,0);
		glEnd(); 
		glBegin(GL_POLYGON);							/* 2 giuong don */
			glVertex3f(450,350,0);
			glVertex3f(820,350,0);
			glVertex3f(820,420,0);
			glVertex3f(450,420,0);
		glEnd();
		glBegin(GL_POLYGON);							/* 3 giuong don */
			glVertex3f(870,350,0);
			glVertex3f(1240,350,0);
			glVertex3f(1240,420,0);
			glVertex3f(870,420,0);
		glEnd();
		glColor3f(1,0,0);
		drawStrokeText("1 giuong doi",50,400,0);
		drawStrokeText("2 giuong don",480,400,0);
		drawStrokeText("3 giuong don",900,400,0);
		if(ktra1(X,Y,30,400,350,420))lg=3;				/* 1 giuong doi */
		if(ktra1(X,Y,450,820,350,420))lg=4;				/* 2 giuong don */
		if(ktra1(X,Y,870,1240,350,420))lg=5;			/* 3 giuong don */
		if(lg==3)vevien(30,350,370,70);
		if(lg==4)vevien(450,350,370,70);
		if(lg==5)vevien(870,350,370,70);
	}
	if(lp==3){
		glColor3f(0,0,1);
			glBegin(GL_POLYGON);						/* 1 giuong don*/
			glVertex3f(30,350,0);
			glVertex3f(400,350,0);
			glVertex3f(400,420,0);
			glVertex3f(30,420,0);
		glEnd(); 
		glColor3f(1,0,0);
		drawStrokeText("1 giuong don",50,400,0);
		if(ktra1(X,Y,30,400,350,420))lg=6;				/* 1 giuong don*/
		if(lg==6)vevien(30,350,370,70);
	}
	glColor3f(0,0,1);
	glBegin(GL_POLYGON);								/* trong */
		glVertex3f(30,470,0);						
		glVertex3f(400,470,0);
		glVertex3f(400,550,0);
		glVertex3f(30,550,0);
	glEnd(); 
	glBegin(GL_POLYGON);								/* da dat */
		glVertex3f(450,470,0);
		glVertex3f(820,470,0);
		glVertex3f(820,550,0);
		glVertex3f(450,550,0);
	glEnd();
	glBegin(GL_POLYGON);								/* dang sua */
		glVertex3f(870,470,0);
		glVertex3f(1240,470,0);
		glVertex3f(1240,550,0);
		glVertex3f(870,550,0);
	glEnd();
	if(ktra1(X,Y,30,400,470,550))tt=1;					/* trong */
	if(ktra1(X,Y,450,820,470,550))tt=2;					/* da dat*/
	if(ktra1(X,Y,870,1240,470,550))tt=3;				/* dang sua*/
	if(tt==1)vevien(30,470,370,80);
	if(tt==2)vevien(450,470,370,80);
	if(tt==3)vevien(870,470,370,80);
	glColor3f(1,0,0);
	drawStrokeText("nhap trang thai",30,450,0);
	drawStrokeText("trong",50,530,0);
	drawStrokeText("da dat",480,530,0);
	drawStrokeText("dang sua",900,530,0);	
	glColor3f(0,0,1);
	glBegin(GL_POLYGON);								/* o xong */
		glVertex3f(900,600,0);
		glVertex3f(900,650,0);
		glVertex3f(1200,650,0);
		glVertex3f(1200,600,0);
	glEnd();
	glBegin(GL_POLYGON);								/* o lam moi */
		glVertex3f(550,600,0);
		glVertex3f(550,650,0);
		glVertex3f(850,650,0);
		glVertex3f(850,600,0);
	glEnd();
	glColor3f(1,0,0);
	drawStrokeText("xong",1000,640,0);
	drawStrokeText("lam moi",600,640,0);
	if(ktra1(X,Y,900,1200,600,650)){					/* xong */
		int spp=atoi(sp);
		themphong(spp,lp,lg);
		X=100;Y=0;
		lp=lg=0;
		strcpy(sp,"                                        ");
		test=1;
	}
	if(ktra1(X,Y,550,850,600,650)){									/* lam moi*/
		X=100;Y=0;		
		int spp=atoi(sp);
		themphong(spp,lp,lg);
		lp=lg=0;
		strcpy(sp,"                                        ");	 
	}
	if(0<X && X<50 && 0<Y && Y<50){X=100;Y=0;test=1;}				/* quay lai */
	drawStrokeText(sp,110,140,0);
	glColor3f(1,1,1);
	glutSwapBuffers();
}
void suaphongdh(int &X,int &Y,int &i,int bi,int ci,int di,int &spi,int &kt4,char *sp,char *a,int &lp,int &lg,int &tt,int &test,int &kts){
	static int kt1=0;
	glColor3f(0,0,1);	
	if(kt1==0){
		X=0;Y=100;
		int spp=atoi(sp);
		timphong(spp,lp,lg,tt,kts);	
		kt1=1;
	}
	if(kts==1){
	glColor3f(1,0,0);
	drawStrokeText("loai phong",30,200,0);
	glColor3f(0,0,1);
 	glBegin(GL_POLYGON);						/* phong gia dinh */
		glVertex3f(30,230,0);
		glVertex3f(400,230,0);
		glVertex3f(400,300,0);
		glVertex3f(30,300,0);
	glEnd(); 
	glBegin(GL_POLYGON);						/* phong doi*/
		glVertex3f(450,230,0);
		glVertex3f(820,230,0);
		glVertex3f(820,300,0);
		glVertex3f(450,300,0);
	glEnd();	
	glBegin(GL_POLYGON);						/* phong don*/
		glVertex3f(870,230,0);	
		glVertex3f(1240,230,0);
		glVertex3f(1240,300,0);
		glVertex3f(870,300,0);
	glEnd();
	if(ktra1(X,Y,30,400,230,300))lp=1;			/* phong gia dinh*/
	if(ktra1(X,Y,450,820,230,300))lp=2;			/* phong doi */
	if(ktra1(X,Y,870,1240,230,300))lp=3;		/* phong don*/
	if(lp==1)vevien(30,230,370,70);
	if(lp==2)vevien(450,230,370,70);
	if(lp==3)vevien(870,230,370,70);
	glColor3f(1,0,0);
	drawStrokeText("phong gia dinh",70,280,0);
	drawStrokeText("phong doi",520,280,0);
	drawStrokeText("phong don",950,280,0);
	drawStrokeText("loai giuong",30,330,0);
		if(lp==1){
		glColor3f(0,0,1);
		glBegin(GL_POLYGON);							/* 2 giuong doi*/
			glVertex3f(30,350,0);
			glVertex3f(500,350,0);
			glVertex3f(500,420,0);
			glVertex3f(30,420,0);
		glEnd(); 
		glBegin(GL_POLYGON);							/* 1 giuong doi 1 giuong don */
			glVertex3f(550,350,0);
			glVertex3f(1220,350,0);
			glVertex3f(1220,420,0);
			glVertex3f(550,420,0);
		glEnd();
		glColor3f(1,0,0);
		drawStrokeText("2 giuong doi",70,400,0);
		drawStrokeText("1 giuong doi, 1 giuong don",580,400,0);
		if(ktra1(X,Y,30,500,350,420))lg=1;				/* 2 giuong doi*/
		if(ktra1(X,Y,550,1220,350,420))lg=2;			/* 1 giuong doi 1 giuong don */
		if(lg==1)vevien(30,350,470,70);
		if(lg==2)vevien(550,350,670,70);	
	}
	if(lp==2){
		glColor3f(0,0,1);
			glBegin(GL_POLYGON);						/* 1 giuong doi*/
			glVertex3f(30,350,0);
			glVertex3f(400,350,0);
			glVertex3f(400,420,0);
			glVertex3f(30,420,0);
		glEnd(); 
		glBegin(GL_POLYGON);							/* 2 giuong don */
			glVertex3f(450,350,0);
			glVertex3f(820,350,0);
			glVertex3f(820,420,0);
			glVertex3f(450,420,0);
		glEnd();
		glBegin(GL_POLYGON);							/* 3 giuong don */
			glVertex3f(870,350,0);
			glVertex3f(1240,350,0);
			glVertex3f(1240,420,0);
			glVertex3f(870,420,0);
		glEnd();
		glColor3f(1,0,0);
		drawStrokeText("1 giuong doi",50,400,0);
		drawStrokeText("2 giuong don",480,400,0);
		drawStrokeText("3 giuong don",900,400,0);
		if(ktra1(X,Y,30,400,350,420))lg=3;				/* 1 giuong doi */
		if(ktra1(X,Y,450,820,350,420))lg=4;				/* 2 giuong don */
		if(ktra1(X,Y,870,1240,350,420))lg=5;			/* 3 giuong don */
		if(lg==3)vevien(30,350,370,70);
		if(lg==4)vevien(450,350,370,70);
		if(lg==5)vevien(870,350,370,70);
	}
	if(lp==3){
		glColor3f(0,0,1);
			glBegin(GL_POLYGON);						/* 1 giuong don*/
			glVertex3f(30,350,0);
			glVertex3f(400,350,0);
			glVertex3f(400,420,0);
			glVertex3f(30,420,0);
		glEnd(); 
		glBegin(GL_POLYGON);							/* 1 giuong doi*/
			glVertex3f(450,350,0);
			glVertex3f(820,350,0);
			glVertex3f(820,420,0);
			glVertex3f(450,420,0);
		glEnd();
		glColor3f(1,0,0);
		drawStrokeText("1 giuong don",50,400,0);
		drawStrokeText("1 giuong doi",480,400,0);
		if(ktra1(X,Y,30,400,350,420))lg=6;				/* 1 giuong don*/
		if(ktra1(X,Y,450,820,350,420))lg=3;				/* 1 giuong doi*/
		if(lg==6)vevien(30,350,370,70);
		if(lg==3)vevien(450,350,370,70);
	}
	glColor3f(0,0,1);
	glBegin(GL_POLYGON);								/* trong */
		glVertex3f(30,470,0);						
		glVertex3f(400,470,0);
		glVertex3f(400,550,0);
		glVertex3f(30,550,0);
	glEnd(); 
	glBegin(GL_POLYGON);								/* da dat */
		glVertex3f(450,470,0);
		glVertex3f(820,470,0);
		glVertex3f(820,550,0);
		glVertex3f(450,550,0);
	glEnd();
	glBegin(GL_POLYGON);								/* dang sua */
		glVertex3f(870,470,0);
		glVertex3f(1240,470,0);
		glVertex3f(1240,550,0);
		glVertex3f(870,550,0);
	glEnd();
	if(ktra1(X,Y,30,400,470,550))tt=1;					/* trong */
	if(ktra1(X,Y,450,820,470,550))tt=2;					/* da dat*/
	if(ktra1(X,Y,870,1240,470,550))tt=3;				/* dang sua*/
	if(tt==1)vevien(30,470,370,80);
	if(tt==2)vevien(450,470,370,80);
	if(tt==3)vevien(870,470,370,80);
	glColor3f(1,0,0);
	drawStrokeText("nhap trang thai",30,450,0);
	drawStrokeText("trong",50,530,0);
	drawStrokeText("da dat",480,530,0);
	drawStrokeText("dang sua",900,530,0);		
	}
	glColor3f(0,0,1);
	glBegin(GL_POLYGON);								/*xong*/
		glVertex3f(900,600,0);
		glVertex3f(900,650,0);
		glVertex3f(1200,650,0);
		glVertex3f(1200,600,0);
	glEnd();
	glColor3f(1,0,0);
	drawStrokeText("xong",1000,640,0);
	if(ktra1(X,Y,900,1200,600,650)){
		int spp=atoi(sp);		
		strcpy(sp,"                                        ");
		suaphong(spp,lp,lg,tt);
		X=100;Y=0;
		kts=0;
		kt1=0;
		lp=lg=0;
		test=6;
	}
	glEnd();
	if(0<X && X<50 && 0<Y && Y<50){X=100;Y=0;test=1;}		/* quay lai*/
	glColor3f(1,0,0);
	drawStrokeText("Sua phong: ",110,140,0);
	drawStrokeText(sp,350,140,0);
	glColor3f(1,1,1);
	glutSwapBuffers();
}

void xoaphongdh(int &X,int &Y,int &i,int bi,int ci,int di,int &spi,int &kt4,char *sp,char *a,int &lp,int &lg,int &tt,int &test,int &kts){
	glColor3f(1,1,1);									
 	glBegin(GL_POLYGON);									/* o nhap so phong muon xoa*/
		glVertex3f(600,620,0);
		glVertex3f(500,620,0);
		glVertex3f(500,670,0);
		glVertex3f(600,670,0);
	glEnd(); 
	glColor3f(0,0,1);
	glBegin(GL_POLYGON);									/* sua */	
		glVertex3f(780,620,0);
		glVertex3f(630,620,0);
		glVertex3f(630,670,0);
		glVertex3f(780,670,0);
	glEnd();
	glBegin(GL_POLYGON);									/* xoa */
		glVertex3f(800,620,0);
		glVertex3f(950,620,0);
		glVertex3f(950,670,0);
		glVertex3f(800,670,0);
	glEnd();
	glBegin(GL_POLYGON);									/*so phong */
		glVertex3f(250,620,0);
		glVertex3f(450,620,0);
		glVertex3f(450,670,0);
		glVertex3f(250,670,0);
	glEnd();
	glBegin(GL_POLYGON);									/*xong*/
		glVertex3f(1000,620,0);
		glVertex3f(1000,670,0);
		glVertex3f(1250,670,0);
		glVertex3f(1250,620,0);
	glEnd();
	if(500<X && X<600 && 620<Y && 670>Y){					/*nhap so phong muon xoa*/
	 	vevien(500,620,100,50);
	 	if((i==di || i==ci || i==bi) && kt4==0){
			strcpy(a,sp);
			i=spi;
			kt4=1;
		}	
		glColor3f(1,1,1);
		strcpy(sp,a);
		spi=i;		
	}
	if(ktra1(X,Y,630,780,620,670)){X=100;Y=0;test=4;}					/* sua phong */
	if(ktra1(X,Y,800,950,620,670)){										/* xoa */
		X=0;Y=100;
		int spp=atoi(sp);
		xoaphong(spp,kts);
	}
	glColor3f(1,0,0);
	drawStrokeText("Sua",670,660,0);
	drawStrokeText("Xoa",850,660,0);
	drawStrokeText("Xong",1090,660,0);
	drawStrokeText("So phong",260,660,0);
	drawStrokeText(sp,510,660,0);
	if(ktra1(X,Y,1000,1250,620,670)){					/* xong*/
		X=100;Y=0;
		kts=0;
		lp=lg=0;
		strcpy(sp,"                                        ");
		test=1;
	}
	glColor3f(1,1,1);
	glutSwapBuffers();
}
void datphongdh(int &X,int &Y,int &i,int &bi,int &ci,int &di,int &spi,int &kt1,int &kt2,int &kt3,int &kt4,
		char *a,char *b,char *c,char *d,char *sp,int &test){
	glColor3f(1,0,0);
	viet("Nhap ten khach hang",100,70,0);
	viet("Nhap so dien thoai",100,180,0);
	viet("Nhap ngay sinh",100,300,0);
	viet("Nhap ngay dat",100,420,0);
	glColor3f(1,1,1);
 	glBegin(GL_POLYGON);								/* o nhap ten khach hang*/						
		glVertex3f(300,160,0);
		glVertex3f(900,160,0);
		glVertex3f(900,90,0);
		glVertex3f(300,90,0);
	glEnd(); 
	glBegin(GL_POLYGON);								/*o nhap so dien thoai*/
		glVertex3f(300,200,0);
		glVertex3f(900,200,0);
		glVertex3f(900,270,0);
		glVertex3f(300,270,0);
	glEnd();
	glBegin(GL_POLYGON);								/*o nhap ngay sinh*/
		glVertex3f(300,320,0);
		glVertex3f(900,320,0);
		glVertex3f(900,390,0);
		glVertex3f(300,390,0);
	glEnd();
	glBegin(GL_POLYGON);								/* o nhap ngay dat*/
		glVertex3f(300,440,0);
		glVertex3f(900,440,0);
		glVertex3f(900,510,0);
		glVertex3f(300,510,0);
	glEnd();
	if(300<X && X<900 && 90<Y && 160>Y){				/* nhap ten khach hang*/
		vevien(300,90,600,70);
		if((i==ci || i==di || i==spi) && kt1==0){
			strcpy(a,b);
			i=bi;
			kt1=1;
			kt4=kt2=kt3=0;
		}	glColor3f(1,1,1);
		strcpy(b,a);
		bi=i;
		
	}
	if(300<X && X<900 && 200<Y && 270>Y){				/* nhap so dien thoai*/
		vevien(300,200,600,70);
		if((i==bi || i==di || i==spi) && kt2==0){
			strcpy(a,c);
			i=ci;
			kt2=1;
			kt1=kt4=kt3=0;
		}	glColor3f(1,1,1);
		strcpy(c,a);
		ci=i;		
	}
	if(300<X && X<900 && 320<Y && 390>Y){				/* nhap ngay sinh*/
		vevien(300,320,600,70);
		if((i==bi || i==ci || i==spi) && kt3==0){			
			strcpy(a,d);
			i=di;
			kt3=1;
			kt1=kt2=kt4=0;
		}	glColor3f(1,1,1);
		strcpy(d,a);
		di=i;
	}
	if(300<X && X<900 && 440<Y && 510>Y){				/* nhap ngay dat*/
		vevien(300,440,600,70);
	 	if((i==di || i==ci || i==bi) && kt4==0){
			strcpy(a,sp);
			i=spi;
			kt4=1;
			kt1=kt2=kt3=0;
		}	
		glColor3f(1,1,1);
		strcpy(sp,a);
		spi=i;
	}
	if(300>X || X>900 || 200>Y || 270<Y){kt2=0;}
	if(300>X || X>900 || 90>Y || 160<Y){kt1=0;}
	if(300>X || X>900 || 320>Y || 390<Y){kt3=0;}
	if(300>X || X>900 || 440>Y || 510<Y){kt4=0;}
	glColor3f(0,0,1);
	drawStrokeText(b,330,140,0);
	drawStrokeText(c,330,250,0);
	drawStrokeText(d,330,360,0);
	drawStrokeText(sp,330,480,0);
	glColor3f(0,0,1);
	glBegin(GL_POLYGON);								/* o dat phong khac*/
		glVertex3f(750,530,0);
		glVertex3f(400,530,0);
		glVertex3f(400,600,0);
		glVertex3f(750,600,0);
	glEnd();
	glBegin(GL_POLYGON);								/* o xong */
		glVertex3f(800,530,0);
		glVertex3f(1100,530,0);
		glVertex3f(1100,600,0);
		glVertex3f(800,600,0);
	glEnd();
	glColor3f(1,0,0);
	drawStrokeText("dat phong khac",420,580,0);
	drawStrokeText("Xong",820,580,0);
	glColor3f(0,0,1);
	
	static int kthoten=1,ktsdt=1,ktngaysinh=1,ktngaydat=1;
	if(800<X && X<1100 && 530<Y && 600>Y){				/* xong */
		kthoten=1;ktsdt=1;ktngaysinh=1;ktngaydat=1;
		if(ktrahoten(b) && checktime(d) && checktime(sp) && checksdt(c)){
			khachhang x;
			nhapkh(x,b,c,d,sp);
			strcpy(a,"                                                      ");
			strcpy(b,"                                                      ");
			strcpy(c,"                                                      ");
			strcpy(d,"                                                      ");
			strcpy(sp,"                                                      ");
			i=di=bi=ci=spi=0;
			X=100;Y=0;
			test=2;
		}else{
		if(ktrahoten(b)==0)   kthoten=0;
		if(checksdt(c)==0)    ktsdt=0;
		if(checktime(d)==0)   ktngaysinh=0;
		if(checktime(sp)==0)  ktngaydat=0;
		}
	}
	if(400<X && X<750 && 530<Y && 600>Y){				/*dat phong khac*/
		kthoten=1;ktsdt=1;ktngaysinh=1;ktngaydat=1;
		khachhang x;
		nhapkh(x,b,c,d,sp);
		strcpy(a,"                                                      ");
		strcpy(b,"                                                      ");
		strcpy(c,"                                                      ");
		strcpy(d,"                                                      ");
		strcpy(sp,"                                                      ");
		X=100;Y=0;
		i=di=bi=ci=spi=0;
		test=7;
	}
	glColor3f(1,1,0);
	if(kthoten==0)		vietbe("ten khong chua ki tu dac biet va so",920,140,0);
	if(ktsdt==0)		vietbe("so dien thoai chi chua so 0-9",920,250,0);
	if(ktngaysinh==0)	vietbe("ngay theo dang DD/MM/YYYY",920,360,0);
	if(ktngaydat==0)	vietbe("ngay theo dang DD/MM/YYYY",920,480,0);	
	if(0<X && X<50 && 0<Y && Y<50){X=100;Y=0;kthoten=1;ktsdt=1;ktngaysinh=1;ktngaydat=1;test=2;}
	glColor3f(1,1,1);
	glutSwapBuffers();

}

void inphongdh(int &X,int &Y,int &test){
	glColor3f(0,0,1);		
	if(0<X && X<50 && 0<Y && Y<50){X=100;Y=0;test=1;}
	glBegin(GL_POLYGON);								/* o so phong*/
		glVertex3f(30,100,0);			
		glVertex3f(230,100,0);
		glVertex3f(230,150,0);
		glVertex3f(30,150,0);
	glEnd();
	glBegin(GL_POLYGON);								/* o loai phong*/
		glVertex3f(250,100,0);
		glVertex3f(480,100,0);
		glVertex3f(480,150,0);
		glVertex3f(250,150,0);
	glEnd();
	glBegin(GL_POLYGON);								/* o loai giuong*/
		glVertex3f(950,100,0);
		glVertex3f(500,100,0);
		glVertex3f(500,150,0);
		glVertex3f(950,150,0);
	glEnd();
	glBegin(GL_POLYGON);								/* o trang trai*/
		glVertex3f(1000,100,0);
		glVertex3f(1250,100,0);
		glVertex3f(1250,150,0);
		glVertex3f(1000,150,0);
	glEnd();
	glBegin(GL_POLYGON);								/* cot so phong*/
		glVertex3f(30,160,0);
		glVertex3f(230,160,0);
		glVertex3f(230,600,0);
		glVertex3f(30,600,0);
	glEnd();
	glBegin(GL_POLYGON);								/* cot loai phong*/
		glVertex3f(250,160,0);
		glVertex3f(480,160,0);
		glVertex3f(480,600,0);
		glVertex3f(250,600,0);
	glEnd();
	glBegin(GL_POLYGON);								/* cot loai giuong*/
		glVertex3f(950,160,0);
		glVertex3f(500,160,0);
		glVertex3f(500,600,0);
		glVertex3f(950,600,0);
	glEnd();
	glBegin(GL_POLYGON);								/* cot trang thai*/
		glVertex3f(1000,160,0);
		glVertex3f(1250,160,0);
		glVertex3f(1250,600,0);
		glVertex3f(1000,600,0);
	glEnd();
	glBegin(GL_POLYGON);								/* o 1234*/
		glVertex3f(30,670,0);
		glVertex3f(230,670,0);
		glVertex3f(230,620,0);
		glVertex3f(30,620,0);
	glEnd();
	glColor3f(1,0,0);
	viet("So phong",50,140,0);
	viet("Loai phong",260,140,0);
	viet("Loai giuong",520,140,0);
	viet("Trang thai",1020,140,0);
	viet("1 ",50,650,0);
	viet("2 ",100,650,0);
	viet("3 ",150,650,0);
	viet("4 ",200,650,0);
	static int k=1;
	if (30<X && X<80 && 620<Y && Y<670)  k=1;						/* danh sach phong trang 1*/
	else if (80<X && X<130 && 620<Y && Y<670)  k=2;					/* danh sach phong trang 2*/
	else if (130<X && X<180 && 620<Y && Y<670)  k=3;				/* danh sach phong trang 3*/
	else if (180<X && X<230 && 620<Y && Y<670)  k=4;				/* danh sach phong trang 4*/
	if (k==1) inds1(X,Y);
	if (k==2) inds2(X,Y);
	if (k==3) inds3(X,Y);
	if (k==4) inds4(X,Y);
//	glColor3f(1,1,1);
//	glutSwapBuffers();
}

void chonphongdh(int &X,int &Y,int &test,int &kts,int *slp,int *slg,int &k,int *tam){
	int i,j=0;
	int gd1[10]={0,0,0,0,0,0,0,0,0,0},gd2[10]={0,0,0,0,0,0,0,0,0,0},doi1[10]={0,0,0,0,0,0,0,0,0,0};
	int doi2[10]={0,0,0,0,0,0,0,0,0,0},doi3[10]={0,0,0,0,0,0,0,0,0,0},don1[10]={0,0,0,0,0,0,0,0,0,0},don2[10]={0,0,0,0,0,0,0,0,0,0};
	timkiem(slp,slg,gd1,gd2,doi1,doi2,doi3,don1,don2);
	glColor3f(0,0,1);
	if(slp[0]==1 && slg[0]==1){
		glColor3f(1,0,0);
		viet("cac phong gia dinh 2 giuong doi: ",30,70+j*110,0);
		for(i=0;i<10;i++){
			if(gd1[i]!=0){
				glColor3f(0,0,1);
				glBegin(GL_POLYGON);
					glVertex3f(30+130*i,90+j*110,0);
					glVertex3f(110+130*i,90+j*110,0);
					glVertex3f(110+130*i,140+j*110,0);
					glVertex3f(30+130*i,140+j*110,0);
				glEnd(); 
				char s[5];
				itoa(gd1[i],s,10);
				glColor3f(1,0,0);
				viet(s,30+130*i,130+j*110,0);
				if(ktra1(X,Y,30+130*i,110+130*i,90+j*110,140+j*110)){
					X=100;Y=0;
					tam[k]=gd1[i];
					k++;	
				}
			}
		}
		j++;
	}
	if(slp[0]==1 && slg[1]==1){
		glColor3f(1,0,0);
		viet("cac phong gia dinh 1 giuong doi,1 giuong don: ",30,70+j*110,0);
		for(i=0;i<10;i++){
			if(gd2[i]!=0){
				glColor3f(0,0,1);
				glBegin(GL_POLYGON);
					glVertex3f(30+130*i,90+j*110,0);
					glVertex3f(110+130*i,90+j*110,0);
					glVertex3f(110+130*i,140+j*110,0);
					glVertex3f(30+130*i,140+j*110,0);
				glEnd(); 
				char s[5];
				itoa(gd2[i],s,10);
				glColor3f(1,0,0);
				viet(s,30+130*i,130+j*110,0);
				if(ktra1(X,Y,30+130*i,110+130*i,90+j*110,140+j*110)){
					X=100;Y=0;
					tam[k]=gd2[i];
					k++;	
				}
			}
		}
		j++;
	}
	
	if(slp[1]==1 && slg[2]==1){
		glColor3f(1,0,0);
		viet("cac phong doi, 1 giuong doi: ",30,70+j*110,0);
		for(i=0;i<10;i++){
			if(doi1[i]!=0){
				glColor3f(0,0,1);
				glBegin(GL_POLYGON);
					glVertex3f(30+130*i,90+j*110,0);
					glVertex3f(110+130*i,90+j*110,0);
					glVertex3f(110+130*i,140+j*110,0);
					glVertex3f(30+130*i,140+j*110,0);
				glEnd(); 
				char s[5];
				itoa(doi1[i],s,10);
				glColor3f(1,0,0);
				viet(s,30+130*i,130+j*110,0);
				if(ktra1(X,Y,30+130*i,110+130*i,90+j*110,140+j*110)){
					X=100;Y=0;
					tam[k]=doi1[i];
					k++;	
				}
			}
		}
		j++;
	}
	if(slp[1]==1 && slg[3]==1){
		glColor3f(1,0,0);
		viet("cac phong doi ,2 giuong don: ",30,70+j*110,0);
		for(i=0;i<10;i++){
			if(doi2[i]!=0){
				glColor3f(0,0,1);
				glBegin(GL_POLYGON);
					glVertex3f(30+130*i,90+j*110,0);
					glVertex3f(110+130*i,90+j*110,0);
					glVertex3f(110+130*i,140+j*110,0);
					glVertex3f(30+130*i,140+j*110,0);
				glEnd(); 
				char s[5];
				itoa(doi2[i],s,10);
				glColor3f(1,0,0);
				viet(s,30+130*i,130+j*110,0);
				if(ktra1(X,Y,30+130*i,110+130*i,90+j*110,140+j*110)){
					X=100;Y=0;
					tam[k]=doi2[i];
					k++;	
				}
			}
		}
		j++;
	}
	if(slp[1]==1 && slg[4]==1){
		glColor3f(1,0,0);
		viet("cac phong doi ,3 giuong don: ",30,70+j*110,0);
		for(i=0;i<10;i++){
			if(doi3[i]!=0){
				glColor3f(0,0,1);
				glBegin(GL_POLYGON);
					glVertex3f(30+130*i,90+j*110,0);
					glVertex3f(110+130*i,90+j*110,0);
					glVertex3f(110+130*i,140+j*110,0);
					glVertex3f(30+130*i,140+j*110,0);
				glEnd(); 
				char s[5];
				itoa(doi3[i],s,10);
				glColor3f(1,0,0);
				viet(s,30+130*i,130+j*110,0);
				if(ktra1(X,Y,30+130*i,110+130*i,90+j*110,140+j*110)){
					X=100;Y=0;
					tam[k]=doi3[i];
					k++;	
				}
			}
		}
		j++;
	}
	if(slp[2]==1 && slg[5]==1){
		glColor3f(1,0,0);
		viet("cac phong don ,1 giuong don: ",30,70+j*110,0);
		for(i=0;i<10;i++){
			if(don1[i]!=0){
				glColor3f(0,0,1);
				glBegin(GL_POLYGON);
					glVertex3f(30+130*i,90+j*110,0);
					glVertex3f(110+130*i,90+j*110,0);
					glVertex3f(110+130*i,140+j*110,0);
					glVertex3f(30+130*i,140+j*110,0);
				glEnd(); 
				char s[5];
				itoa(don1[i],s,10);
				glColor3f(1,0,0);
				viet(s,30+130*i,130+j*110,0);
				if(ktra1(X,Y,30+130*i,110+130*i,90+j*110,140+j*110)){
					X=100;Y=0;
					tam[k]=don1[i];
					k++;	
				}
			}
		}
		j++;
	}
/*	if(slp[2]==1 && slg[3]==1){
		glColor3f(1,0,0);
		viet("cac phong don ,1 giuong doi: ",600,50+j*140,0);
		for(i=0;i<10;i++){
			if(don2[i]!=0){
				glColor3f(0,0,1);
				glBegin(GL_POLYGON);
					glVertex3f(100+130*i,80+j*140,0);
					glVertex3f(180+130*i,80+j*140,0);
					glVertex3f(180+130*i,150+j*140,0);
					glVertex3f(100+130*i,150+j*140,0);
				glEnd(); 
				char s[5];
				itoa(don2[i],s,10);
				glColor3f(1,0,0);
				viet(s,100+130*i,130+j*140,0);
				if(ktra1(X,Y,100+130*i,180+130*i,80+j*140,150+j*140)){
					X=100;Y=0;
					tam[k]=don2[i];
					k++;	
				}
			}
		}
		j++;
	}*/
	glColor3f(0,1,0);
	glBegin(GL_POLYGON);
		glVertex3f(900,80,0);
		glVertex3f(1250,80,0);
		glVertex3f(1250,650,0);
		glVertex3f(900,650,0);
	glEnd(); 
	glColor3f(0,0,1);
	glBegin(GL_POLYGON);							/*chon lai*/
		glVertex3f(1050,350,0);
		glVertex3f(1200,350,0);
		glVertex3f(1200,400,0);
		glVertex3f(1050,400,0);
	glEnd(); 
	glBegin(GL_POLYGON);							/*tiep*/
		glVertex3f(1050,450,0);
		glVertex3f(1200,450,0);
		glVertex3f(1200,500,0);
		glVertex3f(1050,500,0);
	glEnd(); 
	glColor3f(1,0,0);
	viet("cac phong da chon: ",910,130,0);
	viet("chon lai ",1060,380,0);
	viet("tiep ",1060,480,0);
	if(ktra1(X,Y,1050,1200,350,400)){			/*nut Chon lai*/
		for(i=1;i<=k;i++){
			tam[i-1]=0;
		}
		k=0;
	}
	if(ktra1(X,Y,1050,1200,450,500)){			/*nut Tiep*/
		FILE *f2;
		f2=fopen("tam","wb");
			for(i=1;i<=k;i++){
		}
		fwrite(tam,sizeof(int),k,f2);
		fclose(f2);
		FILE *f3;
		f3=fopen("i","wb");
		fprintf(f3,"%d",k);
		fclose(f3);
		for(i=1;i<=k;i++){
			tam[i-1]=0;
		}
		k=0;		
		X=100;Y=0;
		test=12;
	}
	for(i=1;i<=k;i++){								/* in so phong dang chon*/
		char s[5];
		itoa(tam[i-1],s,10);
		glColor3f(1,0,0);
		viet(s,910,160+40*i,0);
	}
	glColor3f(1,1,1);
	if(0<X && X<50 && 0<Y && Y<50){X=100;Y=0;test=2;}
	glutSwapBuffers();
}
void timphongdh(int &X,int &Y,int &test,int &kts,int *slp,int *slg){
	glColor3f(0,0,1);
 	glBegin(GL_POLYGON);											/* phong gia dinh*/
		glVertex3f(30,130,0);
		glVertex3f(400,130,0);
		glVertex3f(400,200,0);
		glVertex3f(30,200,0);
	glEnd(); 
	glBegin(GL_POLYGON);											/* phong doi*/
		glVertex3f(450,130,0);
		glVertex3f(820,130,0);
		glVertex3f(820,200,0);
		glVertex3f(450,200,0);
	glEnd();
	glBegin(GL_POLYGON);											/* phong don*/
		glVertex3f(870,130,0);	
		glVertex3f(1240,130,0);
		glVertex3f(1240,200,0);
		glVertex3f(870,200,0);
	glEnd();
	if(ktra1(X,Y,30,400,130,200))slp[0]=1;							/* phong gia dinh*/
	if(ktra1(X,Y,450,820,130,200))slp[1]=1;							/* phong don*/
	if(ktra1(X,Y,870,1240,130,200))slp[2]=1;						/* phong doi*/
	if(slp[0]==1)vevien(30,130,370,70);
	if(slp[1]==1)vevien(450,130,370,70);
	if(slp[2]==1)vevien(870,130,370,70);
	glColor3f(1,0,0);
	drawStrokeText("loai phong",30,100,0);
	drawStrokeText("phong gia dinh",70,180,0);
	drawStrokeText("phong doi",520,180,0);
	drawStrokeText("phong don",950,180,0);
	drawStrokeText("loai giuong",30,230,0);
	
	if(slp[0]==1){
		glColor3f(0,0,1);
		glBegin(GL_POLYGON);										/* 2 giuong doi*/
			glVertex3f(30,250,0);
			glVertex3f(500,250,0);
			glVertex3f(500,320,0);
			glVertex3f(30,320,0);
		glEnd(); 
		glBegin(GL_POLYGON);										/* 1 giuong doi 1 giuong don*/
			glVertex3f(550,250,0);
			glVertex3f(1220,250,0);
			glVertex3f(1220,320,0);
			glVertex3f(550,320,0);
		glEnd();
		glColor3f(1,0,0);
		drawStrokeText("2 giuong doi",70,300,0);
		drawStrokeText("1 giuong doi, 1 giuong don",580,300,0);
		if(ktra1(X,Y,30,500,250,320))slg[0]=1;						/* 2 giuong doi*/
		if(ktra1(X,Y,550,1220,250,320))slg[1]=1;					/* 1 giuong doi 1 giuong don*/
		if(slg[0]==1)vevien(30,250,470,70);
		if(slg[1]==1)vevien(550,250,670,70);
	}
	
	if(slp[1]==1){
		glColor3f(0,0,1);
		glBegin(GL_POLYGON);										/* 1 giuong doi*/
			glVertex3f(30,350,0);
			glVertex3f(400,350,0);
			glVertex3f(400,420,0);
			glVertex3f(30,420,0);
		glEnd(); 
		glBegin(GL_POLYGON);										/* 2 giuong don*/
			glVertex3f(450,350,0);
			glVertex3f(820,350,0);
			glVertex3f(820,420,0);
			glVertex3f(450,420,0);
		glEnd();
		glBegin(GL_POLYGON);										/* 3 giuong don*/
			glVertex3f(870,350,0);
			glVertex3f(1240,350,0);
			glVertex3f(1240,420,0);
			glVertex3f(870,420,0);
		glEnd();
		glColor3f(1,0,0);
		drawStrokeText("1 giuong doi",50,400,0);
		drawStrokeText("2 giuong don",480,400,0);
		drawStrokeText("3 giuong don",900,400,0);
		if(ktra1(X,Y,30,400,350,420))slg[2]=1;						/* 1 giuong doi*/
		if(ktra1(X,Y,450,820,350,420))slg[3]=1;						/* 2 giuong don*/
		if(ktra1(X,Y,870,1240,350,420))slg[4]=1;					/* 3 giuong don*/
		if(slg[2]==1)vevien(30,350,370,70);
		if(slg[3]==1)vevien(450,350,370,70);
		if(slg[4]==1)vevien(870,350,370,70);
	}
	
	if(slp[2]==1){
		glColor3f(0,0,1);
		glBegin(GL_POLYGON);										/* 1 giuong don*/
			glVertex3f(30,450,0);
			glVertex3f(400,450,0);
			glVertex3f(400,520,0);
			glVertex3f(30,520,0);
		glEnd(); 
		glColor3f(1,0,0);
		drawStrokeText("1 giuong don",50,500,0);
		if(ktra1(X,Y,30,400,450,520))slg[5]=1;						/* 1 giuong don*/
		if(slg[5]==1)vevien(30,450,370,70);
 	}
 	
	glColor3f(0,0,1);
	glBegin(GL_POLYGON);
		glVertex3f(30,600,0);
		glVertex3f(400,600,0);
		glVertex3f(400,550,0);
		glVertex3f(30,550,0);
	glEnd(); 
	glColor3f(1,0,0);
	drawStrokeText("chon lai",50,590,0);
	if(ktra1(X,Y,30,400,550,600)){
		slg[0]=0;
		slg[1]=0;
		slg[2]=0;
		slg[3]=0;
		slg[4]=0;
		slg[5]=0;
		slp[0]=0;
		slp[1]=0;
		slp[2]=0;
	}
	glColor3f(0,0,1);
	glBegin(GL_POLYGON);
		glVertex3f(700,600,0);
		glVertex3f(900,600,0);
		glVertex3f(900,550,0);
		glVertex3f(700,550,0);
	glEnd(); 
	glColor3f(1,0,0);
	drawStrokeText("tiep",770,590,0);
	if(ktra1(X,Y,700,900,550,600)){X=100;Y=0;test=11;}			/* Tiep */
	glColor3f(1,1,1);
	if(0<X && X<50 && 0<Y && Y<50){X=100;Y=0;test=2;}
	glutSwapBuffers();
}

void inkhdh(int &X,int &Y,int &test){
	glColor3f(0,0,1);	
	glBegin(GL_POLYGON);								/* o ho va ten khach hang */
		glVertex3f(30,100,0);
		glVertex3f(430,100,0);
		glVertex3f(430,150,0);
		glVertex3f(30,150,0);
	glEnd();
	glBegin(GL_POLYGON);								/* o so dien thoai */
		glVertex3f(450,100,0);
		glVertex3f(680,100,0);
		glVertex3f(680,150,0);
		glVertex3f(450,150,0);
	glEnd();
	glBegin(GL_POLYGON);								/* o ngay sinh */
		glVertex3f(900,100,0);
		glVertex3f(700,100,0);
		glVertex3f(700,150,0);
		glVertex3f(900,150,0);
	glEnd();
	glBegin(GL_POLYGON);								/* o ngay dat */
		glVertex3f(910,100,0);
		glVertex3f(1110,100,0);
		glVertex3f(1110,150,0);
		glVertex3f(910,150,0);
	glEnd();
	glBegin(GL_POLYGON);								/* o chi tiet */
		glVertex3f(1120,100,0);
		glVertex3f(1250,100,0);
		glVertex3f(1250,150,0);
		glVertex3f(1120,150,0);
	glEnd();
	glBegin(GL_POLYGON);								/* cot ho ten khach hang */
		glVertex3f(30,160,0);
		glVertex3f(430,160,0);
		glVertex3f(430,600,0);
		glVertex3f(30,600,0);
	glEnd();
	glBegin(GL_POLYGON);								/* cot so dien thoai */
		glVertex3f(450,160,0);
		glVertex3f(680,160,0);
		glVertex3f(680,600,0);
		glVertex3f(450,600,0);
	glEnd();
	glBegin(GL_POLYGON);								/* cot ngay sinh */
		glVertex3f(900,160,0);
		glVertex3f(700,160,0);
		glVertex3f(700,600,0);
		glVertex3f(900,600,0);
	glEnd();
	glBegin(GL_POLYGON);								/* cot ngay dat */
		glVertex3f(910,160,0);
		glVertex3f(1110,160,0);
		glVertex3f(1110,600,0);
		glVertex3f(910,600,0);
	glEnd();
	glBegin(GL_POLYGON);								/* cot chi tiet */
		glVertex3f(1120,160,0);
		glVertex3f(1250,160,0);
		glVertex3f(1250,600,0);
		glVertex3f(1120,600,0);
	glEnd();
	glBegin(GL_POLYGON);								/* o 1234*/
		glVertex3f(910,620,0);
		glVertex3f(1110,620,0);
		glVertex3f(1110,670,0);
		glVertex3f(910,670,0);
	glEnd();
	glColor3f(1,0,0);
	viet("Ho ten khach hang",50,140,0);
	viet("So dien thoai",460,140,0);
	viet("Ngay sinh",710,140,0);
	viet("Ngay dat",930,140,0);
	viet("Chi tiet",1140,140,0);
	viet("1",930,660,0);
	viet("2",980,660,0);
	viet("3",1030,660,0);
	viet("4",1080,660,0);
	static int k=1; 
	if (k==1) indskh1(X,Y,test);
	if (k==2) indskh2(X,Y,test);
	if (k==3) indskh3(X,Y,test);
	if (k==4) indskh4(X,Y,test);
	if (910<X && X<960 && 620<Y && Y<670) k=1;					/* o 1*/
	if (960<X && X<1010 && 620<Y && Y<670) k=2;					/* o 2*/
	if (1010<X && X<1060 && 620<Y && Y<670) k=3;				/* o 3*/
	if (1060<X && X<1110 && 620<Y && Y<670) k=4;				/* o 4*/
	if(0<X && X<50 && 0<Y && Y<50){X=100;Y=0;test=2;}
}

void timkhdh(int &X,int &Y,int &i,int &bi,int &ci,int &di,int &spi,int &kt1,int &kt2,int &kt3,int &kt4,
		char *a,char *b,char *c,char *d,char *sp,int &test){
	glColor3f(1,1,1);
 	glBegin(GL_POLYGON);										/* o nhap ten khach hang */
		glVertex3f(30,620,0);
		glVertex3f(430,620,0);
		glVertex3f(430,670,0);
		glVertex3f(30,670,0);
	glEnd(); 
	glColor3f(0,0,1);
	glBegin(GL_POLYGON);										/* o sua */
		glVertex3f(450,620,0);
		glVertex3f(680,620,0);
		glVertex3f(680,670,0);
		glVertex3f(450,670,0);
	glEnd();
	glBegin(GL_POLYGON);										/* o xoa */
		glVertex3f(900,620,0);
		glVertex3f(700,620,0);
		glVertex3f(700,670,0);
		glVertex3f(900,670,0);
	glEnd();
	glBegin(GL_POLYGON);										/* o xong */
		glVertex3f(1120,620,0);
		glVertex3f(1250,620,0);
		glVertex3f(1250,670,0);
		glVertex3f(1120,670,0);
	glEnd();
	if(30<X && X<430 && 620<Y && 670>Y){						/* nhap ten khach hang */
		vevien(30,620,400,50);		
	 	if((i==di || i==ci || i==bi) && kt4==0){
			strcpy(a,sp);
			i=spi;
			kt4=1;
	}	
		glColor3f(1,1,1);
		strcpy(sp,a);
		spi=i;

	}
	if(ktra1(X,Y,450,680,620,670)){								/* sua thong tin khach hang*/
		X=100;Y=0;
		char s[32];
		strncpy(s,sp,30);
		strcpy(sp,"                               ");
		spi=0;
		s[30]='\0';
		int vtp=timkhachhang( X, Y, test,s);
		if(vtp!=-1){
			int k;	
			FILE *f5;
			f5=fopen("k","rb");
			fscanf(f5,"%d",&k);
			fclose(f5);
			khachhang x[k];
			FILE *f4;
			f4=fopen("khachhang","rb");
			fread(x,sizeof(khachhang),k,f4);
			fclose(f4);
			strcpy(b,s);
			strcpy(c,x[vtp].sdt);
			strcpy(d,x[vtp].ngaysinh);
			strcpy(sp,x[vtp].ngaydat);
			bi=strlen(b);
			ci=strlen(c);
			di=strlen(d);
			spi=strlen(sp);
			i=0;
			xoakhachhang(X,Y,test,s);
		}
		test=7;
				
	}
	if(ktra1(X,Y,700,900,620,670)){							/* xoa khach hang*/
		X=100;Y=0;
		char s[32];
		strncpy(s,sp,30);
		strcpy(sp,"                               ");
		spi=0;
		s[30]='\0';
		int vtp=timkhachhang( X, Y, test,s);
		if(vtp!=-1){
		xoakhachhang(X,Y,test,s);
		}
	}
	glColor3f(1,0,0);
	drawStrokeText("sua",500,660,0);
	drawStrokeText("xoa",750,660,0);
	drawStrokeText("xong",1150,660,0);
	drawStrokeText(sp,50,660,0);
	if(ktra1(X,Y,1120,1250,620,670)){						/* xong */
		strcpy(sp,"                                        ");
		test=1;
	}
	glColor3f(1,1,1);
	glutSwapBuffers();
}

void traphongdh(int &X,int &Y,int &i,int &bi,int &ci,int &di,int &spi,int &kt1,int &kt2,int &kt3,int &kt4,
		char *a,char *b,char *c,char *d,char *sp,int &test){
			
	glColor3f(1,0,0);
	drawStrokeText("Nhap ten khach hang",100,80,0);
	glColor3f(1,1,1);
 	glBegin(GL_POLYGON);
		glVertex3f(300,170,0);
		glVertex3f(900,170,0);
		glVertex3f(900,100,0);
		glVertex3f(300,100,0);
	glEnd(); 
	
	if(300<X && X<900 && 100<Y && 170>Y){
		vevien(300,100,600,70);
	 	if((i==ci || i==di || i==spi) && kt1==0){
			strcpy(a,b);
			i=bi;
			kt1=1;
			kt4=kt2=kt3=0;
		}	glColor3f(1,1,1);
		strcpy(b,a);
		bi=i;
	}
	glColor3f(1,0,0);
	drawStrokeText("Nhap ngay tra",100,200,0);
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
		glVertex3f(300,220,0);
		glVertex3f(900,220,0);
		glVertex3f(900,290,0);
		glVertex3f(300,290,0);
	glEnd();
	if(300<X && X<900 && 220<Y && 290>Y){
		vevien(300,220,600,70);
		if((i==bi || i==di || i==spi) && kt2==0){
			strcpy(a,c);
			i=ci;
			kt2=1;
			kt1=kt4=kt3=0;
		}	glColor3f(1,1,1);
		strcpy(c,a);
		ci=i;	
	}
	if(100>X || X>600 || 220>Y || 290<Y){kt2=0;}
	if(100>X || X>600 || 100>Y || 170<Y){kt1=0;}
	if(100>X || X>600 || 320>Y || 390<Y){kt3=0;}
	if(100>X || X>600 || 440>Y || 510<Y){kt4=0;}
	glColor3f(0,0,1);
	glBegin(GL_POLYGON);
		glVertex3f(600,500,0);
		glVertex3f(600,600,0);
		glVertex3f(900,600,0);
		glVertex3f(900,500,0);
	glEnd();
	glColor3f(0,0,1);
	drawStrokeText(b,330,140,0);
	drawStrokeText(c,330,250,0);
	glColor3f(1,0,0);
	drawStrokeText("thanh toan",620,550,0);
	
	static int ktratenkh=1;
	static int ktrangay=1;
	static char tenkh[50];
	static char ngaytra[12];
	strcpy(tenkh,b);
	strcpy(ngaytra,c);
	tenkh[30]='\0';
	ngaytra[11]='\0';
	static int vtkh=-1;
	if(ktra1(X,Y,600,900,500,600)){
		ktratenkh=1;ktrangay=1;
		if(ktrahoten(tenkh) && checktime(ngaytra)){
			strcpy(a,"                                                      ");
			strcpy(b,"                                                      ");
			strcpy(c,"                                                      ");
			strcpy(d,"                                                      ");
			strcpy(sp,"                                                      ");
			i=di=bi=ci=spi=0;
			vtkh=timkhachhang( X, Y, test, tenkh);
			if(vtkh!=-1){
				traphong(tenkh,ngaytra,vtkh);
				xoakhachhang(X,Y,test,tenkh);
				}
			X=100;Y=0;
		}else{
		if(ktrahoten(tenkh)==0)ktratenkh=0;
		if(checktime(ngaytra)==0)ktrangay=0;
		X=100;Y=0;
		}
	}
	glColor3f(1,0,1);
	if(ktratenkh==0)vietbe("ten khong chua ki tu dac biet va so",920,140,0);
	if(ktrangay==0)vietbe("ngay theo dang DD/MM/YYYY",920,250,0);
	if(vtkh!=-1){
			long tien;
			char s[30];
			FILE *f7;
			f7=fopen("tien","rb");
			fscanf(f7,"%d\n",&tien);
			fclose(f7);
			glColor3f(0,0,1);
			glBegin(GL_POLYGON);
				glVertex3f(200,100,0);
				glVertex3f(200,600,0);
				glVertex3f(1200,600,0);
				glVertex3f(1200,100,0);
			glEnd();
			glColor3f(1,0,0);
			viet("ten khach hang: ",300,150,0);
			viet(tenkh,600,150,0);
			viet("so tien: ",300,250,0);
			ltoa(tien,s,10);
			viet(s,600,250,0);
			viet("$",800,250,0);
			glColor3f(0,1,0);
			glBegin(GL_POLYGON);
				glVertex3f(1000,500,0);
				glVertex3f(1000,600,0);
				glVertex3f(1200,600,0);
				glVertex3f(1200,500,0);
			glEnd();
			glColor3f(1,0,0);
			viet("quay lai",1010,570,0);
			if(ktra1(X,Y,1000,1200,500,600)){vtkh=-1;}
	}
	if(0<X && X<50 && 0<Y && Y<50){ktratenkh=1;ktrangay=1;X=100;Y=0;test=2;}
	glColor3f(1,1,1);
	glutSwapBuffers();
	
}

void doanhthudh(int &X,int &Y,int &test){
	glColor3f(0,0,1);
	glBegin(GL_POLYGON);
		glVertex3f(100,600,0);
		glVertex3f(100,100,0);
		glVertex3f(1200,100,0);
		glVertex3f(1200,600,0);
	glEnd();
	long doanhthu;
	int l1,l2,l3;
	FILE *f6;
	f6=fopen("doanhthu","rb");
	fscanf(f6,"%d",&doanhthu);
	fscanf(f6,"%d",&l1);
	fscanf(f6,"%d",&l2);
	fscanf(f6,"%d",&l3);
	fclose(f6);
	int max=l1,min=l1;
	if(l1<l2) max=l2;
	else	  min=l2;
	if(max<l3) max=l3;
	if(min>l3) min=l3;
	char s1[30];
	itoa(doanhthu,s1,10);
	glColor3f(1,0,0);
	drawStrokeText("Khach san gabe (Trau Quy)",250,140,0);
	drawStrokeText("Tong doanh thu:",120,210,0);drawStrokeText(s1,650,210,0);
	drawStrokeText("$",900,210,0);
	drawStrokeText("Loai phong dat nhieu nhat:",120,280,0);
	if(max==l1)drawStrokeText("phong gia dinh",650,280,0);
	else if(max==l2)drawStrokeText("phong doi",650,280,0);
	else if(max==l3)drawStrokeText("phong don",650,280,0);
	drawStrokeText("Loai phong dat it nhat:   ",120,350,0);
	if(min==l1)drawStrokeText("phong gia dinh",650,350,0);
	else if(min==l2)drawStrokeText("phong doi",650,350,0);
	else if(min==l3)drawStrokeText("phong don",650,350,0);
	if(0<X && X<50 && 0<Y && Y<50){X=100;Y=0;test=0;}									/* quay lai */
	glColor3f(1,1,1);
	glutSwapBuffers();
}


void giaphongdh(int &X,int &Y,int &test){
	glColor3f(0,0,1);
	glBegin(GL_POLYGON);
		glVertex3f(100,600,0);
		glVertex3f(100,100,0);
		glVertex3f(1200,100,0);
		glVertex3f(1200,600,0);
	glEnd();
	if(0<X && X<50 && 0<Y && Y<50){X=100;Y=0;test=1;}									/* quay lai */
	glColor3f(1,0,0);
	viet("Bang gia khach san gabe (trau quy)",120,140,0);
	viet("Phong gia dinh : 450$/ngay",120,190,0);
	viet("Phong doi      : 300$/ngay",120,240,0);
	viet("Phong don      : 200$/ngay",120,290,0);
	viet("Goi nhan phong : 12h,17h",120,340,0);
	viet("Khach san ho tro cac dinh vu khac nhu :xe dua don...",120,390,0);
	
	glColor3f(1,1,1);
	glutSwapBuffers();
}

