struct phong{
	int tang;
	int sophong;
	int loaiphong;
	int giuong;
	int trangthai;
	
};

struct khachhang{
	char hoten[50];
	char sdt[15];
	char ngaysinh[11];
	char ngaydat[11];
	int phong[50];
	int kt;
};
void inloaiphong(int x,int i){
	char *a;
	switch(x){
 	 case 1: a="phong gia dinh";break;
	 case 2: a="phong doi";break;
	 case 3: a="phong don";break;
	}
	viet(a,260,140+50+50*i,0);
	
}

void ingiuong(int x,int i){
	char *a;
	switch(x){
 	 case 1: a="2 giuong doi";break;
	 case 2: a="1 giuong doi,1 giuong don";break;
	 case 3: a="1 guong doi";break;
	 case 4: a="2 giuong don";break;
	 case 5: a="3 giuong don";break;
	 case 6: a="1 giuong don";break;
	}
	viet(a,520,140+50+50*i,0);
	
}

void intrangthai(int x,int i){
	char *a;
	switch(x){
 	 case 1: a="trong";break;
	 case 2: a="da dat";break;
	 case 3: a="dang sua";break;
	
	}
	 viet(a,1020,140+50+50*i,0);
}

void in(phong x,int i){
	char s[30];
	itoa(x.sophong,s,10);
	viet(s,50,140+50+50*i,0);
	inloaiphong(x.loaiphong,i);
	ingiuong(x.giuong,i);
	intrangthai(x.trangthai,i);
}

void doichosophong(phong &x,phong &y){
	phong a;
	if(x.sophong>y.sophong){
		a=x;
		x=y;
		y=a;
	}
}

void doicholoaiphong(phong &x,phong &y){
	phong a;
	if(x.loaiphong>y.loaiphong){
		a=x;
		x=y;
		y=a;
	}
}

void doichotrangthai(phong &x,phong &y){
	phong a;
	if(x.trangthai>y.trangthai){
		a=x;
		x=y;
		y=a;
	}
}

void sapxep(phong *x,int n,int &X,int &Y){
	int i,j;
	static int kt=0;
	   if(ktra1(X,Y,30,230,100,150))kt=1;
        if(ktra1(X,Y,250,480,100,150))kt=2;
        if(ktra1(X,Y,1000,1250,100,150))kt=3;
	for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
      		if(kt==1)doichosophong(x[i],x[j]);
        	if(kt==2)doicholoaiphong(x[i],x[j]);
        	if(kt==3)doichotrangthai(x[i],x[j]);
		}
	}
}

void inds1(int &X,int &Y){
	int i,n;													/* n:so luong phong */
	FILE *f1;
	f1=fopen("n","rb");
	fscanf(f1,"%d",&n);
	fclose(f1);
	phong b[n];
	FILE *f;
	f=fopen("ttphong","rb");
	fread(b,sizeof(phong),n,f);
	fclose(f);
	sapxep(b,n,X,Y);
	if (n<9)
		for(i=0;i<n;i++)
			in(b[i],i);
	else 
		for (i=0;i<9;i++)
			in(b[i],i);
}

void inds2(int &X,int &Y){
	int i,n;
	FILE *f1;
	f1=fopen("n","rb");
	fscanf(f1,"%d",&n);
	fclose(f1);
	phong b[n];
	FILE *f;
	f=fopen("ttphong","rb");
	fread(b,sizeof(phong),n,f);
	fclose(f);
	sapxep(b,n,X,Y);
	if (n<18)
		for(i=9;i<n;i++)
			in(b[i],i-9);
	else for (i=9;i<18;i++)
			in(b[i],i-9);
}

void inds3(int &X,int &Y){
	int i,n;
	FILE *f1;
	f1=fopen("n","rb");
	fscanf(f1,"%d",&n);
	fclose(f1);
	phong b[n];
	FILE *f;
	f=fopen("ttphong","rb");
	fread(b,sizeof(phong),n,f);
	fclose(f);
	sapxep(b,n,X,Y);
	if (n<27)
		for(i=18;i<n;i++)
			in(b[i],i-18);
	else for (i=18;i<27;i++)
			in(b[i],i-18);
}

void inds4(int &X,int &Y){
	int i,n;
	FILE *f1;
	f1=fopen("n","rb");
	fscanf(f1,"%d",&n);
	fclose(f1);
	phong b[n];
	FILE *f;
	f=fopen("ttphong","rb");
	fread(b,sizeof(phong),n,f);
	fclose(f);
	sapxep(b,n,X,Y);
	if (n<36)
		for(i=27;i<n;i++)
			in(b[i],i-27);
	else for (i=27;i<36;i++)
			in(b[i],i-27);
}

