 #include<stdio.h>
 int main (){
 char name [500];
 // khai bao bien luu ten
 // moi ban nhap ten 
 printf(" moi ban nhap ten ");
 // in ra loi chao 
 // lay ten tu nguoi dung 
 fgets(name, sizeof(name), stdin );
 printf(" xin chao %s\n",name );
 	return 0; 
 }
