---
tags: programming-language
---
# Rust
[Rust](https://www.rust-lang.org/)

[Command line apps in Rust](https://rust-cli.github.io/book/index.html)

## Learn
[The Cargo Book](https://doc.rust-lang.org/cargo/)

[The Rust Unstable Book](https://doc.rust-lang.org/nightly/unstable-book/)

[The rustup book](https://rust-lang.github.io/rustup/)

[Rust by Example](https://doc.rust-lang.org/rust-by-example/)

[The Rust Programming Language](https://doc.rust-lang.org/stable/book/)
## Crates
[clap](https://docs.rs/clap/latest/clap/): Command Line Argument Parser for Rust

[argh]()

## etc
[Why Discord is switching from Go to Rust](https://discord.com/blog/why-discord-is-switching-from-go-to-rust)

## [rustup](https://rustup.rs/)
```
export RUSTUP_HOME="${HOME}/.local/share/rustup"
export CARGO_HOME="${HOME}/.local/share/cargo"
```

## Tips
[debug-assertions](https://doc.rust-lang.org/cargo/reference/profiles.html)
```rust
#[cfg(debug_assertions)]
fn func()
```