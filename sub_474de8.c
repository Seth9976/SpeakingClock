// 函数: sub_474de8
// 地址: 0x474de8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

data_4b1cf4 = GetCurrentThreadId()
enum WAIT_EVENT result

while (true)
    result = WaitForSingleObject(data_4b1cf8, 0x64)
    
    if (result != WAIT_TIMEOUT)
        break
    
    if (data_4b1ce0 != 0 && *(data_4b1ce0 + 0x60) != 0)
        int32_t point
        GetCursorPos(&point)
        
        if (sub_455d14(&point) == 0)
            sub_477ca0(data_4b1ce0)

return result
