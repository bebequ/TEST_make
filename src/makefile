CC=gcc
RM=rm

ifeq ($(RELEASE), 1)
CFLAGS=-O2 -DNDEBUG
OBJS_DIR=Release
else
CFLAGS=-g -O0 -DDEBUG
OBJS_DIR=Debug
endif

TARGET=demo
SRCS=demo.c
OBJS=$(SRCS:%.c=$(OBJS_DIR)/%.o)

CFLAGS+=-I./mod0 -I./mod1
LFLAGS=-L./mod0 -lmod0 -L./mod1 -lmod1

export
all:$(TARGET)

$(TARGET):$(OBJS)  
	$(CC) $^ -o $@ $(LFLAGS)

$(OBJS_DIR)/%.o:%.c
	$(MAKE) -C ./mod0 
	$(MAKE) -C ./mod1 
	@`[ -d $(OBJS_DIR) ] || mkdir $(OBJS_DIR)`
	$(CC) -c $^ -o $@ $(CFLAGS)

clean:
	$(RM) -f $(TARGET)
	$(RM) -rf $(OBJS_DIR)
	$(MAKE) -C ./mod0 clean 
	$(MAKE) -C ./mod1 clean 
