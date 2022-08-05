//*******************************
//* desarrollado por :
//*   Melissa Huamani Tintaya 
//*   Gilverto Rata Mataque
//******************************+

#include <windows.h>  
#include <GL/glut.h>  
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void Iniciar(){
	glClearColor(1,1,1,1);
	glPointSize(5);//tañano del lumon que dibuja ,grosor
	glLineWidth(3.f);
	glOrtho(-30,30,-30,30,-1,1);
    glMatrixMode(GL_PROJECTION);

	glLoadIdentity();

}
void Ejes(){
	glBegin(GL_LINES);
	glColor3f(1.f,0,0);
	// Eje x
	glVertex2i(0,800);
	glVertex2i(0,0);
	glColor3f(1.f,0,0);
	glVertex2i(0,-800);
	glVertex2i(0,0);
	//color
	glColor3f(1.f,0,0);
	//Eje y
	glVertex2i(600,0);
	glVertex2i(0,0);
	glColor3f(1.f,0,0);
	glVertex2i(-600,0);
	glVertex2i(0,0);
	glEnd();
	glFlush();
}

float angulo=0.0f;
int refreshMills=10;

void Timer(int value){
	
   glutPostRedisplay();      // Libera la re-dibujar solicitud de Indicación Activar () 
   glutTimerFunc(refreshMills,Timer,0); // La siguiente temporizador llama milisegundos 
}
void dibujar(){
	glClear(GL_COLOR_BUFFER_BIT);
    //Ejes();
    //glRotated(200,0,0,1);
    
   //cielo 1  
    glBegin(GL_POLYGON);
    glColor3d(0.40,0.50,0.96);
    glVertex2d(17.08,15.32);
    glColor3d(0.56,0.63,0.98);
    glVertex2d(21.56,14.93);
    glColor3d(0.40,0.50,0.96);
    glVertex2d(25.16,13.83);
    glColor3d(0.56,0.63,0.98);
    glVertex2d(25.26,16.57);
    glColor3d(0.40,0.50,0.96);
    glVertex2d(5.84,16.66);
    glVertex2d(17.08,15.32);
    glEnd();
//cielo 2    
    glBegin(GL_POLYGON);
   // glColor3d(0.40,0.50,0.96);
    glVertex2d(17.08,15.32);
    glColor3d(0.56,0.63,0.98);
    glVertex2d(5.84,16.66);
    glVertex2d(-16.07,16.72);
    glVertex2d(-4.21,13.72);
    glColor3d(0.40,0.50,0.96);
    glVertex2d(5.48,10.79);
    glVertex2d(10.49,13.64);
    glVertex2d(17.08,15.32);
    glEnd();
 ///cuadrado
 	glMatrixMode(GL_MODELVIEW);     // Operación en la matriz de Modelo-Vista 
    //glLoadIdentity();  
    glPushMatrix(); /// / Guardar la configuración de la vista de matriz modelo 
    glTranslatef(-0.5f,0.4f,0.0f);    //traducción 
    glRotatef(angulo, 0.0f, 0.0f, 1.0f); // Rotar en grados 
   //**************************  
  //   SOL
   //**************************  
    glBegin(GL_POLYGON);
    glColor3d(0.97,0.96,0.11);
    glVertex2d(6.79,14.97);
    glVertex2d(7,15);
    glVertex2d(7.19,14.97);
    glVertex2d(7.4,14.91);
    glVertex2d(7.59,14.79);
    glVertex2d(7.79,14.59);
    glVertex2d(7.91,14.39);
    glVertex2d(7.97,14.2);
    glVertex2d(6.79,14.97);

    glColor3d(0.97,0.96,0.11);
	glVertex2d(6.79,14.97);
	glVertex2d(7.97,14.2);
	glVertex2d(7.99,14);
    glVertex2d(7.97,13.81);
    glVertex2d(7.91,13.6);
    glVertex2d(7.82,13.44);
    glVertex2d(7.59,13.21);
    glVertex2d(7.41,13.1);
    glVertex2d(6.79,14.97);
    
    glColor3d(0.97,0.96,0.11);
	glVertex2d(6.79,14.97);
	glVertex2d(7.41,13.1);
	glVertex2d(7.21,13.03);	
	glVertex2d(7,13.01);
    glVertex2d(6.81,13.03);
    glVertex2d(6.61,13.09);
    glVertex2d(6.41,13.21);
    glVertex2d(6.21,13.41);
    glVertex2d(6.79,14.97);
   
  	glVertex2d(6.79,14.97);
    glVertex2d(6.21,13.41);
    glVertex2d(6.09,13.6);
	glVertex2d(6.02,13.83);
	glVertex2d(6.01,14);
	glVertex2d(6.03,14.19);	
	glVertex2d(6.1,14.42);
    glVertex2d(6.21,14.59);
    glVertex2d(6.79,14.97);
    
  	glVertex2d(6.79,14.97);
   	glVertex2d(6.21,14.59);
   	glVertex2d(6.41,14.79);
    glVertex2d(6.6,14.91);
    glVertex2d(6.79,14.97);  
    glEnd();
    glPopMatrix();  
    angulo += 0.2f;
///******************************************************

	   
    //puente 
    glBegin(GL_POLYGON);
    glColor3d(0.30,0.33,0.38);
    glVertex2d(-11.97,0.42);
    glVertex2d(-10,0);
    glVertex2d(14.39,0.16);
    glVertex2d(15.25,-0.44);
    glVertex2d(-10.22,-0.69);
    glVertex2d(-12,0);
    glEnd();
 
    glBegin(GL_POLYGON);
    glColor3d(0.25,0.28,0.34);
    glVertex2d(-12,-2);
    glVertex2d(-10.5,-1.5);
    glVertex2d(14.4,-1.4);
    glVertex2d(15.8,-1.8);
    glVertex2d(14.41,-1.94);
    glEnd();
    //pared puente 1
    glBegin(GL_POLYGON);
    glColor3d(0.28,0.27,0.35);
    glVertex2d(-14.4,-1.62);
    glVertex2d(-13.64,-4.29);
    glVertex2d(-9.84,-7.29);
    glVertex2d(-11,-2);
    glVertex2d(-12,-2);
    glVertex2d(-14.4,-1.62);
    glEnd();
    //line pared 
    glBegin(GL_POLYGON);
    glColor3d(0.40,0.36,0.43);
    glVertex2d(-11,-2);
    glVertex2d(-10.46,-1.97);
    glVertex2d(-9.18,-7.61);
    glVertex2d(-9.84,-7.29);
    glVertex2d(-11,-2);
    glEnd();
    //pared2
    glBegin(GL_POLYGON);
    glColor3d(0.28,0.27,0.35);
    glVertex2d(-10.46,-1.97);
    glVertex2d(-9.18,-7.61);
    glVertex2d(-7.11,-8.52);
    glVertex2d(-5.48,-6.99);
    glVertex2d(-5.5,-1.96);
    glVertex2d(-10.46,-1.97);
    glEnd();
    
    //arco 1    
    glBegin(GL_POLYGON);
    glColor3d(0.38,0.34,0.41);
    glVertex2d(-5.5,-1.96);
    glVertex2d(-5.48,-6.99);
    glVertex2d(-4.89,-5.56);
    glVertex2d(-4.03,-4.55);
    glVertex2d(-3.07,-3.78);
    glVertex2d(-1.67,-3.01);
    glVertex2d(-0.27,-2.64);
    glVertex2d(1.21,-2.47);
    glVertex2d(1.14,-1.98);
    glVertex2d(-5.5,-1.96);
    glEnd();
    
    //arco lado 2
    glBegin(GL_POLYGON);
    glColor3d(0.38,0.34,0.41);
    glVertex2d(10,-2);
    glVertex2d(8.84,-6.83);
    glVertex2d(8.59,-5.5);
    glVertex2d(7.36,-4.34);
    glVertex2d(7.5,-1.93);
    glVertex2d(10,-2);
    glVertex2d(7.5,-1.93);
    glVertex2d(7.36,-4.34);
    glVertex2d(5.82,-3.23);
    glVertex2d(3.8,-2.49);
    glVertex2d(1.21,-2.47);
    glVertex2d(1.14,-1.98);
    glVertex2d(7.5,-1.93);
    glEnd();
    
    
    glBegin(GL_POLYGON);
    glColor3d(0.28,0.27,0.35);
    glVertex2d(10,-2);
    glVertex2d(8.88,-6.86);
    glVertex2d(8.4,-8.52);
    glVertex2d(11.65,-8);
    glVertex2d(13.35,-1.88);
    glVertex2d(10,-2);
    glEnd();
     
 //line pared2
    glBegin(GL_POLYGON);
    glColor3d(0.40,0.36,0.43);
    glVertex2d(13.84,-1.92);
    glVertex2d(12.34,-8);
    glVertex2d(11.65,-8);    
    glVertex2d(13.35,-1.88);
    glVertex2d(13.84,-1.92);
    glEnd();
//morritos a lado del puente
    glBegin(GL_POLYGON);
    glColor3d(0.18,0.14,0.20);
    glVertex2d(20.76,-6.38);
    glVertex2d(20.13,-8.76);
    glVertex2d(12.82,-9.31);
    glVertex2d(12.34,-8);
    glVertex2d(13.31,-5.98);
    glVertex2d(13.71,-7.1);
    glVertex2d(20.76,-6.38);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3d(0.05,0.11,0.25);
    glVertex2d(21.79,-5.41);
    glVertex2d(20.13,-8.78);
    glVertex2d(20.76,-6.38);
    glVertex2d(13.71,-7.1);
    glVertex2d(13.31,-5.98);
    glVertex2d(16.72,-5.6);
    glVertex2d(18.2,-4.47);
    glVertex2d(20.12,-5.43);
    glVertex2d(21.79,-5.41);
    glEnd();
    
    
    glBegin(GL_POLYGON);
    glColor3d(0.39,0.36,0.42);
    glVertex2d(23.92,-1.36);
    glVertex2d(22.56,-3.14);
    glVertex2d(18.86,-4.41);
    glVertex2d(13.84,-1.92);
    //glVertex2d(18.5,-3.5);
    //glVertex2d(22.38,-2.49);
    glVertex2d(23.92,-1.36);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0.33,0.26,0.31);
    glVertex2d(13.84,-1.92);
    glVertex2d(12.34,-8);
    glVertex2d(13.31,-5.98);
    glVertex2d(16.72,-5.6);
    glVertex2d(18.2,-4.47);
    glVertex2d(20.12,-5.43);
    glVertex2d(21.79,-5.41);
    glVertex2d(23.1,-3.55);
    glVertex2d(22.56,-3.14);
    glVertex2d(18.86,-4.41);
    glVertex2d(13.84,-1.92);
    glEnd();
  //dentro del puente pared          
    glBegin(GL_POLYGON);
    glColor3d(0.39,0.28,0.31);
    glVertex2d(7.61,-5.5);
    glVertex2d(7.52,-7.05);
    glVertex2d(7.12,-7.76);
    glVertex2d(7.99,-9.56);
    glVertex2d(8.4,-8.52);
    glVertex2d(8.84,-6.83);
    glVertex2d(7.98,-5.7);
    glVertex2d(7.61,-5.5);
    glEnd();
