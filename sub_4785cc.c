// 函数: sub_4785cc
// 地址: 0x4785cc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HWND eax
uint32_t ecx
int32_t edx
eax, ecx, edx = GetCapture()

if (eax == 0)
    HWND hWnd = *arg2
    int32_t* i_1 = *(arg1 + 0x44)
    int32_t* i
    
    if (i_1 == 0 || hWnd != i_1[0xa7])
        uint32_t ecx_1
        int32_t edx_1
        
        for (i = sub_454230(hWnd, edx, ecx); i == 0; i = sub_454230(hWnd, edx_1, ecx_1))
            HWND hWnd_1
            hWnd_1, ecx_1, edx_1 = GetParent(hWnd)
            hWnd = hWnd_1
            
            if (hWnd == 0)
                break
    else
        i = i_1
    
    if (i != 0)
        int32_t* i_2 = i
        i.w = 0xffb1
        return sub_403e64(i_2, i, arg2)

return 0
