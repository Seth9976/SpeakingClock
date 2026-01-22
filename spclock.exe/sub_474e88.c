// 函数: sub_474e88
// 地址: 0x474e88
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t threadId = arg1
HHOOK result = data_4b1ce0

if (result->__offset(0xad).b == 0)
    if (data_4b1cfc == 0)
        result = SetWindowsHookExA(WH_GETMESSAGE, sub_474e44, nullptr, GetCurrentThreadId())
        data_4b1cfc = result
    
    if (data_4b1cf8 == 0)
        result = CreateEventA(nullptr, 0, 0, nullptr)
        data_4b1cf8 = result
    
    if (data_4b1d00 == 0)
        result = CreateThread(nullptr, 0x3e8, sub_474de8, nullptr, THREAD_CREATE_RUN_IMMEDIATELY, 
            &threadId)
        data_4b1d00 = result

return result
