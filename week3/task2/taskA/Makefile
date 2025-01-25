# Имя исполняемого файла
TARGET = bin/main

# Папки
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include

# Исходные файлы
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
# Объектные файлы
OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))

# Компилятор и флаги
CXX = g++
CXXFLAGS = -I$(INC_DIR) -Wall -g

# Правило по умолчанию
all: $(TARGET)

# Правило для создания исполняемого файла
$(TARGET): $(OBJS)
	$(CXX) -o $@ $^

# Правило для создания объектных файлов
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Очистка
clean:
	rm -f $(OBJ_DIR)/*.o $(TARGET)
