AR=ar
RANLIB=ranlib
RM=rm

ifeq ($(RELEASE), 1)
CFLAGS=-O2 -DNDEBUG
OBJS_DIR=Release
else
CFLAGS=-g -O0 -DDEBUG
OBJS_DIR=Debug
endif 

LIB_SRCS=myadd.c mysub.c
LIB_OBJS=$(LIB_SRCS:%.c=$(OBJS_DIR)/%.o)
LIB_TARGET=libmod0.a

all:$(LIB_TARGET)

$(LIB_TARGET):$(LIB_OBJS)
	$(AR) crv $@ $^
	$(RANLIB) $@

$(OBJS_DIR)/%.o:%.c
	@`[ -d $(OBJS_DIR) ] || mkdir $(OBJS_DIR)`
	$(CC) -o $@ -c $^ $(CFLAGS)

clean:
	$(RM) -f $(LIB_TARGET) 
	$(RM) -rf $(OBJS_DIR)

