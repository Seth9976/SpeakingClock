// 函数: sub_47bcc4
// 地址: 0x47bcc4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* edx
HWND result = sub_459b98(arg1, edx)
int32_t ebx

if (arg1[0x6c].b == 0 || *(arg1 + 0x1b1) != 0)
    ebx = 0
else
    result = (*(*arg1 + 0x50))()
    
    if (result.b == 0 || *(arg1 + 0x5d) == 1)
        ebx = 0
    else
        result = GetCapture()
        
        if (result == 0)
            ebx.b = 1
        else
            ebx = 0

if (ebx.b == 0)
    result = sub_465ac4(sub_4659bc())

if ((ebx.b != 0 || result.b != 0) && (arg1[7].b & 0x10) == 0)
    *(arg1 + 0x1b1) = 1
    result = (*(*arg1 + 0x50))()
    
    if (result.b != 0)
        return (*(*arg1 + 0x84))()

return result
