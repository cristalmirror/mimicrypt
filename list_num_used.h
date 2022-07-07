#include<stdio.h>
#include<stdlib.h>

//register that contend the numbers created of rand funcion
struct list_num{

      int num;
      struct list_num *sig;
      
};

struct list_num data_e;

//creation of the list of numbers
void create_list(struct list_num *data1);

//load numbers that the RGN
void load_data(struct list_num data1,int n_num);

//return the num that correspond to the position in the test
int return_number_of_the_list(struct list_num *data1,int pstn);

//creation of the list of numbers
void create_list(struct list_num *data1){

      *date=NULL;
      
}

//load numbers that the RGN
void load_data(struct list_num *data1,int n_num){
      struct list_num *aux;
      struct list_num *nue=(struct list_num*) malloc(sizeof(struct list_num));

      
      nue->num=n_num;
      nue->sig=NULL;

      
      //test the state of de later node of the list
      if(data1==NULL){

			data1=nue;
 
      }else{

            aux=data1;
            while (aux->sig!=NULL) {

                  aux=aux->sig;
		  
            }
            aux-sig=nue;
      }

}

//return the num that correspond to the position in the test
int return_number_of_the_list(struct list_num *data1,int pstn){
	
	cont=0;
	struct list_num *aux;
	
	aux=*data1;
	

	do{
		
          if(cont==pstn){
				  
                return aux->num;
			
          }else{
			
                aux=aux->*sig

          }
		
          cont++;
	}while(cont!=pstn);
	
	
}

