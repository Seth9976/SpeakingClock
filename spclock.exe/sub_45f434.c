// 函数: sub_45f434
// 地址: 0x45f434
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HWND hWnd = *(arg1 + 0x1b4)
BOOL eax

if (hWnd != 0)
    eax = IsWindowVisible(hWnd)

if (hWnd != 0 && eax != 0)
    eax.b = 1
else
    eax = 0

char var_14 = eax.b

if (var_14 != 0)
    ScrollWindow(*(arg1 + 0x1b4), arg2, arg3, nullptr, nullptr)

int32_t esi_1 = sub_45b7f4(arg1) - 1

if (esi_1 s>= 0)
    int32_t i_1 = esi_1 + 1
    int32_t ebp_1 = 0
    int32_t i
    
    do
        int32_t* eax_7 = sub_45b7b8(arg1, ebp_1)
        
        if (sub_403df4(eax_7, &data_453234) == 0 || eax_7[0x6d] == 0)
            eax_7[0x10] += arg2
            eax_7[0x11] += arg3
        else if (var_14 == 0)
            SetWindowPos(eax_7[0x6d], nullptr, eax_7[0x10] + arg2, eax_7[0x11] + arg3, eax_7[0x12], 
                eax_7[0x13], 0x14)
        
        ebp_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return sub_45b338()