//vordes del arco    
    glBegin(GL_POLYGON);
    glColor3d(0.48,0.38,0.41);
    glVertex2d(7.98,-5.7);
    glVertex2d(8.84,-6.83);
    glVertex2d(8.59,-5.5);
    glVertex2d(7.98,-5.7);
    //glEnd();
    glVertex2d(8.59,-5.5);
    glVertex2d(7.98,-5.7);
    glVertex2d(7.61,-5.5);
    glVertex2d(6.87,-4.66);	
    glVertex2d(5.48,-3.8);			    
    glVertex2d(5.82,-3.23);  
    glVertex2d(7.36,-4.34);
    glVertex2d(8.59,-5.5);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3d(0.51,0.42,0.44);
    glVertex2d(5.82,-3.23);  
    glVertex2d(3.8,-2.49);
    glVertex2d(1.21,-2.47);
    glVertex2d(1.66,-3.04);
    glVertex2d(3.74,-3.18);
    glVertex2d(5.48,-3.8);	
    glVertex2d(5.82,-3.23);					    
    glEnd();
		 
	glBegin(GL_POLYGON);
    glColor3d(0.48,0.38,0.41);
    glVertex2d(1.21,-2.47);
    glVertex2d(1.66,-3.04);
    glVertex2d(0.09,-3.33);
    glVertex2d(-1.05,-3.66);	   
    glVertex2d(-1.67,-3.01);
    glVertex2d(-0.27,-2.64);
    glVertex2d(1.21,-2.47);
    glEnd(); 
    
    glBegin(GL_POLYGON);
    glColor3d(0.51,0.42,0.44);
    glVertex2d(-1.67,-3.01);
    glVertex2d(-1.05,-3.66);
    glVertex2d(-2.33,-4.28);
    glVertex2d(-3.21,-4.96);
    glVertex2d(-4.03,-4.55);
    glVertex2d(-3.07,-3.78);
    glVertex2d(-1.67,-3.01);											    
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3d(0.48,0.38,0.41);
    glVertex2d(-4.03,-4.55);
    glVertex2d(-3.21,-4.96);
    glVertex2d(-4.77,-6.82);
    glVertex2d(-4.81,-9.02);   
    glVertex2d(-5.48,-8.85);
    glVertex2d(-5.48,-6.99);
    glVertex2d(-4.89,-5.56);	    
    glVertex2d(-4.03,-4.55);    
    glEnd();
    //pared triangulito 
    glBegin(GL_POLYGON);
    glColor3d(0.28,0.27,0.35);
    glVertex2d(-5.48,-6.99);
    glVertex2d(-7.11,-8.52);
    glVertex2d(-5.48,-8.85);
    glVertex2d(-5.48,-6.99);   
   
    glEnd();
 /* ********************************************/
