// 函数: sub_423290
// 地址: 0x423290
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HANDLE var_2c = *(arg1 + 4)

if (GetCurrentThreadId() != *data_4ac4d8)
    WaitForSingleObject(var_2c, 0xffffffff)
else
    enum WAIT_EVENT i = WAIT_OBJECT_0
    int32_t var_28_1 = data_4b19bc
    
    do
        MSG msg
        
        if (i == 0x2)
            PeekMessageA(&msg, nullptr, 0, 0, PM_NOREMOVE)
        enum WAIT_EVENT i_1
        int32_t ecx_1
        i_1, ecx_1 = MsgWaitForMultipleObjects(2, &var_2c, 0, 0x3e8, QS_SENDMESSAGE)
        i = i_1
        sub_422f9c(ecx_1, i != WAIT_FAILED)
        
        if (i == 0x1)
            sub_422b50(0)
    while (i != WAIT_OBJECT_0)

uint32_t exitCode
BOOL eax_6
int32_t ecx_2
int32_t edx_2
eax_6, ecx_2, edx_2 = GetExitCodeThread(var_2c, &exitCode)
sub_422f9c(ecx_2, (sbb.d(edx_2, edx_2, eax_6 u< 1)).b + 1)
return exitCode
