// Vi du cho cau truc switch - case

#include<stdio.h>

int main(){
	char option;
	printf("Question : Con cho di chuyen bang may chan ?\n");
	printf("A. 1\nB. 2\nC. 3\nD. 4\n");
	printf("Nhap vao dap an : ");
	option = getchar();
	
	switch(option){
	
		case'a':
		case'A':
		case'b':
		case'B':
		case'c':
		case'C':
			{printf("Rat tiec ! Dap an cua ban da sai");
			 break;
			}
	    case'd':
	    case'D':
	    	{printf("Chuc mung ! Dap an cua ban chinh xac");
	    	break;
			}
		default:
			{printf("Ban da nhap sai. Vvui long nhap lai");
			}
	}
	return 0;
	}
	

