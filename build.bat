@echo off
setlocal EnableDelayedExpansion
chcp 65001 > nul
title Сборка SWD2K Project (Ninja + Tests)

set BUILD_DIR=build_ninja
set GENERATOR=Ninja
set BUILD_TYPE=Release

where cmake > nul || (
    echo Ошибка: CMake не найден в системе
    echo Установите CMake: https://cmake.org/download/
    pause
    exit /b 1
)

where ninja > nul || (
    echo Ошибка: Ninja не найден в системе
    echo Установите Ninja: https://github.com/ninja-build/ninja/releases
    pause
    exit /b 1
)

if exist "%BUILD_DIR%" (
    echo Очистка предыдущей сборки...
    rmdir /s /q "%BUILD_DIR%"
)

mkdir "%BUILD_DIR%"
if %errorlevel% neq 0 (
    echo Ошибка создания папки сборки
    pause
    exit /b 1
)

echo Генерация проекта...
cd "%BUILD_DIR%"
cmake -G "%GENERATOR%" -DCMAKE_BUILD_TYPE=%BUILD_TYPE% ..
if %errorlevel% neq 0 (
    echo Ошибка генерации проекта
    pause
    exit /b 1
)

echo Сборка проекта...
ninja
if %errorlevel% neq 0 (
    echo Ошибка сборки проекта
    pause
    exit /b 1
)

echo Запуск тестов...
ctest --output-on-failure
if %errorlevel% neq 0 (
    echo Некоторые тесты не прошли
)

cd ..
echo.
echo ======================
echo Сборка завершена!
echo Основные файлы:
echo - %BUILD_DIR%\insertion_sort\insertion_sort_run.exe
echo - %BUILD_DIR%\menu_homework3\menu_homework3.exe
echo Тесты: %BUILD_DIR%\insertion_sort\tests\insertion_sort_tests.exe
echo ======================
pause