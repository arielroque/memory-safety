# Rust Memory Safe


```bash
gcc main.c -o main
./main

Position 0 have: 1 
Position 1 have: 2 
Position 2 have: 3 
Position 3 have: 1898222336 
```

```bash
Position 1 have:1
Position 2 have:2
Position 3 have:3
Position 4 have:4
Position 5 have:-702137232
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