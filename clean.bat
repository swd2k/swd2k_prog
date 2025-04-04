@echo off
setlocal
chcp 65001 > nul
title Очистка проекта SWD2K

echo Удаление папок сборки...
for /d %%d in (build_*) do (
    echo Удаление папки: %%d
    rmdir /s /q "%%d"
)

echo.
echo Очистка завершена!
pause
endlocal