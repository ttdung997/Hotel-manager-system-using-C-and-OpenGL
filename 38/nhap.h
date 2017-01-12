

void nhap(phong &x,int sophong,int loaiphong,int loaig){
	x.tang=1;
	x.sophong=sophong;
	x.loaiphong=loaiphong;;
	x.giuong=loaig;
	x.trangthai=1;
}


void nhapds(phong *x,int n){
	FILE *f1;
	f1=fopen("n","wb");
	fprintf(f1,"%d",n);
	fclose(f1);
	FILE *f;
	f=fopen("ttphong","wb");
	fwrite(x,sizeof(phong),n,f);
	fclose(f);
}


void nhapkh(khachhang &x,char *hotenkh,char *sdtkh,char *ngaysinhkh,char *ngaydatkh){
	int sp[50],i,k;
	FILE *f3;
	f3=fopen("i","rb");
	fscanf(f3,"%d",&i);
	fclose(f3);
	FILE *f2;
	f2=fopen("tam","rb");
	fread(sp,sizeof(int),i,f2);
	fclose(f2);
	FILE *f5;
	f5=fopen("k","rb");
	fscanf(f5,"%d",&k);
	fclose(f5);
	
	int dem=0;
	
	while(ngaysinhkh[dem]!=' '){
		x.ngaysinh[dem]=ngaysinhkh[dem];
		dem++;
	}
	x.ngaysinh[dem]='\0';
	dem=0;
	while(sdtkh[dem]!=' '){
		x.sdt[dem]=sdtkh[dem];
		dem++;
	}
	x.sdt[dem]='\0';
	dem=0;
	strncpy(x.hoten,hotenkh,30);
	//strncpy(x.sdt,sdtkh,11);	
	strncpy(x.ngaydat,ngaydatkh,11);
	int j,j2;
	for(j=0;j<50;j++){
		x.phong[j]=0;
	}
	for(j=0;j<i;j++){
	
		x.phong[j]=sp[j];
	}	
	int n;
	FILE *f1;
	f1=fopen("n","rb");
	fscanf(f1,"%d",&n);
	fclose(f1);
	phong a[n];
	FILE *f;
	f=fopen("ttphong","rb");
	fread(a,sizeof(phong),n,f);
	fclose(f);
	for(j2=0;j2<n;j2++){
	for(j=0;j<i;j++){
		if(a[j2].sophong==x.phong[j]){
			a[j2].trangthai=2;
		}
	}	
	}
	f1=fopen("n","wb");
	fprintf(f1,"%d",n);
	fclose(f1);
	f=fopen("ttphong","wb");
	fwrite(a,sizeof(phong),n,f);
	fclose(f);
	x.kt=i;
	k=k+1;
	FILE *f4;
	f4=fopen("khachhang","ab");
	fwrite(&x,sizeof(khachhang),1,f4);
	fclose(f4);
	f5=fopen("k","wb");
	fprintf(f5,"%d",k);
	fclose(f5);
}
