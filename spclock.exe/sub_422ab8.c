// 函数: sub_422ab8
// 地址: 0x422ab8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

InitializeCriticalSection(&data_4b19d4)
HANDLE result = CreateEventA(nullptr, 0xffffffff, 0, sub_422ae6+2)
data_4b19bc = result

if (data_4b19bc != 0)
    return result

return sub_40e584()
