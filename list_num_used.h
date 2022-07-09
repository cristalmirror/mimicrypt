#include<stdio.h>
#include<stdlib.h>

//register that contend the numbers created of rand funcion
typedef struct list_num{

      int num;
      struct list_num *sig;
      
}data_e;

typedef data_e *lnum;

//creation of the list of numbers
void create_list(lnum *data1);

//load numbers that the RGN
void load_data(lnum *data1,int n_num);

//return the num that correspond to the position in the test
int return_number_of_the_list(lnum *data1,int pstn);

//creation of the list of numbers
void create_list(lnum *data1){

      *data1=NULL;
      
}

//load numbers that the RGN
void load_data(lnum *data1,int n_num){
      lnum *aux;
      lnum *nue=(lnum*) malloc(sizeof(lnum));

      
      nue->num=n_num;
      nue->sig=NULL;

      
      //test the state of de later node of the list
      if(*data1==NULL){

			*data1=nue;
 
      }else{

            aux=*data1;
            while (aux->sig!=NULL) {

                  aux=aux->sig;
		  
            }
            aux->sig=nue;
      }

}

//return the num that correspond to the position in the test
int return_number_of_the_list(lnum *data1,int pstn){
	
      int cont=0;
      lnum *aux;
	
      aux=*data1;
	

      do{
		
	    if(cont==pstn){
		
		  return aux->num;
			
	    }else{
			
		  aux=aux->*sig;

	    }
	    
          cont++;
      }while(cont!=pstn);
	
	
}

