// 函数: sub_45457c
// 地址: 0x45457c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HWND eax
uint32_t ecx
int32_t edx_1
eax, ecx, edx_1 = GetCapture()
HANDLE result = sub_454230(eax, edx_1, ecx)

if (result != 0 && data_4ab920 != 0 && result == *(data_4ab920 + 0x30))
    return data_4ab920

return result
