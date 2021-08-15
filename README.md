# Lottery Scheduler on XV6 operating system
This is the final project for the Operating Systems subject (2019) which is based on OSTEP book.
Replace the current round-robin scheduler in xv6 with a lottery scheduler

The main idea from OSTEB book:
- Assign each running process a slice of the processor in proportion to the number of tickets it has.
- The more tickets a process has, the more it runs.
- Each time slice, a randomized lottery determines the winner of the lottery.
- that winning process is the one that runs for that time slice.