//puente arribao///////////////////

    glBegin(GL_POLYGON);
    glColor3d(0.92,0.90,0.86);
    glVertex2d(22.69,0.3);
    glVertex2d(18.45,0.4);
    glVertex2d(15.25,-0.44);
    glColor3d(0.70,0.64,0.58);
    glVertex2d(15.8,-1.8);
    glVertex2d(23.92,-1.36);
    glVertex2d(22.69,0.3);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3d(0.92,0.90,0.86);
    glVertex2d(15.25,-0.44);
    glVertex2d(-10.22,-0.69); 
    glColor3d(0.70,0.64,0.58);  
    glVertex2d(-10.5,-1.5);
    glVertex2d(14.4,-1.4);
    glColor3d(0.92,0.90,0.86);
    glVertex2d(15.8,-1.8);
    glVertex2d(15.25,-0.44);
    glEnd();
    

 
//riooooooooo///////////////////

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 1.0f);//baby Blue
    glVertex2d(2.06,0.01);
    glVertex2d(3.51,1.47);
    glColor3d(0.71,0.94,0.87);
    glVertex2d(3.79,4.24);
    glVertex2d(8.39,4.77);
    glColor3d(0.71,0.94,0.87);
    glVertex2d(8.87,0.71);
    glVertex2d(8.27,0.04);
    glColor3d(0.71,0.94,0.87);
    glVertex2d(2.06,0.01);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 1.0f);//baby Blue
    glVertex2d(3.79,4.24);
    glColor3d(0.71,0.94,0.87);
    glVertex2d(8.39,4.77);
    glVertex2d(9,8);
    glVertex2d(9.86,8.59);
    glColor3d(0.71,0.94,0.87);
    glVertex2d(7,10);
    glVertex2d(7.49,9.05);
    glVertex2d(5.6,7.21);
    glColor3d(0.71,0.94,0.87);
    glVertex2d(4.86,5.58);
    glVertex2d(3.79,4.24);
    glEnd();
 
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 1.0f);//baby Blue
    glVertex2d(1.66,-3.04);
    glVertex2d(3.74,-3.18);
    glVertex2d(5.48,-3.8);
    glColor3d(0.71,0.94,0.87);
    glVertex2d(6.87,-4.66);
    glColor3d(0.71,0.94,0.87);
    glVertex2d(7.61,-5.5);
    glVertex2d(7.52,-7.05);
    glColor3d(0.71,0.94,0.87);
    glVertex2d(1.66,-3.04);
    glEnd();   

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 1.0f);//baby Blue
    glVertex2d(7.52,-7.05);
    glVertex2d(1.66,-3.04);
    glVertex2d(1.64,-3.58);
    glColor3d(0.71,0.94,0.87);
    glVertex2d(1.52,-5.06);
    glVertex2d(-0.13,-6.9);
    glVertex2d(6.78,-8.46);
    glVertex2d(7.52,-7.05);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 1.0f);//baby Blue
    glVertex2d(-0.13,-6.9);
    glColor3d(0.71,0.94,0.87);
    glVertex2d(6.78,-8.46);
    glVertex2d(6.81,-11.37);
    glVertex2d(5.29,-13.88);
    glVertex2d(-1.18,-12.04);
    glVertex2d(-1.77,-11.14);
    glVertex2d(-0.95,-8.43);
    glColor3d(0.71,0.94,0.87);
    glVertex2d(-0.13,-6.9);
    glEnd();  

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 1.0f);//baby Blue
    glVertex2d(5.29,-13.88);
    glVertex2d(-1.18,-12.04);
    glColor3d(0.71,0.94,0.87);
    glVertex2d(-1.97,-13.31);
    glVertex2d(-2.34,-15.63);
    glColor3d(0.71,0.94,0.87);
    glVertex2d(-2.04,-17.07);
    glVertex2d(-4.34,-19.52);
    glColor3d(0.71,0.94,0.87);
    glVertex2d(5.1,-15.44);
    glVertex2d(5.29,-13.88);
    glEnd();
   
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 1.0f);//baby Blue
    glVertex2d(-2.04,-17.07);
    glVertex2d(-4.34,-19.52);
    glColor3d(0.71,0.94,0.87);
    glVertex2d(-4.4,-21.48);
    glVertex2d(4.98,-21.5);
    glVertex2d(5.1,-15.4);  
    glColor3d(0.71,0.94,0.87);
    glVertex2d(5.29,-13.88);
    glVertex2d(-2.04,-17.07);
    glEnd();

