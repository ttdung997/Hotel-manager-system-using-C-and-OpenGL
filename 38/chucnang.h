int timkiemsp(phong *x,int sp,int n){
	int i,k=0;	
	for(i=0;i<n;i++){
		if(sp==x[i].sophong){
			k=1;		
			break;
		}
	}
	if(k==0){i=-1;}
	return i;
}


void timphong(int sp,int &lp,int &lg,int &tt,int &kts){
	int i;int n;
	FILE *f1;
	f1=fopen("n","rb");
	fscanf(f1,"%d",&n);
	fclose(f1);
	phong b[n];
	FILE *f;
	f=fopen("ttphong","rb");
	fread(b,sizeof(phong),n,f);
	fclose(f);
	i=timkiemsp(b,sp,n);
	if(i!=-1){
		lp=b[i].loaiphong;
		lg=b[i].giuong;
		tt=b[i].trangthai;
		kts=1;
	}
}

void suaphong(int sp,int &lp,int &lg,int &tt){
	int i;
	int n;
	FILE *f1;
	f1=fopen("n","rb");
	fscanf(f1,"%d",&n);
	fclose(f1);
	phong b[n];
	FILE *f;
	f=fopen("ttphong","rb");
	fread(b,sizeof(phong),n,f);
	fclose(f);
	i=timkiemsp(b,sp,n);
	if(i!=-1){
		b[i].loaiphong=lp;
		b[i].giuong=lg;
		b[i].trangthai=tt;
	}
	f1=fopen("n","wb");
	fprintf(f1,"%d",n);
	fclose(f1);
	f=fopen("ttphong","wb");
	fwrite(b,sizeof(phong),n,f);
	fclose(f);
}
void themphong(int sp,int lp,int lg){
	int i,n;
	FILE *f1;
	f1=fopen("n","rb");
	fscanf(f1,"%d",&n);
	fclose(f1);
	phong b[n+1];
	FILE *f;
	f=fopen("ttphong","rb");
	fread(b,sizeof(phong),n,f);
	fclose(f);
	nhap(b[n], sp, lp, lg);
	n=n+1;
	f1=fopen("n","wb");
	fprintf(f1,"%d",n);
	fclose(f1);
	f=fopen("ttphong","wb");
	fwrite(b,sizeof(phong),n,f);
	fclose(f);
}

void xoaphong(int sp,int &kts){
	int h,i;
	int n;
	FILE *f1;
	f1=fopen("n","rb");
	fscanf(f1,"%d",&n);
	fclose(f1);
	phong b[n];
	FILE *f;
	f=fopen("ttphong","rb");
	fread(b,sizeof(phong),n,f);
	fclose(f);
	h=timkiemsp(b,sp,n);
if(h!=-1){
	for(i=h;i<n;i++){
		b[i]=b[i+1];
	}
	kts=1;
	n=n-1;
}
	f1=fopen("n","wb");
	fprintf(f1,"%d",n);
	fclose(f1);
	f=fopen("ttphong","wb");
	fwrite(b,sizeof(phong),n,f);
	fclose(f);
}

void chuyendoi(char *a,int &y,int &m,int &d){
	int i;
	char day[10],month[10],year[10];
	strcpy(day,a);
	strncpy(month,a+3,2);
	strncpy(year,a+6,4);
	day[2]='\0';
	month[2]='\0';
	year[4]='\0';
	d=atoi(day);
	m=atoi(month);
	y=atoi(year);
}

long tinhngay(int d,int m,int y)	//hàm tính thời gian
{
	int nhuan=0,S=0,t2;
	if (y%4==0)	{t2=29;}
	else		{t2=28;}
	switch(m){
		case 1:S=S+d;break;
		case 2:S=S+31+d;break;
		case 3:S=S+31+t2+d;break;
		case 4:S=S+31+t2+31+d;break;
		case 5:S=S+31+t2+31+30+d;break;
		case 6:S=S+31+t2+31+30+31+d;break;
		case 7:S=S+31+t2+31+30+31+30+d;break;
		case 8:S=S+31+t2+31+30+31+30+31+d;break;
		case 9:S=S+31+t2+31+30+31+30+31+31+d;break;
		case 10:S=S+31+t2+31+30+31+30+31+31+30+d;break;
		case 11:S=S+31+t2+31+30+31+30+31+31+30+31+d;break;
		case 12:S=S+31+t2+31+30+31+30+31+31+30+31+30+d;break;
	}
	y=y-2000;
	for (int i=0;i<y;i++)
		if (i%4==0)	nhuan++;
	return (((y-nhuan)*365+nhuan*366)+S);
}

int checktime(char *x){ //hàm kiểm tra thời gian
	int ok=1;
	if(x[2]!='/' || x[5]!='/'){
		ok=0;
	}
	for(int i=0;i<10;i++){
		if(i==2 || i==5) continue;
		else{
			if((int)x[i]<48 || (int)x[i]>57){
				ok=0;
				break;
			}
		}
	}
	return ok;
	
}

int checksdt(char *x){ //hàm kiểm tra số điện thoại
	int ok=1;
	for(int i=0;i<strlen(x);i++){
		if(x[i]==' ') continue;
		else{
			if((int)x[i]<48 || (int)x[i]>57){
				ok=0;
				break;
			}
		}
	}
	return ok;
	
}

int ktraemail(char *s) //hàm kiểm tra email
{
	int ok=0;
	char *ktra;
	char a[2]="@";
	ktra=strstr (s,a);
	if (ktra!=NULL)	ok=1;
	return ok;
}

int ktrahoten(char *hoten)	//hàm kiểm tra họ tên
{
	int n=strlen(hoten),ok=1;
	for (int i=0;i<n;i++)
	{
		if (hoten[i]==' ')continue;
		if ((((int)hoten[i]<65)||((int)hoten[i]>90))&&(((int)hoten[i]<97)||((int)hoten[i]>122)))
		{		
			ok=0;break;
		}
	}
	return ok;	
}
