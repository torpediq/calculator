// пародия на кусок программы для обсчета psnr
# include <cmath>
# include <iostream>
# include <fstream>
#include <stdlib.h>
#include <stdio.h>
int PSNR1(int max, long double mse,int psnr)
{
	max=255;
	psnr=20*(lg(max/(sqrt(mse)));

	return psnr;//
}
int MSECALC(int i,j,width,heigth,r1,r2)
{
	for(i=0; i<width;i++)
		for(j=0;j<heigth;j++)
			// здесь должны быть получены данные r,g,b для обсчета по формуле далее
			int sum=sum+((r1*r1)-(2*r1*r2)+(r2*r2))// обсчет mse
			return sum;// передаем полученное значение mse в функцию для обсчета psnr	
}
int BMPLOAD(unsigned char header[54];unsigned int dataPos;unsigned int width, height;unsigned int imageSize;unsigned char * data;)
{
	
	FILE *file = fopen("directoria""rb");
      if (!file)                              
	   {printf("Image could not be opened\n"); return 0;}
	   if ( fread(header, 1, 54, file)!=54 )
		  {printf("Not a correct BMP file\n");return false;}
	   if ( header[0]!='B' || header[1]!='M' ){
		   printf("Not a correct BMP file\n");return 0;}
       dataPos = *(int*)&(header[0x0A]);
       imageSize = *(int*)&(header[0x22]);
       width = *(int*)&(header[0x12]);
       height = *(int*)&(header[0x16]);
	   if (imageSize==0)  
		   imageSize=width*height*3;
	   if (dataPos==0)      
		   dataPos=54;
	   data = new unsigned char [imageSize];
	   fread(data,1,imageSize,file);
	   fclose(file);
	   return width,heigth;
