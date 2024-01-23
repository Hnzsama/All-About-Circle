#include<iostream>
#include<cmath>
#include<graphics.h>
#include <unistd.h>
#include <stdio.h>
#include <cstdlib>
using namespace std;

int main()
{
	int gd=DETECT,gm;
    float phi=3.14;
    int pi;
    double di;
    float t,pelukis,pe, jari,jari2, diameter, luas,l2, keliling, dl, jl, dl2, jl2, v;
    string a, b, c, d, j;
    char p;
    string ulang, balen;
    do
    {
       cout<<"Kalkulator Handmade"<<endl;
       cout<<"==================="<<endl;
       cout<<"[1] Lingkaran"<<endl;
       cout<<"[2] Tabung"<<endl;
       cout<<"[3] Kerucut"<<endl;
       cout<<"[4] Bola"<<endl;
       cout<<"========================================"<<endl;
       cout<<"Pilih jenih operasi hitungan = ";cin>>a;
       cout<<"========================================"<<endl;
       system("cls");
       //Lingkaran
       if(a=="1") {
            cout<<"[1] Lingkaran"<<endl;
            cout<<"[2] Semi Lingkaran"<<endl;
            cout<<"=================="<<endl;
            cout<<"Pilih operasi = ";cin>>b;
            cout<<"=================="<<endl;
            system("cls");
            if(b=="1"){
            cout<<"[1] Gunakan 22/7"<<endl;
            cout<<"[2] Gunakan 3,14"<<endl;
            cout<<"================"<<endl;
            cout<<"Pilih phi : ";cin>>pi;
            cout<<"================"<<endl;
            system("cls");
            if(pi==1){
            cout<<"Lingkaran"<<endl;
            cout<<"======================================"<<endl;
            cout<<"[1] Menghitung Keliling Lingkaran"<<endl;
            cout<<"[2] Menghitung Luas Lingkaran"<<endl;
            cout<<"[3] Mencari Jari-jari dari Keliling"<<endl;
            cout<<"[4] Mencari Diameter dari Keliling"<<endl;
            cout<<"[5] Mencari Jari-jari dari Luas"<<endl;
            cout<<"[6] Mencari Diameter dari Keliling"<<endl;
            cout<<"======================================"<<endl;
            cout<<"Pilih operasi = ";cin>>d;
            cout<<"======================================"<<endl;
            system("cls");
                if(d=="1"){
            		cout<<"[1] Jari-Jari"<<endl;
	            	cout<<"[2] Diameter"<<endl;
	            	cout<<"================================"<<endl;
	            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
	            	system("cls");
	          	if(j=="1"){
	          		cout<<"Silahkan masukan jari-jari : ";cin>>jari;
                	cout<<"==================================="<<endl;
        			cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Keliling lingkaran adalah  : "<<2*22*jari/7<<endl;
                    cout<<"==================================="<<endl;
				  }
				else{
				  	cout<<"Silahkan masukan diameter  : ";cin>>diameter;
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Keliling lingkaran adalah  : "<<22*diameter/7<<endl;
                    cout<<"==================================="<<endl;
				  }
                }
                if(d=="2"){
                	cout<<"[1] Jari-Jari"<<endl;
	            	cout<<"[2] Diameter"<<endl;
	            	cout<<"================================"<<endl;
	            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
	            	system("cls");
	            if(j=="1"){
	            	cout<<"Silahkan masukan jari-jari : ";cin>>jari;
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Luas lingkaran adalah      : "<<22*jari*jari/7<<endl;
                    cout<<"==================================="<<endl;
				}
				else{
					cout<<"Silahkan masukan Diameter  : ";cin>>diameter;
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Luas lingkaran adalah      : "<<22*(diameter/2)*(diameter/2)/7<<endl;
                    cout<<"==================================="<<endl;
				}    
                }
                if(d=="3"){
                    cout<<"Silahkan masukan Keliling  : ";cin>>keliling;
                    jari=keliling*7/(22*2);
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Jari-jari lingkaran adalah : "<<jari<<endl;
                    cout<<"==================================="<<endl;
                }
                if(d=="4"){
                    cout<<"Silahkan masukan keliling  : ";cin>>keliling;
                    diameter=(keliling*7/(22*2))*2;
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Diameter lingkaran adalah  : "<<diameter<<endl;
                    cout<<"==================================="<<endl;
                }
                if(d=="5"){
                    cout<<"Silahkan masukan luas      : ";cin>>luas;
                    jl=sqrt((luas*7)/22);
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"jari-jari lingkaran adalah : "<<jl<<endl;
                    cout<<"Bulatkan bilangan bila (,) lebih dari 5"<<endl;
                    cout<<"==================================="<<endl;
                }
                if(d=="6"){
                    cout<<"Silahkan masukan luas      : ";cin>>luas;
                    dl=2*(sqrt((luas*7)/22));
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Diameter lingkaran adalah  : "<<dl<<endl;
                    cout<<"Bulatkan bilangan bila (,) lebih dari 5"<<endl;
                    cout<<"==================================="<<endl;
                }
                if(diameter>1){
        		initgraph(&gd,&gm, (char*)"");
				circle(200,200,diameter);
				getch();
				closegraph();
				return 0;
				}
				else{
				}
        		if(jari>1){
        		initgraph(&gd,&gm, (char*)"");
				circle(200,200,jari*2);
				getch();
				closegraph();
				return 0;
				}
				else{
				}
				if(jl>1){
        		initgraph(&gd,&gm, (char*)"");
				circle(200,200,jl*2);
				getch();
				closegraph();
				return 0;
				}
				else{
				}
				if(dl>1){
        		initgraph(&gd,&gm, (char*)"");
				circle(200,200,dl);
				getch();
				closegraph();
				return 0;
				}
				else{
				}
            }
            if(pi==2){
            cout<<"Lingkaran"<<endl;
            cout<<"======================================"<<endl;
            cout<<"[1] Menghitung Keliling Lingkaran"<<endl;
            cout<<"[2] Menghitung Luas Lingkaran"<<endl;
            cout<<"[3] Mencari Jari-jari dari Keliling"<<endl;
            cout<<"[4] Mencari Diameter dari Keliling"<<endl;
            cout<<"[5] Mencari Jari-jari dari Luas"<<endl;
            cout<<"[6] Mencari Diameter dari Keliling"<<endl;
            cout<<"======================================"<<endl;
            cout<<"Pilih operasi = ";cin>>d;
            cout<<"======================================"<<endl;
            system("cls");
                if(d=="1"){
                	cout<<"[1] Jari-Jari"<<endl;
	            	cout<<"[2] Diameter"<<endl;
	            	cout<<"================================"<<endl;
	            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
	            	system("cls");
	            if(j=="1"){
	            	cout<<"Silahkan masukan jari-jari : ";cin>>jari;
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 3,14"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Keliling lingkaran adalah  : "<<2*phi*jari<<endl;
                    cout<<"==================================="<<endl;
				}
				else{
					cout<<"Silahkan masukan diameter  : ";cin>>diameter;
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 3,14"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Keliling lingkaran adalah  : "<<phi*diameter<<endl;
                    cout<<"==================================="<<endl;
				}
                }
                if(d=="2"){
                	cout<<"[1] Jari-Jari"<<endl;
	            	cout<<"[2] Diameter"<<endl;
	            	cout<<"================================"<<endl;
	            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
	            	system("cls");
	            if(j=="1"){
	            	 cout<<"Silahkan masukan jari-jari : ";cin>>jari;
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 3,14"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Luas lingkaran adalah      : "<<phi*jari*jari<<endl;
                    cout<<"==================================="<<endl;
				}
				else{
					cout<<"Silahkan masukan Diameter  : ";cin>>diameter;
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 3,14"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Luas lingkaran adalah      : "<<phi*(diameter/2)*(diameter/2)<<endl;	
                    cout<<"==================================="<<endl;
				}
                }
                if(d=="3"){
                    cout<<"Silahkan masukan Keliling  : ";cin>>keliling;
                    jari=keliling/(2*phi);
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 3,14"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Jari-jari lingkaran adalah : "<<jari<<endl;
                    cout<<"==================================="<<endl;
                }
                if(d=="4"){
                    cout<<"Silahkan masukan keliling  : ";cin>>keliling;
                    diameter=keliling/phi;
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 3,14"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Diameter lingkaran adalah  : "<<diameter<<endl;
                    cout<<"==================================="<<endl;
                }
               if(d=="5"){
                    cout<<"Silahkan masukan luas      : ";cin>>luas;
                    jl=sqrt(luas/phi);
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 3,14"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"jari-jari lingkaran adalah : "<<jl<<endl;
                    cout<<"Bulatkan bilangan bila (,) lebih dari 5"<<endl;
                    cout<<"==================================="<<endl;
                }
                if(d=="6"){
                    cout<<"Silahkan masukan luas      : ";cin>>luas;
                    dl=2*(sqrt(luas/phi));
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 3,14"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Diameter lingkaran adalah  : "<<dl<<endl;
                    cout<<"Bulatkan bilangan bila (,) lebih dari 5"<<endl;
                    cout<<"==================================="<<endl;
                }
                 if(diameter>1){
        		initgraph(&gd,&gm, (char*)"");
				circle(200,200,diameter);
				getch();
				closegraph();
				return 0;
				}
				else{
				}
       			if(jari>1){
       		 	initgraph(&gd,&gm, (char*)"");
				circle(200,200,jari*2);
				getch();
				closegraph();
				return 0;
				}
				else{
				}
				if(jl>1){
        		initgraph(&gd,&gm, (char*)"");
				circle(200,200,jl*2);
				getch();
				closegraph();
				return 0;
				}
				else{
				}
				if(dl>1){
        		initgraph(&gd,&gm, (char*)"");
				circle(200,200,dl);
				getch();
				closegraph();
				return 0;
				}
				else{
				}
            }
            }
            //Setengah Lingkaran
        if(b=="2"){
            cout<<"[1] Gunakan 22/7"<<endl;
            cout<<"[2] Gunakan 3,14"<<endl;
            cout<<"================"<<endl;
            cout<<"Pilih phi : ";cin>>pi;
            cout<<"================"<<endl;
            system("cls");
            if(pi==1){
            cout<<"Setengah Lingkaran"<<endl;
            cout<<"=========================================="<<endl;
        	cout<<"[1] Menghitung Keliling Setengah Lingkaran"<<endl;
            cout<<"[2] Menghitung Luas Setengah Lingkaran"<<endl;
            cout<<"[3] Mencari Jari-jari dari Keliling"<<endl;
            cout<<"[4] Mencari Diameter dari Keliling"<<endl;
            cout<<"[5] Mencari Jari-jari dari Luas"<<endl;
            cout<<"[6] Mencari Diameter dari Keliling"<<endl;
            cout<<"=========================================="<<endl;
            cout<<"Pilih operasi = ";cin>>d;
            cout<<"=========================================="<<endl;
            system("cls");
                if(d=="1"){
                	cout<<"[1] Jari-Jari"<<endl;
	            	cout<<"[2] Diameter"<<endl;
	            	cout<<"================================"<<endl;
	            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
	            	system("cls");
	            if(j=="1"){
	            	cout<<"Silahkan masukan jari-jari : ";cin>>jari;
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Keliling Semi lingkaran adalah  : "<<(2*22*jari/7)/2<<endl;
                    cout<<"==================================="<<endl;
				}
				else{
					cout<<"Silahkan masukan diameter  : ";cin>>diameter;
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Keliling Semi lingkaran adalah  : "<<(22*diameter/7)/2<<endl;
                    cout<<"==================================="<<endl;
				}
                }
                if(d=="2"){
                	cout<<"[1] Jari-Jari"<<endl;
	            	cout<<"[2] Diameter"<<endl;
	            	cout<<"================================"<<endl;
	            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
	            	system("cls");
	            if(j=="2"){
	            	cout<<"Silahkan masukan jari-jari : ";cin>>jari;
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Luas Semi lingkaran adalah      : "<<(22*jari*jari/7)/2<<endl;
                    cout<<"==================================="<<endl;
				}
				else{
					cout<<"Silahkan masukan Diameter  : ";cin>>diameter;
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Luas Semi lingkaran adalah      : "<<(22*(diameter/2)*(diameter/2)/7)/2<<endl;
                    cout<<"==================================="<<endl;
				}
                }
                if(d=="3"){
                    cout<<"Silahkan masukan Keliling  : ";cin>>keliling;
                    jari=(keliling*7/(22*2))*2;
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Jari-jari Semi lingkaran adalah : "<<jari<<endl;
                    cout<<"==================================="<<endl;
                }
                if(d=="4"){
                    cout<<"Silahkan masukan keliling  : ";cin>>keliling;
                    diameter=((keliling*7/(22*2))*2)*2;
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Diameter Semi lingkaran adalah  : "<<diameter<<endl;
                    cout<<"==================================="<<endl;
                }
                if(d=="5"){
                    cout<<"Silahkan masukan luas      : ";cin>>luas;
                    jl=(sqrt((luas*7*2)/22));
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"jari-jari Semi lingkaran adalah : "<<jl<<endl;
                    cout<<"Bulatkan bilangan bila (,) lebih dari 5"<<endl;
                    cout<<"==================================="<<endl;
                }
                if(d=="6"){
                    cout<<"Silahkan masukan luas      : ";cin>>luas;
                    dl=2*(sqrt((luas*7*2)/22));
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Diameter Semi lingkaran adalah  : "<<dl<<endl;
                    cout<<"Bulatkan bilangan bila (,) lebih dari 5"<<endl;
                    cout<<"==================================="<<endl;
                }
                 if(diameter>1){
        		initgraph(&gd,&gm, (char*)"");
				circle(642,250,diameter);
				getch();
				closegraph();
				return 0;
				}
				else{
				}
       			 if(jari>1){
       		 	initgraph(&gd,&gm, (char*)"");
				circle(642,250,jari*2);
				getch();
				closegraph();
				return 0;
				}
				else{
				}
				if(jl>1){
        		initgraph(&gd,&gm, (char*)"");
				circle(642,250,jl*2);
				getch();
				closegraph();
				return 0;
				}
				else{
				}
				if(dl>1){
        		initgraph(&gd,&gm, (char*)"");
				circle(642,250,dl);
				getch();
				closegraph();
				return 0;
				}
				else{
				}
            }
           if(pi==2){
           	cout<<"Setengah Lingkaran"<<endl;
            cout<<"=========================================="<<endl;
        	cout<<"[1] Menghitung Keliling Setengah Lingkaran"<<endl;
            cout<<"[2] Menghitung Luas Setengah Lingkaran"<<endl;
            cout<<"[3] Mencari Jari-jari dari Keliling"<<endl;
            cout<<"[4] Mencari Diameter dari Keliling"<<endl;
            cout<<"[5] Mencari Jari-jari dari Luas"<<endl;
            cout<<"[6] Mencari Diameter dari Keliling"<<endl;
            cout<<"=========================================="<<endl;
            cout<<"Pilih operasi = ";cin>>d;
            cout<<"=========================================="<<endl;
            system("cls");
                if(d=="1"){
                	cout<<"[1] Jari-Jari"<<endl;
	            	cout<<"[2] Diameter"<<endl;
	            	cout<<"================================"<<endl;
	            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
	            	system("cls");
	            if(j=="1"){
	            	cout<<"Silahkan masukan jari-jari : ";cin>>jari;
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 3,14"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Keliling Semi lingkaran adalah  : "<<(2*phi*jari)/2<<endl;
                    cout<<"==================================="<<endl;
				}
				else{
					cout<<"Silahkan masukan diameter  : ";cin>>diameter;
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 3,14"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Keliling Semi lingkaran adalah  : "<<(phi*diameter)/2<<endl;
                    cout<<"==================================="<<endl;
				}
                }
                if(d=="2"){
                	cout<<"[1] Jari-Jari"<<endl;
	            	cout<<"[2] Diameter"<<endl;
	            	cout<<"================================"<<endl;
	            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
	            	system("cls");
	            if(j=="1"){
	            	cout<<"Silahkan masukan jari-jari : ";cin>>jari;
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 3,14"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Luas Semi lingkaran adalah      : "<<(phi*jari*jari)/2<<endl;
                    cout<<"==================================="<<endl;
				}
				else{
					cout<<"Silahkan masukan Diameter  : ";cin>>diameter;
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 3,14"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Luas Semi lingkaran adalah      : "<<(phi*(diameter/2)*(diameter/2))/2<<endl;
                    cout<<"==================================="<<endl;
				}
                }
                if(d=="3"){
                    cout<<"Silahkan masukan Keliling  : ";cin>>keliling;
                    jari=keliling/phi;
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 3,14"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Jari-jari Semi Lingkaran adalah : "<<jari<<endl;
                    cout<<"==================================="<<endl;
                }
                if(d=="4"){
                    cout<<"Silahkan masukan keliling  : ";cin>>keliling;
                    diameter=(keliling*2/phi);
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 3,14"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Diameter Semi lingkaran adalah  : "<<diameter<<endl;
                    cout<<"==================================="<<endl;
                }
               if(d=="5"){
                    cout<<"Silahkan masukan luas      : ";cin>>luas;
                    jl=sqrt((luas*2*phi));
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 3,14"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"jari-jari Semi lingkaran adalah : "<<jl<<endl;
                    cout<<"Bulatkan bilangan bila (,) lebih dari 5"<<endl;
                    cout<<"==================================="<<endl;
                }
                if(d=="6"){
                    cout<<"Silahkan masukan Luas      : ";cin>>luas;
                    dl=2*(sqrt((luas*2*phi)));
                    cout<<"==================================="<<endl;
            		cout<<"JIka Phi yang digunakan adalah 3,14"<<endl;
            		cout<<"Maka ";
            		for (int i = 0; i < 3; i++ )
				    cout<<sleep(1)<<" ";
				    cout<<endl;
				    cout<<"==================================="<<endl;
                    cout<<"Diameter semi lingkaran adalah  : "<<dl<<endl;
                    cout<<"Bulatkan bilangan bila (,) lebih dari 5"<<endl;
                    cout<<"==================================="<<endl;
                }
                 if(diameter>1){
        		initgraph(&gd,&gm, (char*)"");
				circle(642,250,diameter);
				getch();
				closegraph();
				return 0;
				}
				else{
				}
       			 if(jari>1){
       		 	initgraph(&gd,&gm, (char*)"");
				circle(642,250,jari*2);
				getch();
				closegraph();
				return 0;
				}
				else{
				}
				if(jl>1){
        		initgraph(&gd,&gm, (char*)"");
				circle(642,250,jl*2);
				getch();
				closegraph();
				return 0;
				}
				else{
				}
				if(dl>1){
        		initgraph(&gd,&gm, (char*)"");
				circle(642,250,dl);
				getch();
				closegraph();
				return 0;
				}
				else{
				}
            }
        	
        }
        }
        //Tabung
        if(a=="2"){
	            cout<<"[1] Gunakan 22/7"<<endl;
	            cout<<"[2] Gunakan 3,14"<<endl;
	            cout<<"================"<<endl;
	            cout<<"Pilih phi : ";cin>>pi;
	            cout<<"================"<<endl;
	            system("cls");
	            if(pi==1){
	            	cout<<"Tabung"<<endl;
	            	cout<<"======================================"<<endl;
		            cout<<"[1] Menghitung Luas Tabung"<<endl;
		            cout<<"[2] Menghitung Volume Tabung"<<endl;
		            cout<<"[3] Mencari Jari-jari dari Luas Tabung"<<endl;
		            cout<<"[4] Mencari Diameter dari Luas Tabung"<<endl;
		            cout<<"[5] Mencari Jari-jari dari Volume Tabung"<<endl;
		            cout<<"[6] Mencari Diameter dari Volume Tabung"<<endl;
		            cout<<"[7] Mencari Tinggi dari Luas Tabung"<<endl;
		        	cout<<"[8] Mencari Tinggi dari Volume Tabung"<<endl;
		            cout<<"======================================"<<endl;
		            cout<<"Pilih operasi = ";cin>>d;
		            cout<<"======================================"<<endl;
		            system("cls");	
		            if(d=="1"){
		            	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan jari-jari Tabung : ";cin>>jari;
		            		cout<<"Maasukan Tinggi Tabung   : ";cin>>t;
		            		cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Luas Tabung adalah       : "<<(2*22*jari*(jari+t))/7<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Diameter Tabung  : ";cin>>diameter;
		            		cout<<"Maasukan Tinggi Tabung   : ";cin>>t;
	            			cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Luas Tabung adalah       : "<<(2*22*(diameter/2)*((diameter/2)+t))/7<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
					if(d=="2"){
		            	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan jari-jari Tabung : ";cin>>jari;
		            		cout<<"Masukan Tinggi Tabung    : ";cin>>t;
		            		cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Volume Tabung adalah     : "<<22*jari*jari*t/7<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Diameter Tabung  : ";cin>>diameter;
		            		cout<<"Masukan Tinggi Tabung    : ";cin>>t;
		            		cout<<"==================================="<<endl;
			            	cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Volume Tabung adalah     : "<<22*(diameter/2)*(diameter/2)*t/7<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
					if(d=="3"){
		            	cout<<"Masukan Luas Tabung      : ";cin>>luas;
	            		cout<<"Masukan Tinggi Tabung    : ";cin>>t;
	            		l2=luas*7/44;
						di=pow(t, 2)-4*1*(-l2);
						
						if(di>=0){
							jari = (-t + sqrt(di)) / (2 * 1);
					        jari2 = (-t - sqrt(di)) / (2 * 1);
						}
						if (jari >= 0) {
								cout<<"==================================="<<endl;
			            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
			            		cout<<"Maka ";
			            		for (int i = 0; i < 3; i++ )
							    cout<<sleep(1)<<" ";
							    cout<<endl;
							    cout<<"==================================="<<endl;
					           	cout<<"Jari-jari Tabung adalah  : " << jari << endl;
					           	cout<<"==================================="<<endl;
					        }
					
					    if (jari2 >= 0) {
					    		cout<<"==================================="<<endl;
			            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
			            		cout<<"Maka ";
			            		for (int i = 0; i < 3; i++ )
							    cout<<sleep(1)<<" ";
							    cout<<endl;
							    cout<<"==================================="<<endl;
					           	cout<<"Jari-jari Tabung adalah  : " << jari << endl;
					           	cout<<"==================================="<<endl;
					        }
					}
					if(d=="4"){
		           		cout<<"Masukan Luas Tabung      : ";cin>>luas;
	            		cout<<"Masukan Tinggi Tabung    : ";cin>>t;
	            		l2=luas*7/44;
						di=pow(t, 2)-4*1*(-l2);
						
						if(di>=0){
							jari = (-t + sqrt(di)) / (2 * 1);
					        jari2 = (-t - sqrt(di)) / (2 * 1);
						}
						if (jari >= 0) {
								cout<<"==================================="<<endl;
			            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
			            		cout<<"Maka ";
			            		for (int i = 0; i < 3; i++ )
							    cout<<sleep(1)<<" ";
							    cout<<endl;
							    cout<<"==================================="<<endl;
					           	cout<<"Diameter Tabung adalah   : " << jari*2 << endl;
					           	cout<<"==================================="<<endl;
					        }
					
					    if (jari2 >= 0) {
					    		cout<<"==================================="<<endl;
			            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
			            		cout<<"Maka ";
			            		for (int i = 0; i < 3; i++ )
							    cout<<sleep(1)<<" ";
							    cout<<endl;
							    cout<<"==================================="<<endl;
					           	cout<<"Diameter Tabung adalah   : " << jari2*2 << endl;
					           	cout<<"==================================="<<endl;
					        }
					}
					if(d=="5"){
		            	cout<<"Masukan Volume Tabung    : ";cin>>v;
	            		cout<<"Masukan Tinggi Tabung    : ";cin>>t;
	            		cout<<"==================================="<<endl;
	            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
	            		cout<<"Maka ";
	            		for (int i = 0; i < 3; i++ )
					    cout<<sleep(1)<<" ";
					    cout<<endl;
					    cout<<"==================================="<<endl;
	            		cout<<"Jari-jari Tabung adalah   : "<<sqrt(v*7/(22*t))<<endl;
	            		cout<<"==================================="<<endl;
					}
					if(d=="6"){
		            	cout<<"Masukan Volume Tabung    : ";cin>>v;
	            		cout<<"Masukan Tinggi Tabung    : ";cin>>t;
	            		cout<<"==================================="<<endl;
	            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
	            		cout<<"Maka ";
	            		for (int i = 0; i < 3; i++ )
					    cout<<sleep(1)<<" ";
					    cout<<endl;
					    cout<<"==================================="<<endl;
	            		cout<<"Diameter Tabung adalah   : "<<(sqrt(v*7/(22*t)))*2<<endl;
	            		cout<<"==================================="<<endl;
					}
					if(d=="7"){
		           	 	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan Luas Tabung       : ";cin>>luas;
		            		cout<<"Masukan jari-jari Tabung  : ";cin>>jari;
		            		t=(luas-((2*22*(jari/7))*jari))/(2*22*(jari/7));
		            		cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Tinggi Tabung adalah      : "<<t<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Luas Tabung       : ";cin>>luas;
		            		cout<<"Masukan Diameter Tabung   : ";cin>>diameter;
		            		t=(luas-((2*22*((diameter/2)/7))*(diameter/2)))/(2*22*((diameter/2)/7));
		            		cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Tinggi Tabung adalah      : "<<t<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
					if(d=="8"){
		            	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan Volume Tabung     : ";cin>>v;
		            		cout<<"Masukan jari-jari Tabung  : ";cin>>jari;
		            		t=v*7/(22*jari*jari);
		            		cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Tinggi Tabung adalah      : "<<t<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Volume Tabung     : ";cin>>v;
		            		cout<<"Masukan Diameter Tabung   : ";cin>>diameter;
		            		t=v*7/(22*(diameter/2)*(diameter/2));
		            		cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Tinggi Tabung adalah      : "<<t<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
				}
				if(pi==2){
					cout<<"Tabung"<<endl;
	            	cout<<"======================================"<<endl;
		            cout<<"[1] Menghitung Luas Tabung"<<endl;
		            cout<<"[2] Menghitung Volume Tabung"<<endl;
		            cout<<"[3] Mencari Jari-jari dari Luas Tabung"<<endl;
		            cout<<"[4] Mencari Diameter dari Luas Tabung"<<endl;
		            cout<<"[5] Mencari Jari-jari dari Volume Tabung"<<endl;
		            cout<<"[6] Mencari Diameter dari Volume Tabung"<<endl;
		            cout<<"[7] Mencari Tinggi dari Luas Tabung"<<endl;
		        	cout<<"[8] Mencari Tinggi dari Volume Tabung"<<endl;
		            cout<<"======================================"<<endl;
		            cout<<"Pilih operasi = ";cin>>d;
		            cout<<"======================================"<<endl;
		            system("cls");	
		            if(d=="1"){
		            	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan jari-jari Tabung : ";cin>>jari;
		            		cout<<"Masukan Tinggi Tabung    : ";cin>>t;
		            		cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Luas Tabung adalah       : "<<2*phi*jari*(jari+t)<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Diameter Tabung  : ";cin>>diameter;
		            		cout<<"Masukan Tinggi Tabung    : ";cin>>t;
	            			cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Luas Tabung adalah       : "<<2*phi*(diameter/2)*((diameter/2)+t)<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
					if(d=="2"){
		            	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan jari-jari Tabung : ";cin>>jari;
		            		cout<<"Masukan Tinggi Tabung    : ";cin>>t;
		            		cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Volume Tabung adalah     : "<<phi*jari*jari*t<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Diameter Tabung  : ";cin>>diameter;
		            		cout<<"Masukan Tinggi Tabung    : ";cin>>t;
		            		cout<<"==================================="<<endl;
			            	cout<<"JIka Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Volume Tabung adalah     : "<<phi*(diameter/2)*(diameter/2)*t<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
					if(d=="3"){
		            	cout<<"Masukan Luas Tabung      : ";cin>>luas;
	            		cout<<"Masukan Tinggi Tabung    : ";cin>>t;
	            		l2=luas/(phi*2);
						di=pow(t, 2)-4*1*(-l2);
						
						if(di>=0){
							jari = (-t + sqrt(di)) / (2 * 1);
					        jari2 = (-t - sqrt(di)) / (2 * 1);
						}
						if (jari >= 0) {
								cout<<"==================================="<<endl;
			            		cout<<"JIka Phi yang digunakan adalah 3.14"<<endl;
			            		cout<<"Maka ";
			            		for (int i = 0; i < 3; i++ )
							    cout<<sleep(1)<<" ";
							    cout<<endl;
							    cout<<"==================================="<<endl;
					           	cout<<"Jari-jari Tabung adalah  : " << jari << endl;
					           	cout<<"==================================="<<endl;
					        }
					
					    if (jari2 >= 0) {
					    		cout<<"==================================="<<endl;
			            		cout<<"JIka Phi yang digunakan adalah 3.14"<<endl;
			            		cout<<"Maka ";
			            		for (int i = 0; i < 3; i++ )
							    cout<<sleep(1)<<" ";
							    cout<<endl;
							    cout<<"==================================="<<endl;
					           	cout<<"Jari-jari Tabung adalah  : " << jari << endl;
					           	cout<<"==================================="<<endl;
					        }
					}
					if(d=="4"){
		           		cout<<"Masukan Luas Tabung      : ";cin>>luas;
	            		cout<<"Masukan Tinggi Tabung    : ";cin>>t;
	            		l2=luas/(phi*2);
						di=pow(t, 2)-4*1*(-l2);
						
						if(di>=0){
							jari = (-t + sqrt(di)) / (2 * 1);
					        jari2 = (-t - sqrt(di)) / (2 * 1);
						}
						if (jari >= 0) {
								cout<<"==================================="<<endl;
			            		cout<<"JIka Phi yang digunakan adalah 3.14"<<endl;
			            		cout<<"Maka ";
			            		for (int i = 0; i < 3; i++ )
							    cout<<sleep(1)<<" ";
							    cout<<endl;
							    cout<<"==================================="<<endl;
					           	cout<<"Diameter Tabung adalah   : " << jari*2 << endl;
					           	cout<<"==================================="<<endl;
					        }
					
					    if (jari2 >= 0) {
					    		cout<<"==================================="<<endl;
			            		cout<<"JIka Phi yang digunakan adalah 3.14"<<endl;
			            		cout<<"Maka ";
			            		for (int i = 0; i < 3; i++ )
							    cout<<sleep(1)<<" ";
							    cout<<endl;
							    cout<<"==================================="<<endl;
					           	cout<<"Diameter Tabung adalah   : " << jari2*2 << endl;
					           	cout<<"==================================="<<endl;
					        }
					}
					if(d=="5"){
		            	cout<<"Masukan Volume Tabung    : ";cin>>v;
	            		cout<<"Masukan Tinggi Tabung    : ";cin>>t;
	            		cout<<"==================================="<<endl;
	            		cout<<"JIka Phi yang digunakan adalah 3.14"<<endl;
	            		cout<<"Maka ";
	            		for (int i = 0; i < 3; i++ )
					    cout<<sleep(1)<<" ";
					    cout<<endl;
					    cout<<"==================================="<<endl;
	            		cout<<"Jari-jari Tabung adalah   : "<<sqrt(v/(phi*t))<<endl;
	            		cout<<"==================================="<<endl;
					}
					if(d=="6"){
		            	cout<<"Masukan Volume Tabung    : ";cin>>v;
	            		cout<<"Masukan Tinggi Tabung    : ";cin>>t;
	            		cout<<"==================================="<<endl;
	            		cout<<"JIka Phi yang digunakan adalah 3.14"<<endl;
	            		cout<<"Maka ";
	            		for (int i = 0; i < 3; i++ )
					    cout<<sleep(1)<<" ";
					    cout<<endl;
					    cout<<"==================================="<<endl;
	            		cout<<"Diameter Tabung adalah   : "<<(sqrt(v/(phi*t)))*2<<endl;
	            		cout<<"==================================="<<endl;
					}
					if(d=="7"){
		           	 	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan Luas Tabung       : ";cin>>luas;
		            		cout<<"Masukan jari-jari Tabung  : ";cin>>jari;
		            		t=(luas-((2*phi*jari)*jari))/(2*phi*jari);
		            		cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Tinggi Tabung adalah      : "<<t<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Luas Tabung       : ";cin>>luas;
		            		cout<<"Masukan Diameter Tabung   : ";cin>>diameter;
		            		t=(luas-((2*phi*(diameter/2))*(diameter/2)))/(2*phi*(diameter/2));
		            		cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Tinggi Tabung adalah      : "<<t<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
					if(d=="8"){
		            	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan Volume Tabung     : ";cin>>v;
		            		cout<<"Masukan jari-jari Tabung  : ";cin>>jari;
		            		t=v/(phi*jari*jari);
		            		cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Tinggi Tabung adalah      : "<<t<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Volume Tabung     : ";cin>>v;
		            		cout<<"Masukan Diameter Tabung   : ";cin>>diameter;
		            		t=v/(phi*(diameter/2)*(diameter/2));
		            		cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Tinggi Tabung adalah      : "<<t<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
				}
			}
			//Kerucut
			if(a=="3"){
	            cout<<"[1] Gunakan 22/7"<<endl;
	            cout<<"[2] Gunakan 3,14"<<endl;
	            cout<<"================"<<endl;
	            cout<<"Pilih phi : ";cin>>pi;
	            cout<<"================"<<endl;
	            system("cls");
	            if(pi==1){
					cout<<"Kerucut"<<endl;
	            	cout<<"================================================"<<endl;
		            cout<<"[1] Menghitung Luas Kerucut"<<endl;
		            cout<<"[2] Menghitung Volume Kerucut"<<endl;
		            cout<<"[3] Mencari Garis Pelukis Kerucut"<<endl;
		            cout<<"[4] Mencari Garis Pelukis dari Luas Kerucut"<<endl;
		            cout<<"[5] Mencari Jari-jari dari Luas Kerucut"<<endl;
		            cout<<"[6] Mencari Diameter dari Luas Kerucut"<<endl;
		            cout<<"[7] Mencari Jari-jari dari Volume Kerucut"<<endl;
		            cout<<"[8] Mencari Diameter dari Volume kerucut"<<endl;
		        	cout<<"[9] Mencari Tinggi dari Volume Kerucut"<<endl;
		        	cout<<"[10] Mencari Tinggi jika Garis pelukis diketahui"<<endl;
		            cout<<"================================================"<<endl;
		            cout<<"Pilih operasi = ";cin>>d;
		            cout<<"================================================"<<endl;
		            system("cls");	
		            if(d=="1"){
		            	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan jari-jari Kerucut     : ";cin>>jari;
		            		cout<<"Masukan Garis pelukis Kerucut : ";cin>>pelukis;
		            		cout<<"==================================="<<endl;
		            		cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Luas Kerucut adalah           : "<<(22*jari*(jari+pelukis))/7<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Diameter Kerucut      : ";cin>>diameter;
		            		cout<<"Masukan Garis pelukis Kerucut : ";cin>>pelukis;
	            			cout<<"==================================="<<endl;
		            		cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Luas Kerucut adalah           : "<<(22*(diameter/2)*((diameter/2)+pelukis))/7<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
					if(d=="2"){
		            	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan jari-jari Kerucut : ";cin>>jari;
		            		cout<<"Masukan Tinggi Kerucut    : ";cin>>t;
		            		cout<<"==================================="<<endl;
		            		cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Volume Kerucut adalah     : "<<22*jari*jari*t/7/3<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Diameter Kerucut  : ";cin>>diameter;
		            		cout<<"Masukan Tinggi Kerucut    : ";cin>>t;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Volume Kerucut adalah     : "<<22*(diameter/2)*(diameter/2)*t/7/3<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
					if(d=="3"){
						cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan Jari-jari Kerucut    : ";cin>>jari;
		            		cout<<"Masukan Tinggi Kerucut       : ";cin>>t;
		            		cout<<"============================================"<<endl;
		            		cout<<"Jika jari-jari "<<jari<<" dan tinggi Kerucut adalah "<<t<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"============================================"<<endl;
						    cout<<"Garis pelukis Kerucut adalah : "<<sqrt((jari*jari)+(t*t))<<endl;
						    cout<<"============================================"<<endl;
						}
						else{
		            		cout<<"Masukan Diameter Kerucut     : ";cin>>diameter;
		            		cout<<"Masukan Tinggi Kerucut       : ";cin>>t;
		            		cout<<"==========================================="<<endl;
		            		cout<<"Jika Diameter "<<diameter<<" dan tinggi Kerucut adalah "<<t<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==========================================="<<endl;
						    cout<<"Garis pelukis Kerucut adalah : "<<sqrt(((diameter/2)*(diameter/2))+(t*t))<<endl;	
						    cout<<"==========================================="<<endl;
					}	
					}
					if(d=="4"){
						cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan Luas Kerucut          : ";cin>>luas;
		            		cout<<"Masukan jari-jari Kerucut     : ";cin>>jari;
		            		pelukis=(luas/22*(jari/7))-jari;
		            		cout<<"============================================"<<endl;
		            		cout<<"Jika Luas "<<luas<<" dan Jari-jari Kerucut adalah "<<jari<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"============================================"<<endl;
						    cout<<"Garis pelukis Kerucut adalah  : "<<pelukis<<endl;
						    cout<<"============================================"<<endl;
						}
						else{
							cout<<"Masukan Luas Kerucut          : ";cin>>luas;
		            		cout<<"Masukan diameter Kerucut      : ";cin>>diameter;
		            		pelukis=(luas/22*((diameter/2)/7))-(diameter/2);
		            		cout<<"============================================"<<endl;
		            		cout<<"Jika Luas "<<luas<<" dan diameter Kerucut adalah "<<diameter<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"============================================"<<endl;
						    cout<<"Garis pelukis Kerucut adalah  : "<<pelukis<<endl;
						    cout<<"============================================"<<endl;
						}
					}
					if(d=="5"){
		            	cout<<"Masukan Luas Kerucut          : ";cin>>luas;
	            		cout<<"Masukan Garis pelukis Kerucut : ";cin>>pelukis;
	            		l2=luas*7;
	            		pe=22*pelukis;
						di=pow(pe, 2)-4*22*(-l2);
						if(di>=0){
							jari = (-pe + sqrt(di)) / (2 * 22);
					        jari2 = (-pe - sqrt(di)) / (2 * 22);
						}
						if (jari >= 0) {
								cout<<"==================================="<<endl;
			            		cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
			            		cout<<"Maka ";
			            		for (int i = 0; i < 3; i++ )
							    cout<<sleep(1)<<" ";
							    cout<<endl;
							    cout<<"==================================="<<endl;
					           	cout<<"Jari-jari Kerucut adalah : " << jari << endl;
					           	cout<<"==================================="<<endl;
					        }
					
					    if (jari2 >= 0) {
					    		cout<<"==================================="<<endl;
			            		cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
			            		cout<<"Maka ";
			            		for (int i = 0; i < 3; i++ )
							    cout<<sleep(1)<<" ";
							    cout<<endl;
							    cout<<"==================================="<<endl;
					           	cout<<"Jari-jari Kerucut adalah : " << jari << endl;
					           	cout<<"==================================="<<endl;
					        }
					}
					if(d=="6"){
		           		cout<<"Masukan Luas Kerucut          : ";cin>>luas;
	            		cout<<"Masukan Garis pelukis Tabung  : ";cin>>pelukis;
	            		l2=luas*7;
	            		pe=22*pelukis;
						di=pow(pe, 2)-4*22*(-l2);
						if(di>=0){
							jari = (-pe + sqrt(di)) / (2 * 22);
					        jari2 = (-pe - sqrt(di)) / (2 * 22);
						}
						if (jari >= 0) {
								cout<<"==================================="<<endl;
			            		cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
			            		cout<<"Maka ";
			            		for (int i = 0; i < 3; i++ )
							    cout<<sleep(1)<<" ";
							    cout<<endl;
							    cout<<"==================================="<<endl;
					           	cout<<"Diameter Kerucut adalah  : " << jari*2 << endl;
					           	cout<<"==================================="<<endl;
					        }
					
					    if (jari2 >= 0) {
					    		cout<<"==================================="<<endl;
			            		cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
			            		cout<<"Maka ";
			            		for (int i = 0; i < 3; i++ )
							    cout<<sleep(1)<<" ";
							    cout<<endl;
							    cout<<"==================================="<<endl;
					           	cout<<"Diameter Kerucut adalah  : " << jari2*2 << endl;
					           	cout<<"==================================="<<endl;
					        }
					}
					if(d=="7"){
		            	cout<<"Masukan Volume Kerucut    : ";cin>>v;
	            		cout<<"Masukan Tinggi Kerucut    : ";cin>>t;
	            		cout<<"==================================="<<endl;
	            		cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
	            		cout<<"Maka ";
	            		for (int i = 0; i < 3; i++ )
					    cout<<sleep(1)<<" ";
					    cout<<endl;
					    cout<<"==================================="<<endl;
	            		cout<<"Jari-jari Kerucut adalah  : "<<sqrt(v*7*3/(22*t))<<endl;
	            		cout<<"==================================="<<endl;
					}
					if(d=="8"){
		            	cout<<"Masukan Volume Kerucut    : ";cin>>v;
	            		cout<<"Masukan Tinggi Kerucut    : ";cin>>t;
	            		cout<<"==================================="<<endl;
	            		cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
	            		cout<<"Maka ";
	            		for (int i = 0; i < 3; i++ )
					    cout<<sleep(1)<<" ";
					    cout<<endl;
					    cout<<"==================================="<<endl;
	            		cout<<"Diameter Kecurut adalah   : "<<(sqrt(v*7*3/(22*t)))*2<<endl;
	            		cout<<"==================================="<<endl;
					}
					if(d=="9"){
		           	 	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan Volume Kerucut      : ";cin>>v;
		            		cout<<"Masukan jari-jari Kerucut   : ";cin>>jari;
		            		t=v*7*3/(22*jari*jari);
		            		cout<<"==================================="<<endl;
		            		cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Tinggi Kerucut adalah       : "<<t<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Volume Kerucut      : ";cin>>v;
		            		cout<<"Masukan Diameter Kerucut    : ";cin>>diameter;
		            		t=v*7*3/(22*(diameter/2)*(diameter/2));
		            		cout<<"==================================="<<endl;
		            		cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Tinggi Kerucut adalah       : "<<t<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
					if(d=="10"){
		            	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan Garis pelukis Kerucut  : ";cin>>pelukis;
		            		cout<<"Masukan jari-jari Kerucut      : ";cin>>jari;
		            		t=sqrt((pelukis*pelukis)-(jari*jari));
		            		cout<<"============================================"<<endl;
		            		cout<<"Jika Garis pelukis "<<pelukis<<" dan Jari-jari Kerucut "<<jari<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==========================================="<<endl;
		            		cout<<"Tinggi Kerucut adalah          : "<<t<<endl;
		            		cout<<"==========================================="<<endl;
						}
						else{
							cout<<"Masukan Garis pelukis Kerucut  : ";cin>>pelukis;
		            		cout<<"Masukan jari-jari Kerucut      : ";cin>>diameter;
		            		jari=diameter/2;
		            		t=sqrt((pelukis*pelukis)-(jari*jari));
		            		cout<<"==========================================="<<endl;
		            		cout<<"Jika Garis pelukis "<<pelukis<<" dan Diameter Kerucut "<<diameter<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==========================================="<<endl;
		            		cout<<"Tinggi Kerucut adalah          : "<<t<<endl;
		            		cout<<"==========================================="<<endl;
						}
					}
				}
				if(pi==2){
	            	cout<<"Kerucut"<<endl;
	            	cout<<"================================================"<<endl;
		            cout<<"[1] Menghitung Luas Kerucut"<<endl;
		            cout<<"[2] Menghitung Volume Kerucut"<<endl;
		            cout<<"[3] Mencari Garis Pelukis Kerucut"<<endl;
		            cout<<"[4] Mencari Garis Pelukis dari Luas Kerucut"<<endl;
		            cout<<"[5] Mencari Jari-jari dari Luas Kerucut"<<endl;
		            cout<<"[6] Mencari Diameter dari Luas Kerucut"<<endl;
		            cout<<"[7] Mencari Jari-jari dari Volume Kerucut"<<endl;
		            cout<<"[8] Mencari Diameter dari Volume kerucut"<<endl;
		        	cout<<"[9] Mencari Tinggi dari Volume Kerucut"<<endl;
		        	cout<<"[10] Mencari Tinggi jika Garis pelukis diketahui"<<endl;
		            cout<<"================================================"<<endl;
		            cout<<"Pilih operasi = ";cin>>d;
		            cout<<"================================================"<<endl;
		            system("cls");	
		            if(d=="1"){
		            	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan jari-jari Kerucut     : ";cin>>jari;
		            		cout<<"Masukan Garis pelukis Kerucut : ";cin>>pelukis;
		            		cout<<"==================================="<<endl;
		            		cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Luas Kerucut adalah           : "<<phi*jari*(jari+pelukis)<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Diameter Kerucut      : ";cin>>diameter;
		            		cout<<"Masukan Garis pelukis Kerucut : ";cin>>pelukis;
	            			cout<<"==================================="<<endl;
		            		cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Luas Kerucut adalah           : "<<phi*(diameter/2)*((diameter/2)+pelukis)<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
					if(d=="2"){
		            	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan jari-jari Kerucut : ";cin>>jari;
		            		cout<<"Masukan Tinggi Kerucut    : ";cin>>t;
		            		cout<<"==================================="<<endl;
		            		cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Volume Kerucut adalah     : "<<phi*jari*jari*t/3<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Diameter Kerucut  : ";cin>>diameter;
		            		cout<<"Masukan Tinggi Kerucut    : ";cin>>t;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Volume Kerucut adalah     : "<<phi*(diameter/2)*(diameter/2)*t/3<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
					if(d=="3"){
						cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan Jari-jari Kerucut    : ";cin>>jari;
		            		cout<<"Masukan Tinggi Kerucut       : ";cin>>t;
		            		cout<<"============================================"<<endl;
		            		cout<<"Jika jari-jari "<<jari<<" dan tinggi Kerucut adalah "<<t<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"============================================"<<endl;
						    cout<<"Garis pelukis Kerucut adalah : "<<sqrt((jari*jari)+(t*t))<<endl;
						    cout<<"============================================"<<endl;
						}
						else{
		            		cout<<"Masukan Diameter Kerucut     : ";cin>>diameter;
		            		cout<<"Masukan Tinggi Kerucut       : ";cin>>t;
		            		cout<<"==========================================="<<endl;
		            		cout<<"Jika Diameter "<<diameter<<" dan tinggi Kerucut adalah "<<t<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==========================================="<<endl;
						    cout<<"Garis pelukis Kerucut adalah : "<<sqrt(((diameter/2)*(diameter/2))+(t*t))<<endl;	
						    cout<<"==========================================="<<endl;
					}	
					}
					if(d=="4"){
						cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan Luas Kerucut          : ";cin>>luas;
		            		cout<<"Masukan jari-jari Kerucut     : ";cin>>jari;
		            		pelukis=(luas/(phi*jari))-jari;
		            		cout<<"============================================"<<endl;
		            		cout<<"Jika Luas "<<luas<<" dan Jari-jari Kerucut adalah "<<jari<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"============================================"<<endl;
						    cout<<"Garis pelukis Kerucut adalah  : "<<pelukis<<endl;
						    cout<<"============================================"<<endl;
						}
						else{
							cout<<"Masukan Luas Kerucut          : ";cin>>luas;
		            		cout<<"Masukan diameter Kerucut      : ";cin>>diameter;
		            		pelukis=(luas/(phi*(diameter/2)))-(diameter/2);
		            		cout<<"============================================"<<endl;
		            		cout<<"Jika Luas "<<luas<<" dan diameter Kerucut adalah "<<diameter<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"============================================"<<endl;
						    cout<<"Garis pelukis Kerucut adalah  : "<<pelukis<<endl;
						    cout<<"============================================"<<endl;
						}
					}
					if(d=="5"){
		            	cout<<"Masukan Luas Kerucut          : ";cin>>luas;
	            		cout<<"Masukan Garis pelukis Kerucut : ";cin>>pelukis;
	            		pe=3.14*pelukis;
						di=pow(pe, 2)-4*phi*(-luas);
						if(di>=0){
							jari = (-pe + sqrt(di)) / (2 * phi);
					        jari2 = (-pe - sqrt(di)) / (2 * phi);
						}
						if (jari >= 0) {
								cout<<"==================================="<<endl;
			            		cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
			            		cout<<"Maka ";
			            		for (int i = 0; i < 3; i++ )
							    cout<<sleep(1)<<" ";
							    cout<<endl;
							    cout<<"==================================="<<endl;
					           	cout<<"Jari-jari Kerucut adalah : " << jari << endl;
					           	cout<<"==================================="<<endl;
					        }
					
					    if (jari2 >= 0) {
					    		cout<<"==================================="<<endl;
			            		cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
			            		cout<<"Maka ";
			            		for (int i = 0; i < 3; i++ )
							    cout<<sleep(1)<<" ";
							    cout<<endl;
							    cout<<"==================================="<<endl;
					           	cout<<"Jari-jari Kerucut adalah : " << jari << endl;
					           	cout<<"==================================="<<endl;
					        }
					}
					if(d=="6"){
		           		cout<<"Masukan Luas Kerucut          : ";cin>>luas;
	            		cout<<"Masukan Garis pelukis Tabung  : ";cin>>pelukis;
	            		pe=3.14*pelukis;
						di=pow(pe, 2)-4*phi*(-luas);
						if(di>=0){
							jari = (-pe + sqrt(di)) / (2 * phi);
					        jari2 = (-pe - sqrt(di)) / (2 * phi);
						}
						if (jari >= 0) {
								cout<<"==================================="<<endl;
			            		cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
			            		cout<<"Maka ";
			            		for (int i = 0; i < 3; i++ )
							    cout<<sleep(1)<<" ";
							    cout<<endl;
							    cout<<"==================================="<<endl;
					           	cout<<"Diameter Kerucut adalah  : " << jari*2 << endl;
					           	cout<<"==================================="<<endl;
					        }
					
					    if (jari2 >= 0) {
					    		cout<<"==================================="<<endl;
			            		cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
			            		cout<<"Maka ";
			            		for (int i = 0; i < 3; i++ )
							    cout<<sleep(1)<<" ";
							    cout<<endl;
							    cout<<"==================================="<<endl;
					           	cout<<"Diameter Kerucut adalah  : " << jari2*2 << endl;
					           	cout<<"==================================="<<endl;
					        }
					}
					if(d=="7"){
		            	cout<<"Masukan Volume Kerucut    : ";cin>>v;
	            		cout<<"Masukan Tinggi Kerucut    : ";cin>>t;
	            		cout<<"==================================="<<endl;
	            		cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
	            		cout<<"Maka ";
	            		for (int i = 0; i < 3; i++ )
					    cout<<sleep(1)<<" ";
					    cout<<endl;
					    cout<<"==================================="<<endl;
	            		cout<<"Jari-jari Kerucut adalah  : "<<sqrt(v*3/(phi*t))<<endl;
	            		cout<<"==================================="<<endl;
					}
					if(d=="8"){
		            	cout<<"Masukan Volume Kerucut    : ";cin>>v;
	            		cout<<"Masukan Tinggi Kerucut    : ";cin>>t;
	            		cout<<"==================================="<<endl;
	            		cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
	            		cout<<"Maka ";
	            		for (int i = 0; i < 3; i++ )
					    cout<<sleep(1)<<" ";
					    cout<<endl;
					    cout<<"==================================="<<endl;
	            		cout<<"Diameter Kecurut adalah   : "<<(sqrt(v*3/(phi*t)))*2<<endl;
	            		cout<<"==================================="<<endl;
					}
					if(d=="9"){
		           	 	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan Volume Kerucut      : ";cin>>v;
		            		cout<<"Masukan jari-jari Kerucut   : ";cin>>jari;
		            		t=v*3/(phi*jari*jari);
		            		cout<<"==================================="<<endl;
		            		cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Tinggi Kerucut adalah       : "<<t<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Volume Kerucut      : ";cin>>v;
		            		cout<<"Masukan Diameter Kerucut    : ";cin>>diameter;
		            		t=v*3/(phi*(diameter/2)*(diameter/2));
		            		cout<<"==================================="<<endl;
		            		cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Tinggi Kerucut adalah       : "<<t<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
					if(d=="10"){
		            	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan Garis pelukis Kerucut  : ";cin>>pelukis;
		            		cout<<"Masukan jari-jari Kerucut      : ";cin>>jari;
		            		t=sqrt((pelukis*pelukis)-(jari*jari));
		            		cout<<"============================================"<<endl;
		            		cout<<"Jika Garis pelukis "<<pelukis<<" dan Jari-jari Kerucut "<<jari<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==========================================="<<endl;
		            		cout<<"Tinggi Kerucut adalah          : "<<t<<endl;
		            		cout<<"==========================================="<<endl;
						}
						else{
							cout<<"Masukan Garis pelukis Kerucut  : ";cin>>pelukis;
		            		cout<<"Masukan jari-jari Kerucut      : ";cin>>diameter;
		            		jari=diameter/2;
		            		t=sqrt((pelukis*pelukis)-(jari*jari));
		            		cout<<"==========================================="<<endl;
		            		cout<<"Jika Garis pelukis "<<pelukis<<" dan Diameter Kerucut "<<diameter<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==========================================="<<endl;
		            		cout<<"Tinggi Kerucut adalah          : "<<t<<endl;
		            		cout<<"==========================================="<<endl;
						}
					}
				}
			}
			//Bola
			if(a=="4"){
				cout<<"[1] Bola"<<endl;
				cout<<"[2] Setengah Bola"<<endl;
				cout<<"============================"<<endl;
				cout<<"Pilih yang akan dihitung : ";cin>>b;
				cout<<"============================"<<endl;
				system("cls");
			if(b=="1"){
				cout<<"[1] Gunakan 22/7"<<endl;
	            cout<<"[2] Gunakan 3,14"<<endl;
	            cout<<"================"<<endl;
	            cout<<"Pilih phi : ";cin>>pi;
	            cout<<"================"<<endl;
	            system("cls");
	            if(pi==1){
	            	cout<<"Bola"<<endl;
	            	cout<<"======================================"<<endl;
		            cout<<"[1] Menghitung Luas Bola"<<endl;
		            cout<<"[2] Menghitung Volume Bola"<<endl;
		            cout<<"[3] Mencari Jari-jari dari Luas Bola"<<endl;
		            cout<<"[4] Mencari Diameter dari Luas Bola"<<endl;
		            cout<<"[5] Mencari Jari-jari dari Volume Bola"<<endl;
		            cout<<"[6] Mencari Diameter dari Volume Bola"<<endl;
		            cout<<"======================================"<<endl;
		            cout<<"Pilih operasi = ";cin>>d;
		            cout<<"======================================"<<endl;
		            system("cls");	
		            if(d=="1"){
		            	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan jari-jari Bola : ";cin>>jari;
		            		cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Luas Bola adalah       : "<<4*22*jari*jari/7<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Diameter Bola  : ";cin>>diameter;
	            			cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Luas Bola adalah       : "<<4*22*(diameter/2)*(diameter/2)/7<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
					if(d=="2"){
		            	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan jari-jari Bola   : ";cin>>jari;
		            		cout<<"==================================="<<endl;
		            		cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Volume Bola adalah       : "<<4*22*jari*jari*jari/3/7<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Diameter Bola    : ";cin>>diameter;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Volume Bola adalah       : "<<4*22*(diameter/2)*(diameter/2)*(diameter/2)/3/7<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
					if(d=="3"){
		            		cout<<"Masukan Luas Bola        : ";cin>>luas;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		jari=sqrt(luas*7/(4*22));
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Jari-jari Bola adalah    : "<<jari<<endl;
		            		cout<<"==================================="<<endl;
					}
					if(d=="4"){
		           			cout<<"Masukan Luas Bola        : ";cin>>luas;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		jari=sqrt(luas*7/(4*22));
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Diameter Bola adalah     : "<<jari*2<<endl;
		            		cout<<"==================================="<<endl;
					}
					if(d=="5"){
		            		cout<<"Masukan Volume Bola        : ";cin>>v;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		jari=cbrt(v*7*3/(4*22));
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Jari-jari Bola adalah      : "<<jari<<endl;
		            		cout<<"==================================="<<endl;
					}
					if(d=="6"){
		            		cout<<"Masukan Volume Bola        : ";cin>>v;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		jari=cbrt(v*7*3/(4*22));
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Diameter Bola adalah       : "<<jari*2<<endl;
		            		cout<<"==================================="<<endl;
					}
				}
				if(pi==2){
	            	cout<<"Bola"<<endl;
	            	cout<<"======================================"<<endl;
		            cout<<"[1] Menghitung Luas Bola"<<endl;
		            cout<<"[2] Menghitung Volume Bola"<<endl;
		            cout<<"[3] Mencari Jari-jari dari Luas Bola"<<endl;
		            cout<<"[4] Mencari Diameter dari Luas Bola"<<endl;
		            cout<<"[5] Mencari Jari-jari dari Volume Bola"<<endl;
		            cout<<"[6] Mencari Diameter dari Volume Bola"<<endl;
		            cout<<"======================================"<<endl;
		            cout<<"Pilih operasi = ";cin>>d;
		            cout<<"======================================"<<endl;
		            system("cls");	
		            if(d=="1"){
		            	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan jari-jari Bola : ";cin>>jari;
		            		cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Luas Bola adalah       : "<<4*phi*jari*jari<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Diameter Bola  : ";cin>>diameter;
	            			cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Luas Bola adalah       : "<<4*phi*(diameter/2)*(diameter/2)<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
					if(d=="2"){
		            	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan jari-jari Bola   : ";cin>>jari;
		            		cout<<"==================================="<<endl;
		            		cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Volume Bola adalah       : "<<4*phi*jari*jari*jari/3<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Diameter Bola    : ";cin>>diameter;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Volume Bola adalah       : "<<4*phi*(diameter/2)*(diameter/2)*(diameter/2)/3<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
					if(d=="3"){
		            		cout<<"Masukan Luas Bola        : ";cin>>luas;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		jari=sqrt(luas/(4*phi));
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Jari-jari Bola adalah    : "<<jari<<endl;
		            		cout<<"==================================="<<endl;
					}
					if(d=="4"){
		           			cout<<"Masukan Luas Bola        : ";cin>>luas;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		jari=sqrt(luas/(4*phi));
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Diameter Bola adalah     : "<<jari*2<<endl;
		            		cout<<"==================================="<<endl;
					}
					if(d=="5"){
		            		cout<<"Masukan Volume Bola        : ";cin>>v;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		jari=cbrt(v*3/(4*phi));
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Jari-jari Bola adalah      : "<<jari<<endl;
		            		cout<<"==================================="<<endl;
					}
					if(d=="6"){
		            		cout<<"Masukan Volume Bola        : ";cin>>v;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		jari=cbrt(v*3/(4*phi));
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Diameter Bola adalah       : "<<jari*2<<endl;
		            		cout<<"==================================="<<endl;
					}
				}
			}
			//Setengah Bola
			if(b=="2"){
				cout<<"[1] Gunakan 22/7"<<endl;
	            cout<<"[2] Gunakan 3,14"<<endl;
	            cout<<"================"<<endl;
	            cout<<"Pilih phi : ";cin>>pi;
	            cout<<"================"<<endl;
	            system("cls");
	            if(pi==1){
	            	cout<<"Setengah Bola"<<endl;
	            	cout<<"==============================================="<<endl;
		            cout<<"[1] Menghitung Luas Setengah Bola"<<endl;
		            cout<<"[2] Menghitung Volume  Setengah Bola"<<endl;
		            cout<<"[3] Mencari Jari-jari dari Luas Setengah Bola"<<endl;
		            cout<<"[4] Mencari Diameter dari Luas Setengah Bola"<<endl;
		            cout<<"[5] Mencari Jari-jari dari Volume Setengah Bola"<<endl;
		            cout<<"[6] Mencari Diameter dari Volume setengahBola"<<endl;
		            cout<<"======================================"<<endl;
		            cout<<"Pilih operasi = ";cin>>d;
		            cout<<"==============================================="<<endl;
		            system("cls");	
		            if(d=="1"){
		            	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan jari-jari Setengah Bola : ";cin>>jari;
		            		cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Luas Setengah Bola adalah       : "<<2*22*jari*jari/7<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Diameter Setengah Bola  : ";cin>>diameter;
	            			cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Luas Setengah Bola adalah       : "<<2*22*(diameter/2)*(diameter/2)/7<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
					if(d=="2"){
		            	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan jari-jari Setengah Bola   : ";cin>>jari;
		            		cout<<"==================================="<<endl;
		            		cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Volume Setengah Bola adalah       : "<<2*22*jari*jari*jari/3/7<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Diameter Setengah Bola    : ";cin>>diameter;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Volume Setengah Bola adalah       : "<<2*22*(diameter/2)*(diameter/2)*(diameter/2)/3/7<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
					if(d=="3"){
		            		cout<<"Masukan Luas Setengah Bola      : ";cin>>luas;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		jari=sqrt(luas*7/(2*22));
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Jari-jari Setengah Bola adalah  : "<<jari<<endl;
		            		cout<<"==================================="<<endl;
					}
					if(d=="4"){
		           			cout<<"Masukan Luas setengah Bola     : ";cin>>luas;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		jari=sqrt(luas*7/(2*22));
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Diameter setengah Bola adalah   : "<<jari*2<<endl;
		            		cout<<"==================================="<<endl;
					}
					if(d=="5"){
		            		cout<<"Masukan Volume Setengah Bola   : ";cin>>v;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		jari=cbrt(v*7*3/(2*22));
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Jari-jari setengah Bola adala  : "<<jari<<endl;
		            		cout<<"==================================="<<endl;
					}
					if(d=="6"){
		            		cout<<"Masukan Volume setengah Bola   : ";cin>>v;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 22/7"<<endl;
		            		cout<<"Maka ";
		            		jari=cbrt(v*7*3/(2*22));
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Diameter Setengah Bola adalah  : "<<jari*2<<endl;
		            		cout<<"==================================="<<endl;
					}
				}
				if(pi==2){
	            	cout<<"Bola"<<endl;
	            	cout<<"======================================"<<endl;
		            cout<<"[1] Menghitung Luas Bola"<<endl;
		            cout<<"[2] Menghitung Volume Bola"<<endl;
		            cout<<"[3] Mencari Jari-jari dari Luas Bola"<<endl;
		            cout<<"[4] Mencari Diameter dari Luas Bola"<<endl;
		            cout<<"[5] Mencari Jari-jari dari Volume Bola"<<endl;
		            cout<<"[6] Mencari Diameter dari Volume Bola"<<endl;
		            cout<<"======================================"<<endl;
		            cout<<"Pilih operasi = ";cin>>d;
		            cout<<"======================================"<<endl;
		            system("cls");	
		            if(d=="1"){
		            	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan jari-jari Setengah Bola : ";cin>>jari;
		            		cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Luas Setengah Bola adalah       : "<<2*phi*jari*jari<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Diameter Setengah Bola  : ";cin>>diameter;
	            			cout<<"==================================="<<endl;
		            		cout<<"JIka Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Luas Setenagah Bola adalah      : "<<2*phi*(diameter/2)*(diameter/2)<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
					if(d=="2"){
		            	cout<<"[1] Jari-Jari"<<endl;
		            	cout<<"[2] Diameter"<<endl;
		            	cout<<"================================"<<endl;
		            	cout<<"Gunakan Jari2 atau diameter : ";cin>>j;
		            	system("cls");
		            	if(j=="1"){
		            		cout<<"Masukan jari-jari Setengah Bola : ";cin>>jari;
		            		cout<<"==================================="<<endl;
		            		cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Volume Setengah Bola adalah     : "<<2*phi*jari*jari*jari/3<<endl;
		            		cout<<"==================================="<<endl;
						}
						else{
							cout<<"Masukan Diameter Setengah Bola  : ";cin>>diameter;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Volume Setengah Bola adalah     : "<<2*phi*(diameter/2)*(diameter/2)*(diameter/2)/3<<endl;
		            		cout<<"==================================="<<endl;
						}
					}
					if(d=="3"){
		            		cout<<"Masukan Luas Setengah Bola      : ";cin>>luas;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		jari=sqrt(luas/(2*phi));
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Jari-jari setengah Bola adalah  : "<<jari<<endl;
		            		cout<<"==================================="<<endl;
					}
					if(d=="4"){
		           			cout<<"Masukan Luas Setengah Bola      : ";cin>>luas;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		jari=sqrt(luas/(2*phi));
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Diameter Setengah Bola adalah   : "<<jari*2<<endl;
		            		cout<<"==================================="<<endl;
					}
					if(d=="5"){
		            		cout<<"Masukan Volume Setengah Bola    : ";cin>>v;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		jari=cbrt(v*3/(2*phi));
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Jari-jari Setengah Bola adalah  : "<<jari<<endl;
		            		cout<<"==================================="<<endl;
					}
					if(d=="6"){
		            		cout<<"Masukan Volume Setengah Bola    : ";cin>>v;
		            		cout<<"==================================="<<endl;
			            	cout<<"Jika Phi yang digunakan adalah 3.14"<<endl;
		            		cout<<"Maka ";
		            		jari=cbrt(v*3/(2*phi));
		            		for (int i = 0; i < 3; i++ )
						    cout<<sleep(1)<<" ";
						    cout<<endl;
						    cout<<"==================================="<<endl;
		            		cout<<"Diameter Setengah Bola adalah   : "<<jari*2<<endl;
		            		cout<<"==================================="<<endl;
					}
				}
			}    
		}
		cout<<sleep(1)<<endl;
		cout<<sleep(1)<<endl;
		cout<<sleep(1)<<endl;
		cout<<"==================================="<<endl;
        cout<<"Hitung Operasi Lainnya (ya/tidak) ? = ";cin>>balen;
        cout<<"==================================="<<endl;
        system("cls");    
    }
    while (balen=="ya");
    while (balen!="tidak");
    system("cls");
    cout<<"Terima Kasih"<<endl;
    cout<<sleep(1)<<endl;
    cout<<sleep(1)<<endl;
	cout<<"semoga Membantu"<<endl;
}
