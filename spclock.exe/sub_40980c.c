// 函数: sub_40980c
// 地址: 0x40980c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(sub_405018(arg1), &findFileData)

if (hFindFile == 0xffffffff)
    return 0

FindClose(hFindFile)
BOOL result
result.b = (findFileData.dwFileAttributes.b & 0x10) == 0
return result
