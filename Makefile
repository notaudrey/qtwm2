VERSION=20130209-2
DIST=qtwm-$(VERSION)
SRC=qtwm.c list.c config.h events.h list.h hidden.c
DISTFILES=Makefile scripts $(SRC)

CFLAGS+=-g -std=c99 -Wall -Wextra -I/usr/local/include #-DDEBUG #-DDMALLOC
LDFLAGS+=-L/usr/local/lib -lxcb -lxcb-randr -lxcb-keysyms -lxcb-icccm \
	-lxcb-util #-ldmalloc

RM=/bin/rm
PREFIX=/usr/local

TARGETS=qtwm hidden
OBJS=qtwm.o list.o

all: $(TARGETS)

qtwm: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $@

hidden: hidden.c
	$(CC) $(CFLAGS) hidden.c $(LDFLAGS) -o $@

qtwm-static: $(OBJS)
	$(CC) $(OBJS) -static $(CFLAGS) $(LDFLAGS) \
	-lXau -lXdmcp -o $@

qtwm.o: qtwm.c events.h list.h config.h Makefile

list.o: list.c list.h Makefile

install: $(TARGETS)
	install -m 755 qtwm $(PREFIX)/bin
	install -m 755 hidden $(PREFIX)/bin

uninstall: deinstall
deinstall:
	$(RM) $(PREFIX)/bin/qtwm
	$(RM) $(PREFIX)/bin/hidden

$(DIST).tar.bz2:
	mkdir $(DIST)
	cp -r $(DISTFILES) $(DIST)/
	tar cf $(DIST).tar --exclude .git $(DIST)
	bzip2 -9 $(DIST).tar
	$(RM) -rf $(DIST)

dist: $(DIST).tar.bz2

clean:
	$(RM) -f $(TARGETS) *.o

distclean: clean
	$(RM) -f $(DIST).tar.bz2
