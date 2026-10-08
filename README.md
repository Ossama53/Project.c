# Conditional Compilation Demo in C

A small C project that shows how the preprocessor can build a program at compile time, using macros (`D` and `B`) as on/off switches.

## Files

- `main.c` - entry point. Defines `D` and `B`, then includes `outer_loop.inc` inside `main()`.
- `outer_loop.inc` - if `D` is defined, opens a loop over `a` and prints `D: a`. If `B` is defined, includes `inner_loop.inc` inside it.
- `inner_loop.inc` - loop over `I`. Prints `I * a` if `D` is defined, otherwise prints `I`.

The `.inc` files are code fragments, not standalone programs.

## Build and Run

```bash
gcc main.c -o demo
./demo
```

## Try It

Remove a `#define` line in `main.c` and rebuild to see the output change:

| Defined | Output |
|---|---|
| `D` and `B` | `D: a` followed by `BD(I*a)` lines |
| `B` only | `B: 0` to `B: 9` |
| `D` only | `D: 0` to `D: 9` |
| none | nothing |