void inkh(int &X,int &Y,int &test,khachhang x,int k){
	int i;
	static int ss=0;
	static int kt[50];
	glColor3f(1,0,0);
	viet(x.hoten,50,190+50*k,0);
	viet(x.sdt,460,190+50*k,0);
	viet(x.ngaysinh,720,190+50*k,0);
	viet(x.ngaydat,930,190+50*k,0);
	for(i=0;i<50;i++)
	 	if(kt[i]==1){
 			ss=1;break;
 		}
	if(ss==0) viet("hien",1140,190+50*k,0);
	if(ktra1(X,Y,1120,1250,160+50*k,190+50*k)){X=100;Y=0;kt[k]=1;}				/* o hien*/
	if(kt[k]==1){	
	glColor3f(0,1,0);
	glBegin(GL_POLYGON);														/* cot chi tiet*/
		glVertex3f(1120,160,0);
		glVertex3f(1250,160,0);
		glVertex3f(1250,600,0);
		glVertex3f(1120,600,0);
	glEnd();
	glColor3f(0,0,1);
	for(i=0;i<50;i++){
		if(x.phong[i]!=0){
				char s[30];
				itoa(x.phong[i],s,10);
				viet(s,1140,190+50*i,0);
			}else{break;}
		}
	glBegin(GL_POLYGON);														/* o xong be*/
		glVertex3f(1120,570,0);
		glVertex3f(1250,570,0);
		glVertex3f(1250,600,0);
		glVertex3f(1120,600,0);
	glEnd();
	glColor3f(1,0,0);
	viet("xong",1150,590,0);	
	if(ktra1(X,Y,1120,1250,570,600)){X=100;Y=0;ss=0;kt[k]=0;}
	}
	if (910<X && X<1110 && 620<Y && Y<670) {kt[k]=0;ss=0;};						/* o 1234 */
}

void indskh1(int &X,int &Y,int &test){
	int i,k;												/* k:so luong khach hang */
	FILE *f5;												/* i:vi tri in khach hang */
	f5=fopen("k","rb");
	fscanf(f5,"%d",&k);
	fclose(f5);
	khachhang x[k];
	FILE *f4;
	f4=fopen("khachhang","rb");								/* khachhang:chua thong tin khach hang */
	fread(x,sizeof(khachhang),k,f4);
	fclose(f4);
	if (k>9)
		for(i=0;i<9;i++)
			inkh(X,Y,test,x[i],i);
	else 
		for(i=0;i<k;i++)
			inkh(X,Y,test,x[i],i);
}

void indskh2(int &X,int &Y,int &test){
	int i,k;											
	FILE *f5;
	f5=fopen("k","rb");
	fscanf(f5,"%d",&k);
	fclose(f5);
	khachhang x[k];
	FILE *f4;
	f4=fopen("khachhang","rb");							
	fread(x,sizeof(khachhang),k,f4);
	fclose(f4);
	if (k>18)
		for(i=9;i<18;i++)
			inkh(X,Y,test,x[i],i-9);
	else 
		for(i=9;i<k;i++)
			inkh(X,Y,test,x[i],i-9);
}

void indskh3(int &X,int &Y,int &test){
	int i,k;										
	FILE *f5;
	f5=fopen("k","rb");
	fscanf(f5,"%d",&k);
	fclose(f5);
	khachhang x[k];
	FILE *f4;
	f4=fopen("khachhang","rb");							
	fread(x,sizeof(khachhang),k,f4);
	fclose(f4);
	if (k>27)
		for(i=18;i<27;i++)
			inkh(X,Y,test,x[i],i-18);
	else 
		for(i=18;i<k;i++)
			inkh(X,Y,test,x[i],i-18);
}

void indskh4(int &X,int &Y,int &test){
	int i,k;											
	FILE *f5;
	f5=fopen("k","rb");
	fscanf(f5,"%d",&k);
	fclose(f5);
	khachhang x[k];
	FILE *f4;
	f4=fopen("khachhang","rb");				
	fread(x,sizeof(khachhang),k,f4);
	fclose(f4);
	if (k>36)
		for(i=27;i<36;i++)
			inkh(X,Y,test,x[i],i-27);
	else 
		for(i=27;i<k;i++)
			inkh(X,Y,test,x[i],i-27);
}