////////////////////////////////  

//sombra
    glBegin(GL_POLYGON);
    glColor3d(0.03,0.07,0.17);
    glVertex2d(-9.84,-7.29);
    glVertex2d(-13.64,-4.29);
    glVertex2d(-14.4,-1.62);
    glVertex2d(-18,-2);
    
    glColor3d(0.29,0.32,0.43);
    
    glVertex2d(-18.07,-2.57);
    glVertex2d(-17.12,-2.61);
    glVertex2d(-15.06,-4.6);
    glColor3d(0.29,0.32,0.43);
    glVertex2d(-14.56,-7.66);
    glVertex2d(-9.84,-7.29);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3d(0.03,0.07,0.17);
    glVertex2d(-9.84,-7.29);
    glVertex2d(-14.56,-7.66);
    glVertex2d(-10.23,-12.11);
    glColor3d(0.29,0.32,0.43);
    glVertex2d(-7.55,-12.75);
    glVertex2d(-5.44,-12.54);
    glVertex2d(-4.81,-9.02);
    glVertex2d(-5.48,-8.85);
    glColor3d(0.29,0.32,0.43);
    glVertex2d(-7.11,-8.52);
    glVertex2d(-9.18,-7.61);
    glVertex2d(-9.84,-7.29);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3d(0.03,0.07,0.17);
    glVertex2d(-4.81,-9.02);
    glVertex2d(-5.44,-12.54);
    glVertex2d(-4.44,-15.16);   
    glVertex2d(-4,-18);
    glVertex2d(-4.34,-19.52);
    glVertex2d(-2.7,-17.67);
    glVertex2d(-2.95,-13.45);
    glColor3d(0.29,0.32,0.43);
    glVertex2d(-3.75,-11.78);
    glVertex2d(-4,-10);
    glVertex2d(-4.81,-9.02);
    glEnd();
    
 //sobra derecha    
    glBegin(GL_POLYGON);
    glColor3d(0.03,0.07,0.17);
    glVertex2d(5.1,-15.44);
    glVertex2d(4.34,-17.99);
    glVertex2d(4.98,-21.5);
    glVertex2d(9.08,-21.54);
    glColor3d(0.29,0.32,0.43);
    glVertex2d(7.18,-19.85);
    glVertex2d(7.44,-15.33);
    glVertex2d(5.1,-15.44);
    glEnd();
    
    
    glBegin(GL_POLYGON);
    glColor3d(0.03,0.07,0.17);
    glVertex2d(7.44,-15.33);
    glVertex2d(5.1,-15.44);
    glVertex2d(5.29,-13.88);
    glVertex2d(6.81,-11.37);
    glVertex2d(6.78,-8.46);
    glVertex2d(7.12,-7.76);
    glVertex2d(7.99,-9.56);
    glVertex2d(9.42,-13.94);
    glVertex2d(7.44,-15.33);
    glEnd(); 
	 
    glBegin(GL_POLYGON);
    glColor3d(0.03,0.07,0.17);
    glVertex2d(9.42,-13.94);
    glVertex2d(7.99,-9.56);
    glVertex2d(8.4,-8.52);
    glVertex2d(12.34,-8);
    glVertex2d(12.82,-9.31);
    glColor3d(0.29,0.32,0.43);
    glVertex2d(14.34,-12.28);
    glVertex2d(13.6,-13.62);
    glVertex2d(9.42,-13.94);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0.03,0.07,0.17);
    glVertex2d(12.82,-9.31);
    glVertex2d(14.34,-12.28);
    glVertex2d(15.9,-13.01);
    glVertex2d(17.53,-12.34);
    glVertex2d(19.32,-10.25);
    glColor3d(0.29,0.32,0.43);
    glVertex2d(20.13,-8.78);
    glVertex2d(12.82,-9.31);
    glEnd();
