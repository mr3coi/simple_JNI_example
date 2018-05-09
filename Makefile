TARGET:=JNIApp
EXT=jnilib
TARGET_LIB:=lib$(TARGET)Impl.$(EXT)
LIB_PATH=./lib
INCLUDE_PATH=./include

all: $(TARGET)

$(TARGET): $(TARGET_LIB)
	java -cp ./classes -Djava.library.path=$(LIB_PATH) $(TARGET)

$(TARGET_LIB): $(TARGET).h
	gcc -o $(LIB_PATH)/$(TARGET_LIB) -lc -shared -I/System/Library/Frameworks/JavaVM.framework/Headers -I $(INCLUDE_PATH) ./src/$(TARGET).cpp

$(TARGET).h: $(TARGET).class
	javah -d ./include -cp ./classes $(TARGET)

$(TARGET).class: ./src/$(TARGET).java
	javac -d ./classes/ ./src/$(TARGET).java

clean:
	rm ./classes/*; rm ./lib/*; rm ./include/*
