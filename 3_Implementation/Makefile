PROJ_NAME = Event_Ticket_Booking_System
SRC = main.c\
src/cancel.c\
src/choice1.c\
src/chooseEvent.c\
src/details.c\
src/events.c\
src/eventdetails.c\
src/price.c\
src/reservation.c\
src/tic1.c\
src/tic2.c\
src/tic3.c




TEST_SRC =src/price.c\
src/../test/test.c\
unity/unity.c 
  
#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).$(EXEC)
INC	= -Iinc\
-Iunity

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm


run: all
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

# Build and run of Unit test

build_test:
	gcc $(TEST_SRC) $(INC) $(INCLUDE_LIBS) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

run_test: build_test
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

analyze: test memcheck staticcheck coverage sanitize_check

staticcheck:
	cppcheck --enable=all -iunity .

#clean:
	#$(RM) $(call FixPath,$(PROJ_NAME).$(EXEC))