//*******
//camino
    glBegin(GL_POLYGON);
    glColor3d(0.92,0.90,0.86);
    glVertex2d(-25.58,-3.94);
    glVertex2d(-25.6,-5.15);
    glVertex2d(-24,-4);
    glColor3d(0.70,0.64,0.58);//covinacion color
    glVertex2d(-20,-2);
    glVertex2d(-18,-2);
    glVertex2d(-14.4,-1.62);
    glColor3d(0.92,0.90,0.86);
    glVertex2d(-20.23,-0.85);
    glVertex2d(-23.94,-2.82);
    glVertex2d(-25.58,-3.94);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0.92,0.90,0.86);
    glVertex2d(-20.23,-0.85);
    glVertex2d(-14.4,-1.62);
    glVertex2d(-12,0);
    glColor3d(0.70,0.64,0.58);//
    glVertex2d(-12.26,1.16);
    glVertex2d(-11.14,2.28);
    glVertex2d(-1.38,6.99);
    glVertex2d(-2.25,7.2);
    glVertex2d(-20.23,-0.85);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3d(0.92,0.90,0.86);
    glVertex2d(-1.38,6.99);
    glVertex2d(-2.25,7.2);
    glVertex2d(-2,8);
    glVertex2d(1.85,9.19);
    glVertex2d(2.16,9.08);
    glColor3d(0.70,0.64,0.58);
    glVertex2d(-1.22,7.91);
    glVertex2d(-1.38,6.99);
    glEnd();   

   glBegin(GL_POLYGON);
    glColor3d(0.92,0.90,0.86);
    glVertex2d(-10.22,-0.69);
    glVertex2d(-12,0);
    glColor3d(0.70,0.64,0.58);
    glVertex2d(-14.4,-1.62);
    glVertex2d(-12,-2);
    glColor3d(0.92,0.90,0.86);
    glVertex2d(-10.5,-1.5);
    glVertex2d(-10.22,-0.69);
    glEnd();
