# Memory Safety

### :bookmark: Requirements
- [GCC](https://gcc.gnu.org/)
- [G++](https://www.mingw-w64.org/)
- [Rust](https://www.rust-lang.org/pt-BR)

## :triangular_flag_on_post: Starting

```bash
#Clone the project
git clone https://github.com/arielroque/memory-safety.git

#Enter in the folder 
cd memory-safety
```
## :microscope: Tests

### Undefined Behavior
Let's test how C/C++ language handles undefinied behavior

> **Undefined Behavior:** It is when the compiler does not know how to handle with a case
  and just displays an sort of memory address
  
> **Test:** We will use a C/C++ code that try access a invalid position of one array

```bash
# Test with C
gcc ./c/undefined_behavior.c -o ./c/undefined_behavior
./c/undefined_behavior

# Test with C++
#g++ ./c++/undefined_behavior.cpp -o ./c++/undefined_behavior
#./c++/undefined_behavior
```
You will see something like that

```bash
Position 1 have:1
Position 2 have:2
Position 3 have:3
Position 4 have:4
Position 5 have:-702137232
```

### Buffer Overflow

Let's test how C/C++ handles with buffer overflow

> **Buffer Overflow:** It is when the software use a memory that is not allocated to be used in the first place. All information stored in this positions will be lost when the system allocated to another process.

> **Test:** In this case, we will update the previous code and add a pointer to a invalid position by setting a value.

```bash
# Test with C
gcc ./c/buffer_overflow.c -o ./c/buffer_overflow
./c/buffer_overflow

# Test with C++
#g++ ./c++/buffer_overflow.cpp -o ./c++/buffer_overflow
#./c++/buffer_overflow
```

You will see something like that

```bash
Position 1 have: 1 
Position 2 have: 2 
Position 3 have: 3 
Position 4 have: 4 
Position 5 have: 2000 
```
### Building with Rust

Let`s see how Rust handle with undefined behavior when we try to compile the code

```bash
cargo build --manifest-path=rust/Cargo.toml
```
You will see something like that

```bash
error: this operation will panic at runtime
  --> src/main.rs:11:36
   |
11 |     println!("Position 5 have: {}",array[4]);
   |                                    ^^^^^^^^ index out of bounds: the length is 4 but the index is 4
   |
   = note: `#[deny(unconditional_panic)]` on by default

error: could not compile `rust` due to previous error
```
