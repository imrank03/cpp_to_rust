#[no_mangle]
pub extern fn double_input(input: i32) -> i32 {
    println!("\ndouble_input fnc from rust");
    input * 2
}