cd /usr/src
cp -f schedule.c /usr/src/minix/servers/sched/schedule.c
make build MKUPDATE=yes >log.txt 2>log2.txt
