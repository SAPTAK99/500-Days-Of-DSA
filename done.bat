@echo off
if "%~1"=="" (
    echo Usage: done "problem-name"
    exit /b 1
)
git add .
git commit -m "solved: %~1"
git push
echo Pushed: %~1