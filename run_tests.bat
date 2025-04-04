@echo off
setlocal EnableDelayedExpansion
chcp 65001 > nul
title Тестирование проекта SWD2K


set BUILD_DIR=build_ninja
set TEST_REPORT=test_results.log


where ctest > nul || (
    echo Ошибка: ctest не найден в системе
    echo Установите CMake: https://cmake.org/download/
    pause
    exit /b 1
)

if not exist "%BUILD_DIR%" (
    echo Ошибка: Папка сборки "%BUILD_DIR%" не найдена
    echo Сначала выполните build.bat
    pause
    exit /b 1
)


set /a CORES=%NUMBER_OF_PROCESSORS% - 1
if %CORES% lss 1 set CORES=1


echo.
echo [%TIME%] Запуск тестов с использованием %CORES% ядер...
echo Результаты будут сохранены в %TEST_REPORT%
echo.

cd "%BUILD_DIR%"
ctest --output-on-failure -j %CORES% -C Release -T test 2>&1 | tee "%TEST_REPORT%"
set TEST_RESULT=%errorlevel%


echo.
echo ====== Сводка результатов ======
type "%TEST_REPORT%" | findstr /C:"tests passed" /C:"test failed"
echo.

if %TEST_RESULT% equ 0 (
    echo УСПЕХ: Все тесты пройдены!
) else (
    echo ОШИБКА: Обнаружены непройденные тесты!
    echo Подробности в файле %BUILD_DIR%\%TEST_REPORT%
)


cd ..
echo.
pause
endlocal