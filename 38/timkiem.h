
void timphonggiadinh(phong *x,int n,int &kt,int k,int *gd){
	int i,j=0;
	switch(k){
		case 1:	
			for(i=0;i<n;i++){
				if(x[i].trangthai==1 && x[i].loaiphong==1 && x[i].giuong==1){
					kt=1;
					
					gd[j]=x[i].sophong;
					j++;
				}
			}	
		break;
		case 2:
			for(i=0;i<n;i++){
				if(x[i].trangthai==1 && x[i].loaiphong==1 && x[i].giuong==2){
					kt=1;
					gd[j]=x[i].sophong;
					j++;
				}
			}	
		break;
		
	}
}

void timphongdoi(phong *x,int n,int &kt,int k,int *doi){
	int i,j=0;
	switch(k){
		case 1:
			for(i=0;i<n;i++){
				
				if(x[i].trangthai==1 && x[i].loaiphong==2 && x[i].giuong==3){
					kt=1;
					doi[j]=x[i].sophong;
					j++;
				}
			}	
		break;
		case 2:
			for(i=0;i<n;i++){
				
				if(x[i].trangthai==1 && x[i].loaiphong==2 && x[i].giuong==4){
					kt=1;
					doi[j]=x[i].sophong;
					j++;
				}
			}	
		break;
		case 3:
			for(i=0;i<n;i++){
				
				if(x[i].trangthai==1 && x[i].loaiphong==2 && x[i].giuong==5){
					kt=1;
					doi[j]=x[i].sophong;
					j++;
				}
			}	
		break;
		
	}
}
void timphongdon(phong *x,int n,int &kt,int k,int *don){
	int i,j=0;
	switch(k){
		case 1:
			for(i=0;i<n;i++){
				if(x[i].trangthai==1 && x[i].loaiphong==3 && x[i].giuong==6){
					don[j]=x[i].sophong;
					j++;
				}
			}	
		break;
		case 2:
			for(i=0;i<n;i++){
				if(x[i].trangthai==1 && x[i].loaiphong==3 && x[i].giuong==3){
					don[j]=x[i].sophong;
					j++;
				}
			}	
		break;
		
	}
}

void timkiem(int *slp,int *slg,int *gd1,int *gd2,int *doi1,int *doi2,int *doi3,int *don1,int *don2){
	int i,n,kt=0;
	FILE *f1;
	f1=fopen("n","rb");
	fscanf(f1,"%d",&n);
	fclose(f1);
	phong b[n];
	FILE *f;
	f=fopen("ttphong","rb");
	fread(b,sizeof(phong),n,f);
	fclose(f);
	if(slp[0]==1 && slg[0]==1){timphonggiadinh(b,n,kt,1,gd1);}
	if(slp[0]==1 && slg[1]==1){timphonggiadinh(b,n,kt,2,gd2);}
	if(slp[1]==1 && slg[2]==1){timphongdoi(b,n,kt,1,doi1);}
	if(slp[1]==1 && slg[3]==1){timphongdoi(b,n,kt,2,doi2);}
	if(slp[1]==1 && slg[4]==1){timphongdoi(b,n,kt,3,doi3);}
	if(slp[2]==1 && slg[5]==1){timphongdon(b,n,kt,1,don1);}
//	if(slp[2]==1 && slg[3]==2){timphongdon(b,n,kt,2,don2);}
}