//borde del rio
    glBegin(GL_POLYGON);
    glColor3d(0.12,0.31,0.36);
    glVertex2d(3.79,4.24);
    glVertex2d(4.86,5.58);
    glColor3d(0.51,0.55,0.35);
    glVertex2d(5.6,7.27);
    glColor3d(0.12,0.31,0.36);
    glVertex2d(7.49,9.05);
    glColor3d(0.51,0.55,0.35);
    glVertex2d(7,10);
    glColor3d(0.12,0.31,0.36);
    glVertex2d(6.93,9.32);
    glColor3d(0.51,0.55,0.35);
    glVertex2d(4.27,7.41);
    glColor3d(0.12,0.31,0.36);
    glVertex2d(2.31,5.16); 
    glVertex2d(3.79,4.24);
    glEnd();
    
    
    glBegin(GL_POLYGON);
    glColor3d(0.12,0.31,0.36);
    glVertex2d(3.79,4.24);
    glVertex2d(2.31,5.16); 
    glColor3d(0.51,0.55,0.35);
    glVertex2d(2.5,4.21);
    glVertex2d(1.32,2.03);
    glColor3d(0.12,0.31,0.36);
    glVertex2d(-1,0);
    glVertex2d(2.06,0.01);
    glColor3d(0.51,0.55,0.35);
    glVertex2d(3.51,1.47);
    glVertex2d(3.79,4.24);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3d(0.12,0.31,0.36);
    glVertex2d(-0.74,-4.58);
    glVertex2d(-1.05,-3.66);
    glColor3d(0.51,0.55,0.35);
    glVertex2d(-0.09,-3.33);
    glVertex2d(1.66,-3.04);
    glColor3d(0.12,0.31,0.36);
    glVertex2d(1.52,-5.06);
    glVertex2d(-0.13,-6.9);
    glColor3d(0.51,0.55,0.35);
    glVertex2d(-0.95,-8.43);
    glVertex2d(-1.56,-7.15);
    glVertex2d(-0.74,-4.58);
    glEnd();
    
