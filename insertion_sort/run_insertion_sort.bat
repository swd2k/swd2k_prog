@echo off
chcp 65001 > nul
setlocal enabledelayedexpansion


set SOURCES=main.cpp io.cpp sortings\sortings.cpp
set INCLUDES=-Isortings
set EXE=insertion_sort.exe
set CXX=g++


set CXXFLAGS=-Wall -Wextra -O2


if exist "%EXE%" (
    echo Удаление предыдущей версии...
    del "%EXE%"
)


echo Компиляция проекта...
echo Используемые исходники: %SOURCES%
%CXX% %CXXFLAGS% %INCLUDES% %SOURCES% -o %EXE%

if errorlevel 1 (
    echo.
    echo ОШИБКА КОМПИЛЯЦИИ!
    echo Возможные причины:
    echo 1. Не установлен MinGW/g++
    echo 2. Неправильные пути к файлам
    echo 3. Ошибки в исходном коде
    echo.
    echo Проверьте: where g++
    pause
    exit /b 1
)


if exist "%EXE%" (
    echo.
    echo Программа успешно скомпилирована
    echo ----------------------------------------
    "%EXE%"
    echo.
    echo ----------------------------------------
    echo Программа завершила выполнение с кодом %errorlevel%
) else (
    echo ОШИБКА: Исполняемый файл не создан
)

pause
endlocal
