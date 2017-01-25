/*Librerias de Opencv*/
#include<opencv\cv.h>
#include <opencv\highgui.h>

/*Funcion principal del programa*/
void main(void){
	
	/*Creacion de una Ventana*/
	cvNamedWindow("Camara Web" , CV_WINDOW_AUTOSIZE  );
	/*Cracion de una variable para captura video*/
	CvCapture* capture=cvCreateCameraCapture(0);
	/*Creacion de una imagen*/
	IplImage* imagen;
	while(1) {
		/* Guarda el video en la imagen*/
		imagen = cvQueryFrame( capture );
		/*Imprime la Imagen*/
		cvShowImage( "Camara Web", imagen );
		/*Tiempo de espera entre imagenes*/
		cvWaitKey(33);
		
}
}
