
use rand::Rng;
use std::fs::File;

//** struct of the object that encrypt archive **

struct HashTable;

//this object can encrpt archives
struct Ecrypt{

    key: i64,

}

//this object decrypt archives
struct Decrypt{

    respetion_key: u64,
    
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

    //encrypt of archive
    fn ecrypt_archive_system(&self, arg_opc: String) {


	let mut encrypt_archive = File::open(arg_opc)?;
	
    }
	

}

impl HashTable {

    
    
    
}