////////////////////////////////   
//pasto denaj del puente
    glBegin(GL_POLYGON);
    glColor3d(0.42,0.53,0.01);
    glVertex2d(-4.77,-6.82);
    glVertex2d(-4.11,-5.76);
    glColor3d(0,0.8,0);
    glVertex2d(-3.21,-4.96);
    glVertex2d(-2.33,-4.28);
    glVertex2d(-1.05,-3.66);
    glColor3d(0.42,0.53,0.01);
    glVertex2d(-0.74,-4.58);
    glVertex2d(-1.56,-7.15);
    glColor3d(0,0.8,0);
    glVertex2d(-0.95,-8.43);
    glVertex2d(-4.77,-6.82);
    glEnd();  
    
    glBegin(GL_POLYGON);
    glColor3d(0,0.8,0);
    glVertex2d(-4.77,-6.82);
    glColor3d(0.42,0.53,0.01);
    glVertex2d(-0.95,-8.43);
    glVertex2d(-1.77,-11.14);
    glVertex2d(-1.18,-12.04);
    glColor3d(0,0.8,0);
    glVertex2d(-3.75,-11.78);
    glVertex2d(-4,-10);
    glColor3d(0.42,0.53,0.01);
    glVertex2d(-4.81,-9.02);
    glColor3d(0.42,0.53,0.01);
    glVertex2d(-4.77,-6.82);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3d(0,0.8,0);
    glVertex2d(-3.75,-11.78);
    glVertex2d(-1.18,-12.04);
    glColor3d(0.42,0.53,0.01);
    glVertex2d(-1.97,-13.31);
    glColor3d(0,0.8,0);
    glVertex2d(-2.34,-15.63);
    glColor3d(0.42,0.53,0.01);
    glVertex2d(-2.04,-17.07);
    glVertex2d(-2.7,-17.67);
    glVertex2d(-2.95,-13.45);
    glColor3d(0.42,0.53,0.01);
    glVertex2d(-3.75,-11.78);
    glEnd();
    
   //vertes pasto 
    glBegin(GL_POLYGON);
    glColor3d(0,0.8,0);
    glVertex2d(-25.73,-21.73);
    glVertex2d(-4.4,-21.48);
    glColor3d(0.36,0.67,0.14);
    glVertex2d(-4.34,-19.52);
    glVertex2d(-4,-18);
    glVertex2d(-4.44,-15.16);
    glVertex2d(-5.44,-12.54);
    glVertex2d(-7.55,-12.75);
    glVertex2d(-25.73,-21.73);
    glEnd(); 

    glBegin(GL_POLYGON);
    glColor3d(0.36,0.67,0.14);
    glVertex2d(-7.55,-12.75);
    glColor3d(0.79,0.6,0.);
    glVertex2d(-25.73,-21.73);
    glColor3d(0.36,0.67,0.14);
    glVertex2d(-25.6,-5.15);
    glVertex2d(-24,-4);
    glColor3d(0.79,0.6,0.);
    glVertex2d(-15.06,-4.6);
    glVertex2d(-14.56,-7.76);
    glColor3d(0.79,0.6,0.);
    glVertex2d(-10.23,-12.11);
    glVertex2d(-7.55,-12.75);
	glEnd(); 
    
    glBegin(GL_POLYGON);
    glColor3d(0.36,0.67,0.14);
    glVertex2d(-24,-4);
    glVertex2d(-15.06,-4.6);
    glColor3d(0.79,0.6,0.);
    glVertex2d(-17.12,-2.61);
    glVertex2d(-18.07,-2.57);
    glVertex2d(-18,-2);
    glVertex2d(-20,-2);
    glVertex2d(-24,-4);
    glEnd();
  
    ///
    glBegin(GL_POLYGON);

    glColor3d(0.32,0.58,0.34);
    glVertex2d(25.4,-21.66);
    glColor3d(0,0.8,0);
    glVertex2d(9.08,-21.54);
    glColor3d(0.32,0.58,0.34);
    glVertex2d(7.18,-19.85);
    glVertex2d(6.29,-18.03);
    glColor3d(0,0.8,0);
    glVertex2d(7.44,-15.33);
    glColor3d(0.32,0.58,0.34);
    glVertex2d(9.42,-13.94);
    glColor3d(0,0.8,0);
    glVertex2d(13.6,-13.62);
    glVertex2d(25.4,-21.66);
    glEnd(); 

    glBegin(GL_POLYGON);
    glColor3d(0,0.8,0);
    glVertex2d(25.4,-21.66);
    glColor3d(0.32,0.58,0.34);
    glVertex2d(13.6,-13.62);
    glColor3d(0,0.8,0);
    glVertex2d(14.34,-12.28);
    glColor3d(0.32,0.58,0.34);
    glVertex2d(15.9,-13.01);
    glColor3d(0,0.8,0);
    glVertex2d(17.53,-12.34);
    glColor3d(0.32,0.58,0.34);
    glVertex2d(19.32,-10.25);
    glVertex2d(20.13,-8.78);
    glColor3d(0,0.8,0);
    glVertex2d(25.1,-5.4);
    glVertex2d(25.4,-21.66);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3d(0,0.8,0);
    glVertex2d(25.18,-3.19);
    glVertex2d(23.78,0.72);
    glVertex2d(22.69,0.3);
    glVertex2d(23.92,-1.36);
    glVertex2d(22.38,-2.49);
    glVertex2d(22.56,-3.14);
    glVertex2d(23.1,-3.55);
    glVertex2d(25.18,-3.19);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3d(0,0.8,0);
    glVertex2d(25.18,-3.19);
    glVertex2d(23.1,-3.55);
    glVertex2d(21.79,-5.41);
    glVertex2d(20.76,-6.38);
    glVertex2d(20.13,-8.78);
    glVertex2d(25.1,-5.4);
    glVertex2d(25.18,-3.19);
    glEnd();
  ///pasto oarte arriba 
    glBegin(GL_POLYGON);
    glColor3d(0.40,0.63,0.45);
    glVertex2d(25.16,13.83);
    glColor3d(0,0.8,0);
    glVertex2d(21.49,14.92);
    glColor3d(0.40,0.63,0.45);
    glVertex2d(17.08,15.32);
    glColor3d(0.29,0.43,0.55);
    glVertex2d(10.49,13.64);
    glVertex2d(5.48,10.75);
    glColor3d(0,0.8,0);
    glVertex2d(9.86,8.59);
    glColor3d(0.40,0.63,0.45);
    glVertex2d(25.16,0.33);
    glColor3d(0.40,0.63,0.45);
    glVertex2d(25.16,13.83);
    glEnd();  

    glBegin(GL_POLYGON);
    glColor3d(0,0.8,0);
    glVertex2d(25.16,0.33);
    glColor3d(0.40,0.63,0.45);
    glVertex2d(9.86,8.59);
    glColor3d(0,0.8,0);
    glVertex2d(9,8);
    glVertex2d(8.39,4.77);
    glVertex2d(18.45,0.4);
    glVertex2d(22.69,0.3);
    glColor3d(0.40,0.63,0.45);
    glVertex2d(23.78,0.72);
    glVertex2d(25.16,0.33);
    glEnd(); 

    glBegin(GL_POLYGON);
    glColor3d(0,0.8,0);
    glVertex2d(8.39,4.77);
    glVertex2d(18.45,0.4);
    glVertex2d(15.25,-0.44);
    glVertex2d(14.39,0.16);
    glVertex2d(8.27,0.04);
    glVertex2d(8.87,0.71);
    glVertex2d(8.39,4.77);
    glEnd();
  //pasto cerro 2  
    glBegin(GL_POLYGON);
    glColor3d(0.51,0.32,0.27);
    glVertex2d(5.48,10.79);
    glColor3d(0.18,0.40,0.21);
    glVertex2d(-4.21,13.72);
    glColor3d(0.51,0.32,0.27);
    glVertex2d(-16.07,16.72);
    glColor3d(0.18,0.40,0.21);
    glVertex2d(-25.51,16.55);
    glVertex2d(-2,8);
    glColor3d(0.51,0.32,0.27);
    glVertex2d(1.85,9.19);
    glVertex2d(1.87,9.5);
    glVertex2d(5.48,10.79);
    glEnd();
    
        
    glBegin(GL_POLYGON);
    glColor3d(0.18,0.40,0.21);
    glVertex2d(-25.51,16.55);
    glColor3d(0.51,0.32,0.27);
    glVertex2d(-2,8);
    glColor3d(0.18,0.40,0.21);
    glVertex2d(-2.25,7.2);
    glColor3d(0.51,0.32,0.27);
    glVertex2d(-20.3,-0.85);
    glVertex2d(-23.94,-2.82);
    glColor3d(0.51,0.32,0.27);
    glVertex2d(-25.58,-3.94);
    glColor3d(0.18,0.40,0.21);
    glVertex2d(-25.51,16.55);
    glEnd();
    
    
    glBegin(GL_POLYGON);
    glColor3d(0.55,0.47,0.43);
    glVertex2d(5.48,10.79);
    glColor3d(0,0.8,0);
    glVertex2d(7,10);
    glVertex2d(6.93,9.32);
    glColor3d(0.36,0.67,0.14);
    glVertex2d(4.27,7.41);
    glVertex2d(2.31,5.16);
    glVertex2d(2.16,9.08);
    glColor3d(0.55,0.47,0.43);
    glVertex2d(1.87,9.5);
    glVertex2d(5.48,10.79);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3d(0,0.8,0);
    glVertex2d(2.31,5.16);
    glVertex2d(2.16,9.08);
    glColor3d(0.71,0.50,0.48);
    glVertex2d(-1.38,6.99);
    glVertex2d(-11.14,2.28);
    glColor3d(0.71,0.50,0.48);
    glVertex2d(-12.26,1.16);
    glVertex2d(-11.97,0.42);
    glVertex2d(-10,0);
    glVertex2d(-1,0);
    glVertex2d(1.32,2.03);
    glVertex2d(2.5,4.31);
    glVertex2d(2.31,5.16);
    glEnd();
