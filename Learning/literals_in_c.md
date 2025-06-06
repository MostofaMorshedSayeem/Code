# Literals in C

In C programming, **literals** are constants or fixed values that appear directly in the code. They are used to represent values that do not change during the execution of the program.

---

## 1. Integer Literals

### ✅ Definition
Integer literals are numeric constants that represent whole numbers. By default, they are of type `int`. You can represent integer literals in different bases using **prefixes** and modify their types using **suffixes**.

### 🔹 Integer Literal Forms
| Base       | Prefix   | Example     |
|------------|----------|-------------|
| Decimal    | (none)   | `100`, `42` |
| Octal      | `0`      | `075`, `012`|
| Hexadecimal| `0x` or `0X` | `0xFF`, `0X1A3` |
| Binary *(GCC/Clang)* | `0b` or `0B` | `0b1010` *(non-standard)* |

### 🔹 Integer Literal Suffixes
| Suffix     | Meaning                        | Example     |
|------------|--------------------------------|-------------|
| `u` or `U` | Unsigned int                   | `100u`      |
| `l` or `L` | Long int                       | `100L`      |
| `ul`, `UL` | Unsigned long int              | `100UL`     |
| `ll`, `LL` | Long long int                  | `100LL`     |
| `ull`, `ULL` | Unsigned long long int       | `100ULL`    |

### 💡 Example Code

```c
#include <stdio.h>

int main() {
    int dec = 100;          // Decimal
    int oct = 075;          // Octal (base 8)
    int hex = 0xFF;         // Hexadecimal (base 16)
    unsigned int u = 42u;   // Unsigned int
    long l = 100L;          // Long int
    long long ll = 100LL;   // Long long int

    printf("Decimal: %d\n", dec);
    printf("Octal: %d\n", oct);
    printf("Hex: %d\n", hex);
    printf("Unsigned: %u\n", u);
    printf("Long: %ld\n", l);
    printf("Long Long: %lld\n", ll);
    return 0;
}
```

---

## 2. String Literals

### ✅ Definition
A **string literal** is a sequence of characters enclosed in double quotes. They are stored as arrays of characters terminated by a null character (`\0`).

### 💡 Example

```c
#include <stdio.h>

int main() {
    char *greeting = "Hello, World!";
    printf("%s\n", greeting);  // Output: Hello, World!
    return 0;
}
```

### 🔹 Multi-line String Literals

```c
#include <stdio.h>

int main() {
    printf("This is a very long string "
           "that continues on the next line.\n");
    return 0;
}
```

---

## Summary

| Literal Type   | Example        | Notes |
|----------------|----------------|-------|
| Decimal        | `42`           | Base 10 |
| Octal          | `075`          | Base 8 (prefix `0`) |
| Hexadecimal    | `0x1A3F`       | Base 16 (prefix `0x`) |
| Unsigned       | `42U`          | Unsigned int |
| Long           | `42L`          | Long int |
| String         | `"Hello"`      | Enclosed in double quotes |

---

## Use Cases

- Use **hexadecimal literals** for bitwise operations, memory addresses, flags.
- Use **string literals** for static text, messages, or initializing character arrays.
- Use **suffixes** to handle very large values or unsigned computations correctly.

