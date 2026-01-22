// 函数: sub_474efc
// 地址: 0x474efc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (data_4b1cfc != 0)
    UnhookWindowsHookEx(data_4b1cfc)

data_4b1cfc = 0

if (data_4b1d00 != 0)
    SetEvent(data_4b1cf8)
    
    if (GetCurrentThreadId() != data_4b1cf4)
        WaitForSingleObject(data_4b1d00, 0xffffffff)
    
    CloseHandle(data_4b1d00)
    data_4b1d00 = 0

return 0
