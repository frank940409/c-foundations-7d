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