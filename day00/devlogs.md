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


