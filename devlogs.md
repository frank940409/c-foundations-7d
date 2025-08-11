Development Logs For day00
===
# Temperature convertor program 0802
## The critical bug
In CtoF you wrote:
fahrenheit = (9 / 5 * celsius) + 32;
==9 / 5 is integer division ==→ it evaluates to 1, so the formula becomes 1 * celsius + 32.
That happens to work for 0°C → 32°F, but it’s wrong for others (e.g., 100°C should be 212°F; your code gives 132°F).
++Fix: use floating-point literals:++

fahrenheit = (9.0f / 5.0f) * celsius + 32.0f;
Other improvements (quick wins)
## wrong printed words fixed
line 44 : "Farenheit"

# Calculator program 0802
## What’s good
1.Correct use of switch on the operator.
2.You guarded division by zero.
3." %c" in scanf skips whitespace—good habit.
## Quick fixes (minimal changes)
1.Spelling & style: opterator → op; prefer lower_snake_case for variables.
2.Newlines: add \n after prints so prompts/results don’t mash together.
3.Check input success: always check scanf’s return value.
4.Formatting: print with limited decimals (e.g., %.6g or %.2f) for readability.
5.Use double for user math: more precision for essentially the same effort.
## use %g for printing result 
instead of using %f or %.nf, %g will drop the rest of 0
like, result = 169.1000 / in practical: 169.1;

# 2025-08-03 — Day X: Number Guessing Game
**What I built**
- A console number-guessing game that picks a random integer in [min, max] and gives higher/lower hints.

**What went well**
- Input/loop logic felt smooth.
- Clear hint messages and try counter.

**What I got stuck on**
1) Forgot the RNG formula for a bounded range.
2) Forgot what `rand()` actually returns.

**What I learned / noted**
- Seed once: `srand((unsigned)time(NULL));`
- `rand()` → [0, RAND_MAX]; bounded range: `min + rand() % (max - min + 1)`.
- Added input validation and min/max swap for robustness.

**Extra notes**
I pushed two version of this program to compare my code and gpt's.

# Banking Account program 0804

**What I got stuck on**
1) I forgot the "break;" in the switch case after add the new case 4:
- Causing the code continue running after case4 and goes to the next case which is default.
**What I got more understanding**
The relationship between argument and parameter passing within different functions.
- In C, function arguments are passed by value. That means balance inside deposit/withdra is a copy. The only way your changes get back to main is via the return value—so your line 
float deposit(float balance) : copy the balance in main
balance_in_main =  deposit(balance_in_main);
- If you wrote just deposit(balance_in_main); and ignored the return, the balance in main would not change.
Alternativly, use pointer.
# 2025-08-09 — Day X: pointer review and malloc
I did pointer review and malloc foundamental enhancement.

# 2025-08-11 — Day X: memory allocation review
malloc(), calloc(), realloc() practice;
I spent like 5 mins on malloc and calloc but 11 mins on realloc();
- ps. I forgot to check if realloc() successfully return the address to temp.