//triangulos
    glBegin(GL_TRIANGLES);
    glColor3d(0.35,0.34,0.38);
    glVertex2d(8,0);
    glVertex2d(7.2,0.05);
    glVertex2d(7.49,0.91);
    
    glVertex2d(1.41,0.02);
    glVertex2d(0.49,0.06);
    glVertex2d(0.99,0.81);
    
    glVertex2d(-6.45,0.77);
    glVertex2d(-6,0);
    glVertex2d(-6.84,-0.11);
    glEnd(); 
    
    glBegin(GL_TRIANGLES);
    glColor3d(0.35,0.34,0.38);
    glVertex2d(-4.18,-1.51);
    glVertex2d(-4.64,-0.93);
    glVertex2d(-5,-1.5);
    
    glVertex2d(1.74,-0.92);
    glVertex2d(2.21,-1.46);
    glVertex2d(1.26,-1.48);
    
    glVertex2d(8.99,-0.78);
    glVertex2d(9.35,-1.39);
    glVertex2d(8.57,-1.43);
    glEnd(); 
     	glMatrixMode(GL_MODELVIEW);     // Operación en la matriz de Modelo-Vista 
    //glLoadIdentity();  
    glPushMatrix(); /// / Guardar la configuración de la vista de matriz modelo 
    //glTranslatef(-0.5f,0.4f,0.0f);    //traducción 
    glRotatef(angulo, 0.0f, 0.0f, 1.0f); // Rotar en grados 
    glBegin(GL_TRIANGLES);
     glColor3d(0,0,0);
     glVertex2d(5,13);
     glVertex2d(3.48,12.02);
     glVertex2d(4,13);
     
     glVertex2d(3.48,12.02);
     glVertex2d(3,13);
     glVertex2d(2,13);
     
    glEnd();
    glPopMatrix();  
    angulo += 0.2f;
//	
 glFlush();
}

int main(int argc, char** argv){

	glutInit(&argc, argv);//inicializamos glut
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); //utilizar color rgb , utilice una pantalla 
	glutInitWindowSize(600,500);
	glutInitWindowPosition(50,50);
	glutCreateWindow("Window OpenGl");
	glutDisplayFunc(dibujar);
	glutTimerFunc(0,Timer,0);
	Iniciar(); 
	glutMainLoop();
	return 0;
}


