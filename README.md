# Snail-Task
A snail is stuck at the bottom of a well which is of height H. Initially, the snail is at height 0
and it tries to get out. Well, being at the bottom (i.e., height 0) has its upsides. For instance, the
snail can’t slide down any further (cannot slide into negative height).

A day is made out of N phases. During each phase, the snail will either try to climb up a
certain amount, or rest and slide down a certain amount. The snail knows how much it would
move in each phase and this is denoted by Pi. If positive, this means that the snail will travel
upwards, if negative, the snail will slide downwards (until height 0), if zero, the snail will maintain its height.

Find out the first day and phase such that the snail reaches a height of H to exit the well.

Warning: For C++ users, remember to use long long data type (and %lld format specifier for scanf and printf), for Java users, remember to use long data type.

# Input format
Your program must read from standard input.
The first line of input contains two positive integers H, denoting the height of the well and
N, denoting the number of phases per day.
The next line of input contains N signed integers (separated by spaces) describing the snail’s
routine: P0, P1, P2, . . . , PN−1 where Pi denotes the amount the snail travels in phase i.

# Output format
Your program must print to standard output.
Your program should print one line with two integers, separated by a space.
If the snail can reach the top of the well (i.e. height H) for the first time on the phase P of
day D, your output should be D followed by P.
Otherwise, if the snail will always be stuck in the well, your output should be −1 followed
by −1.

Credits / More: [GitHub](https://github.com/ranaldmiao/sg_noi_archive)
