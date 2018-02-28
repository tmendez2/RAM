@CALL "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\Common7\Tools\VsDevCmd.bat"

Regasm.exe "%~dp0RAM.dll" /tlb:"%~dp0RAM.tlb" /codebase 

ECHO.
PAUSE