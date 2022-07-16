#include<stdio.h>
#include<stdlib.h>

//register that contend the numbers created of rand funcion
struct list_num{

      int num;
      
};

struct lnum{

      struct list_num data_e;
      struct lnum *sig;
};

struct list_num setnum;
struct lnum *data_e1;

//creation of the list of numbers
void create_list(struct lnum **data1);

//load numbers that the RGN
void load_data(struct lnum **data1,struct list_num pstn);

//return the num that correspond to the position in the test
void return_number_of_the_list(struct lnum **data1,struct list_num pstn);

//creation of the list of numbers
void create_list(struct lnum **data1){

      *data1=NULL;
      
}

//load numbers that the RGN
void load_data(struct lnum **data1,struct list_num pstn){
      struct lnum *aux;
      struct lnum *nue=(struct lnum *)malloc(sizeof(struct lnum));
      
      nue->data_e=pstn;
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
void return_number_of_the_list(struct lnum **data1,struct list_num pstn){
	
      int cont=0;
      struct lnum *aux;
	
      aux=*data1;
	

      do{
		
            if(cont==pstn.num){
		
                  *data1=aux;
			
            }else{
                  
                  aux=aux->sig;

            }
	    
            cont++;
      }while(cont!=pstn.num);
	
}

