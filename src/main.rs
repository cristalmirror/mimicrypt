use std::{io,env,cmp::PartialEq,fs::File};



//printing the menu option
fn menu_of_system(){
    println!("[ *** MENU OF OPCTIONS IN MIMICRYPT *** ]\n\n");
    println!("[GENERAL OPTIONS]\n");
    println!("[ENCRYPTATION] = -ec");
    println!("[DECRYPTATION] = -dc");
    println!("[HELP]         = -h");
    

}

//main function 
fn main() {
    let args: Vec<String> = env::args().collect();

    //
    if PartialEq::eq("-h",&args[1]) {

	menu_of_system();
	
    } else if PartialEq::eq("-ec",args[1]) {

	encrypt_archive_system(args[2]);

	
	
    }
    
    println!("\n[TAMINIO]: {:?} \n[ARGUMENTOS]: {:?}",args.len(),&args[1..]);
    
}
