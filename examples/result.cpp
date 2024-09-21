#include "preclude.h"

fn main() -> i32 {
    let ok_val = Ok<usize, str>(1);
    println("is ok_val ok: {}", ok_val.is_ok());
    println("ok_val value: {}", ok_val.unwrap());

    let err_val = Err<usize, str>("Error message");
    println("is err_val err: {}", err_val.is_err());
    println("err_val value: {}" , err_val.unwrap_err());
}