# Memory Safe

```bash
gcc ./c/undefined_behavior.c -o ./c/undefined_behavior
./c/undefined_behavior

#
#g++ ./c++/undefined_behavior.cpp -o ./c++/undefined_behavior
#./c++/undefined_behavior
```
```bash
Position 0 have: 1 
Position 1 have: 2 
Position 2 have: 3 
Position 3 have: 1898222336 
```

```bash
gcc ./c/buffer_overflow.c -o ./c/buffer_overflow
./c/buffer_overflow

#
#g++ ./c++/buffer_overflow.cpp -o ./c++/buffer_overflow
#./c++/buffer_overflow
```

```bash
Position 1 have:1
Position 2 have:2
Position 3 have:3
Position 4 have:4
Position 5 have:-702137232
```

```bash
cargo build --manifest-path=rust/Cargo.toml
```


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