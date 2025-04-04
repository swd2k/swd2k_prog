@echo off
setlocal EnableDelayedExpansion
chcp 65001 > nul
title Сборка меню SWD2K

where g++ > nul 2>&1
if %errorlevel% neq 0 (
    echo Ошибка: Компилятор g++ не найден
    pause
    exit /b 1
)

if exist "menu_homework3.exe" del "menu_homework3.exe"

echo Компиляция программы...
g++ -std=c++17 -Wall -Wextra -O2 ^
    -finput-charset=UTF-8 -fexec-charset=UTF-8 ^
    main.cpp menu_functions.cpp menu_items.cpp ^
    -o menu_homework3.exe

if %errorlevel% neq 0 (
    echo Ошибка компиляции
    pause
    exit /b 1
)

if not exist "menu_homework3.exe" (
    echo Ошибка: Исполняемый файл не создан
    pause
    exit /b 1
)

echo Сборка успешно завершена!
pause