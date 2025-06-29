import os
import os

# def generate_main_cpp_content():
#     return '''\
# #include<android/log.h>
# #include <Arduino.h>

# void setup() {
#     Serial.begin(115200);
#     delay(1000); // Wait for serial to initialize
# }
# void loop() {
    
# }
# '''

def create_exercise_folders(start, end, base_path="."):
    for i in range(start, end + 1):
        folder_name = f"B{i:03d}"  # B001, B002, ...
        full_path = os.path.join(base_path, folder_name)
        os.makedirs(full_path, exist_ok=True)
        
        # file_path = os.path.join(full_path, "main.cpp")
        # with open(file_path, "w", encoding="utf-8") as f:
        #     f.write(generate_main_cpp_content())
        # print(f"✅ Created {file_path}")

# Nhập khoảng số bài
start = int(input("Nhập số bài bắt đầu: "))
end = int(input("Nhập số bài kết thúc: "))

create_exercise_folders(start, end)


def create_exercise_folders(start, end, base_path="."):
    for i in range(start, end + 1):
        folder_name = f"B{i:03d}"  # B001, B002, ...
        full_path = os.path.join(base_path, folder_name)
        os.makedirs(full_path, exist_ok=True)
        
        # file_path = os.path.join(full_path, "main.cpp")
        # with open(file_path, "w", encoding="utf-8") as f:
        #     f.write(generate_main_cpp_content())
        # print(f"✅ Created {file_path}")

# Nhập khoảng số bài
start = int(input("Nhập số bài bắt đầu: "))
end = int(input("Nhập số bài kết thúc: "))

create_exercise_folders(start, end)
