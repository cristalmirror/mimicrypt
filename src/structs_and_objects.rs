
use rand::{SeedableRng,Rng};
use std::fs::File;
use std::{os::unix::fs::MetadataExt,cmp::PatialOrd};
use std::io;

//** struct of the object that encrypt archive **
mod EcryptSystem {
    struct HashTable;

    //this object can encrpt archives
    struct Ecrypt{

        key: i64,

    }

    //this object decrypt archives
    struct Decrypt{

        respetion_key: u64,
    
    }

}
    
//** methods **


impl Encript{

    // generate the key to de system 
    fn gen_aleatory_key(&self) {

	
	    let mut rg_num_obj = rand::thread_rng();
	
	    let ale_1: i64 = rg_num_obj.gen_range(1000000..=9999999);

	    let ale_2: i64 = rg_num_obj.gen_range(1000000..=9999999);

	    //the key is the  result of two aleatory threads execution
	    self.key = ale_1 + ale_2;
	
	
    }

    fn randomice_poition(&self,cont:i32) -> :i32 {

        //this are wrong
        let aux:i32 = self.key;
            
        if (aux > 0) && (aux < 256) {

            
        }  
            
        
    }
    
    //encrypt of archive
    fn ecrypt_archive_system( arg_opc: String) {

	    //open the archive to encrypt
	    let mut encrypt_archive = File::open(arg_opc)?;
        
	    //create object to brows metadata
	    let objet_metafs = fs::metadata(arg_opc);

	    //generate the positions of character of archive to encrypt
	    let pos_to_crypt: Vec<i32> = Vec::new();

	    let i: i32 = 0;

	    //generate the map to encrypt
	    while 0 < objet_metafs.size() {


            
            
            i = i + 1;
        }
	
    }
	

}

impl HashTable {

    
    
    
}
