
void datlai(int sp){
	int i,n;
	
	FILE *f1;
	f1=fopen("n","rb");
	fscanf(f1,"%d",&n);
	fclose(f1);
	phong b[n];
	FILE *f;
	f=fopen("ttphong","rb");
	fread(b,sizeof(phong),n,f);
        for(i=0;i<n;i++){
	if(sp==b[i].sophong){
		b[i].trangthai=1;
		break;	
	}
       }
	fclose(f);
	f1=fopen("n","wb");
	fprintf(f1,"%d",n);
	fclose(f1);
	f=fopen("ttphong","wb");
	fwrite(b,sizeof(phong),n,f);
	fclose(f);
}

int  timkhachhang(int X,int Y,int test,char *s){
	int k,kiemtra=0;	
	FILE *f5;
	f5=fopen("k","rb");
	fscanf(f5,"%d",&k);
	fclose(f5);
	khachhang x[k];
	FILE *f4;
	f4=fopen("khachhang","rb");
	fread(x,sizeof(khachhang),k,f4);
	int i,j;
	for(i=0;i<=k;i++){
		x[i].hoten[30]='\0';
		if(strcmp(s,x[i].hoten)==0){
			kiemtra=1;
			break;
		}
	}
	if(kiemtra==0)i=-1;
	return i;
}
void xoakhachhang(int X,int Y,int test,char *s){
	int k;	
	FILE *f5;
	f5=fopen("k","rb");
	fscanf(f5,"%d",&k);
	fclose(f5);
	khachhang x[k];
	FILE *f4;
	f4=fopen("khachhang","rb");
	fread(x,sizeof(khachhang),k,f4);
	int i,j;
	for(i=0;i<=k;i++){
		
		s[30]='\0';
		x[i].hoten[30]='\0';
		if(strcmp(s,x[i].hoten)==0){
			break;
		}
	}
	for(j=0;j<50;j++){
		if(x[i].phong[j]!=0){
		datlai(x[i].phong[j]);
		} 
	}
	if(k!=0){
	if(i==k-1)k=k-1;
	else {
		for(j=i;j<k-1;j++){
			x[j]=x[j+1];
		}
		k=k-1;
		
	}
	}
	f4=fopen("khachhang","wb");
	fwrite(x,sizeof(khachhang),k,f4);
	fclose(f4);
	f5=fopen("k","wb");
	fprintf(f5,"%d",k);
	fclose(f5);
}


void traphong(char *tenkh,char *ngaytra,int vtkh){
	long tien=0;
	int k;	
	long doanhthu;
	int l1,l2,l3;
	FILE *f6;
	f6=fopen("doanhthu","rb");
	fscanf(f6,"%d",&doanhthu);
	fscanf(f6,"%d",&l1);
	fscanf(f6,"%d",&l2);
	fscanf(f6,"%d",&l3);
	fclose(f6);
	FILE *f5;
	f5=fopen("k","rb");
	fscanf(f5,"%d",&k);
	fclose(f5);
	khachhang x[k];
	FILE *f4;
	f4=fopen("khachhang","rb");
	fread(x,sizeof(khachhang),k,f4);
	int i,n;
	FILE *f1;
	f1=fopen("n","rb");
	fscanf(f1,"%d",&n);
	fclose(f1);
	phong b[n];
	FILE *f;
	f=fopen("ttphong","rb");
	fread(b,sizeof(phong),n,f);
	int dt,mt,yt,ds,ms,ys;
	chuyendoi(x[vtkh].ngaydat,yt,mt,dt);
	chuyendoi(ngaytra,ys,ms,ds);
	int tgian;
	tgian=tinhngay(ds,ms,ys)-tinhngay(dt,mt,yt);
	int vt=0;
	while(x[vtkh].phong[vt]!=0){
		for(i=0;i<n;i++){
			if(x[vtkh].phong[vt]==b[i].sophong){
				if(b[i].loaiphong==1){tien=tien+450*tgian;l1++;}
				if(b[i].loaiphong==2){tien=tien+300*tgian;l2++;}
				if(b[i].loaiphong==3){tien=tien+200*tgian;l3++;}
				vt++;
				
			}
		}
	}
	
	doanhthu=doanhthu+tien;
	fclose(f);
	f1=fopen("n","wb");
	fprintf(f1,"%d",n);
	fclose(f1);
	f=fopen("ttphong","wb");
	fwrite(b,sizeof(phong),n,f);
	fclose(f);
	f4=fopen("khachhang","wb");
	fwrite(x,sizeof(khachhang),k,f4);
	fclose(f4);
	f5=fopen("k","wb");
	fprintf(f5,"%d",k);
	fclose(f5);
	f6=fopen("doanhthu","wb");
	fprintf(f6,"%d\n",doanhthu);
	fprintf(f6,"%d\n",l1);
	fprintf(f6,"%d\n",l2);
	fprintf(f6,"%d\n",l3);
	fclose(f6);
	FILE *f7;
	f7=fopen("tien","wb");
	fprintf(f7,"%d\n",tien);
	fclose(f7);
	
}
