/*headers that be necesary to make the program*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "list_num_used.h"

//define constant

#define _CONSTANT 1



//create a aleatory numbers for each letter in the text
int rand_num(time_t x_n);

//creat a encrypt  archive
void encrypt_operation(FILE *archive_inp,FILE **archive_otp,int i,int j);

//decrypt funtion of the system
void encrypt_operation(FILE *archive_inp,FILE **archive_otp,int i,int j);

//main program
int main(int argc,char *argv[]){
      //defines of constants an variable
      int res,cont=0;
      time_t date=time(NULL),aux_date;
      FILE *d_text= NULL,*encrypt_archive=NULL;
      char opcopr;

      create_list(&data_e1);

      //save the public key based in the time
      date=aux_date;

      //open the archive that was introduced in terminal
      d_text=fopen(*argv,"r");

      //open new archive
      encrypt_archive=fopen("new encrypt archive","a");

      //select opration to archive
      printf("select the opration to realice \n(1)encrypt\n(2)decrypt\n>>> ");

      opcopr=getchar();

      switch (opcopr) {

      case '1'://option to encrypt
	    
	    
	    //create the algorithm that will generete the aleatory numbers
	    while(_CONSTANT==feof(d_text)){

		  //create a aleatory numbers for each letter in the text
		  res=rand_num(date);

		  //encrypting for character
		  encrypt_operation(d_text,&encrypt_archive,res,cont);

		  cont++;
	    }
	    break;
	    
      case '2'://option to decrypt

	    //decrypt character in the text
	    while(_CONSTANT==feof(d_text)){

		  //create a aleatory numbers for each letter in the text
		  res=rand_num(date);

		  //encrypting for character
		  decrypt_operation(d_text,&encrypt_archive,res,cont);

		  cont++;
	    }
	    
	    break;
      default:

	    printf("***ERROR: operation isn't valid***\n");
	    
	    break;
	    
      }
      fclose(d_text);
      fclose(encrypt_archive);

      
      
      return 0;
}

//create a aleatory numbers for each letter in the text
int rand_num(time_t x_n){
      long int a=31415926535,c=27182818284,m=1414213562373;
      int result,cont=0;
      bool opc=true;

      //generate numbers that overcome the 255 
      while(opc){
            result=(a*(x_n)+c)%m;//generator of aletory numbers
            x_n=result;

            result=result/10000000;

            struct list_num aux;
            aux.num=cont;
            
            return_number_of_the_list(&data_e1,aux);

            //test that are in range ASCII
            if((result<=255)&&(result>-1)&&(result!=setnum.num)){

                  opc=false;

                  struct list_num aux2;
                  aux2.num=result;
                  
                  load_data(&data_e1,aux2);
              
                  return result;

            }else{

                  opc=true;
		  
            }
	    
	    //if RNG create two identical numbers, change x_n in the RNG 
            if(result==setnum.num){

                  x_n++;

            }
            cont++;
      }
     
}


//encrypt de archive 
void encrypt_operation(FILE *archive_inp,FILE **archive_otp,int i,int j){
      char aux,aux2;
      int aux_i;
      
      //save the character in aux_i
      fseek(archive_inp,j,SEEK_SET);
      aux_i=fgetc(archive_inp);

      //move to other in char ASCII with RNG result
      i=i+aux_i;

      //solution overflow
      if (i>=255) {

            i=i-255;
            
      }

      //creation of the char encryptation
      

      //put char in the encrypt new archive
      fputc(i,*archive_otp);

      
           
}


void decrypt_operation(FILE *archive_inp,FILE **archive_otp,int i,int j){

}
