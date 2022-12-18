fn main() {

    let array:[i8;4] = [1,2,3,4];

    println!("Position 1 have: {}",array[0]);
    println!("Position 2 have: {}",array[1]);
    println!("Position 3 have: {}",array[2]);
    println!("Position 4 have: {}",array[3]);
    
    //Acessing a position that do not exist in our array 
    println!("Position 5 have: {}",array[4]);

}
