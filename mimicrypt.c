
/*headers that be necesary to make the program*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "list_num_used.h"

//define constant

#define _CONSTANT 1


//create a aleatory numbers for each letter in the text
int rand_num(time x_n);

//creat a encrypt  archive
void encrypt_operation(FILE *archive_inp,FILE *archive_otp,int i);

//main program
int main(int argc,char *argv[]){
      //defines of constants an variable
      int res,cont=0;
      time date=time(NULL),aux_date;
      FILE *d_text= NULL,encrypt_archive=NULL;
      

      create_list(&data_e);

      //save the public key based in the time
      date=aux_date;

      //open the archive that was introduced in terminal
      d_text=fopen(*argv,"a");

      //open new archive
      encrypt_archive=fopen("new encrypt archive","a");

      //create the algorithm that will generete the aleatory numbers
      while(_CONSTANT==feof(tam)){

            //create a aleatory numbers for each letter in the text
            res=rand_num(date,d_text);

            //encrypting for character
            encrypt_operation(d_text,&encrypt_archive,res);

            cont++;
       }

      fclose(d_text);
      fclose(encrypt_archive);

      
      
      return 0;
}

//create a aleatory numbers for each letter in the text
int rand_num(time x_n){
      long int a=31415926535,c=27182818284,m=1414213562373;
      int result,cont=0;
      bool opc=true;

      //generate numbers that overcome the 255 
      while(opc){
            result=(a*(x_n)+c)%m;//generator of aletory numbers
            x_n=result;

            result=result/10000000;

            return_number_of_the_list(&data_e,cont);

	    //test that are in range ASCII
            if((result<=255)&&(result>-1)&&(result!=data_e->num)){

                  opc=false;
                  
                  load_data(&data_e,result);
              
                  return result;

            }else{

                  opc=true;
		  
            }
	    
	    //if RNG create two identical numbers, change x_n in the RNG 
            if(result==data_e->num){

                  x_n++;

            }
            cont++;
      }
     
}


//encrypt de archive 
void encrypt_operation(FILE *archive_inp,FILE *archive_otp,int i){
      char aux,aux2;
      imt aux_i;
      
      //save th character in aux
      fscanf(archive_inp,"%c",&aux);

      //transform the char to int the charater of de archive
      aux_i=(int)aux;

      //move to other in char ASCII with RNG result
      i=i+aux_i;

      //solution overflow
      if (i>=255) {

            i=i-255;
            
      }

      //creation of the char encryptation
      aux2=(char)i;

      //put char in the encrypt new archive
      fprintf(archive_otp,"%c",aux2);

      
           
}
